<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
$video_url = '';
if($fields['field_media_type']->content == 'Video') {
  if(strpos($fields['field_video_url']->content, 'vimeo') !== FALSE) {
     preg_match('|/(\d+)|', $fields['field_video_url']->content, $matches);
     $video_url = 'http://player.vimeo.com/video/' . $matches[1] . '?title=0&amp;byline=0&amp;portrait=0&amp;color=FFFFFF';
  }
  else if(strpos($fields['field_video_url']->content, 'youtube') !== FALSE){
     $id = substr($fields['field_video_url']->content, strpos($fields['field_video_url']->content, '?v=') + 3);
     $video_url = 'http://www.youtube.com/embed/' . $id .'?theme=dark&color=white';
  }
  $media = '<div class="video-holder post-img">
    <iframe src="' . $video_url . '" frameborder="0" allowfullscreen="" width = "1140px" height = "641px"></iframe>
  </div>';
}
elseif($fields['field_images']->content) {
  $media = '<div class="flexslider project-img">
    <ul class="slides">
    <li>' . $fields['field_images']->content . '</li>
    </ul>
  </div>';
}
?>

<?php print $media; ?>

<h2 class="post-title"><?php print $fields['title']->content; ?></h2>

<p><?php print t('by'); ?> <?php print $fields['name']->content; ?> <small><?php print $fields['field_position']->content; ?></small></p>

<p><span class="icon ion-ios7-clock"></span> <?php print t('Posted on') . ' ' . $fields['created_1']->content; ?></p>

<p><?php print $fields['body']->content; ?></p>

<a class="btn btn-primary" href="<?php print $fields['path']->content; ?>"><?php print t('Continue Reading'); ?></a>

<div class="spacer md"></div>