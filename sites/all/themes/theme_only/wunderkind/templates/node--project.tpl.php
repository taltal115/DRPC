<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
  $video_url = '';
  if($content['field_media_type'][0]['#markup'] == 'Video') {
    if(strpos($content['field_video_url'][0]['#markup'], 'vimeo') !== FALSE) {
       preg_match('|/(\d+)|', $content['field_video_url'][0]['#markup'], $matches);
       $video_url = 'http://player.vimeo.com/video/' . $matches[1] . '?title=0&amp;byline=0&amp;portrait=0&amp;color=FFFFFF';
    }
    else if(strpos($content['field_video_url'][0]['#markup'], 'youtube') !== FALSE){
       $id = substr($content['field_video_url'][0]['#markup'], strpos($content['field_video_url'][0]['#markup'], '?v=') + 3);
       $video_url = 'http://www.youtube.com/embed/' . $id .'?theme=dark&color=white';
    }
    $media = '<div class="video-holder post-img">
      <iframe src="' . $video_url . '" frameborder="0" allowfullscreen="" width = "1140px" height = "641px"></iframe>
    </div>';
  }
  elseif(count(element_children($content['field_images']))) {
    $media = '<div class="flexslider project-img">
    <ul class="slides">';
    foreach(element_children($content['field_images']) as $i) {
      if($content['field_view_mode'][0]['#markup'] == 'Center Media') {
        $content['field_images'][$i]['#image_style'] = 'project_1140_591';
      }
      $media .= '<li>' . render($content['field_images'][$i]) . '</li>';
    }
    $media .= '</ul>
    </div>';
  }
  $media .= '<div class="pager">
    <a href="' . url('node/' . $node->prev->nid) . '"><button type="button" class="btn btn-primary" style="float:left"><i class="icon ion-arrow-left-b"> </i> ' . t('Older') . '</button></a>
    <a href="' . url('node/' . $node->next->nid) . '"><button type="button" class="btn btn-primary" style="float:right"> ' . t('Newer') . ' <i class="icon ion-arrow-right-b"></i></button></a>
  </div>';

  $description = '<div class="blog-widget-container">
    <h4>' . t($content['body']['#title']) . '</h4>
    ' . render($content['body']) . '
  </div>';

  $details = '<div class="blog-widget-container">
    <h4>' . t($content['field_project_details']['#title']) . '</h4>
    ' . render($content['field_project_details']) . '
  </div>
  <h4>' . t($content['field_tags']['#title']) . '</h4>
  <ul class="tags-list">';
  foreach(element_children($content['field_tags']) as $i) {
    $details .= '<li>' . render($content['field_tags'][$i]) . '</li>';
  }                              
  $details .= '</ul>';
?>

<div class="row project-node">
  <?php switch ($content['field_view_mode'][0]['#markup']) {
    case 'Center Media': ?>
      <div class="col-lg-12">
        <?php print $media; ?>
      </div>
      <div class = "col-md-12">
        <div class="col-sm-6">
          <?php print $description; ?>
        </div>
        <div class = "col-sm-6">
          <?php print $details; ?>
        </div>
      </div>
      <?php break;?>
    <?php case 'Left Media': ?>
      <div class="col-lg-8">
        <?php print $media; ?>
      </div>
      <div class="col-lg-4">
        <?php print $description; ?>
        <?php print $details; ?>
      </div>
      <?php break;?>
    <?php case 'Right Media': ?>
      <div class="col-lg-4">
        <?php print $description; ?>
        <?php print $details; ?>
      </div>
      <div class="col-lg-8">
        <?php print $media; ?>
      </div>
      <?php break;?>
  <?php } ?>
</div>
<div class="spacer md"></div>