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
global $projects_categories;
$categories = array();
foreach(explode(' / ', $fields['field_tags']->content) as $category) {
	$category_id = preg_replace('/[^a-zA-Z0-9\']/', '-', $category);
	$projects_categories[$category_id] = $category;
	$categories[] = $category_id;
}
// Possible links: Image or Video
$zoom_link = $fields['field_media_type']->content == 'Images' ? file_create_url(file_default_scheme() . '://' . trim($fields['field_images_1']->content)) : $fields['field_video_url']->content;
$zoom_link = (strpos($zoom_link, 'http://') === FALSE ? 'http://' : '') . $zoom_link;
// Setup default image for Video media
if(empty($fields['field_images']->content) && $fields['field_media_type']->content == 'Video') {
  $fields['field_images']->content = theme('image', array('path' => path_to_theme() . '/img/video-' . (strpos($zoom_link, 'youtube') !== FALSE ? 'youtube' : 'vimeo') . '.jpg'));
}
?>
<li class="cbp-item <?php print implode(' ', $categories); ?>">
  <figure>
    <?php print $fields['field_images']->content; ?>
    <figcaption>
      <a href="<?php print $zoom_link; ?>" class="cbp-lightbox" data-title="<?php print $fields['title']->content; ?>"><i class="fa fa-search fa-2x"></i></a>
      <a href="<?php print $fields['path']->content; ?>" class="cbp-singlePage"><i class="fa fa-expand fa-2x"></i></a>
    </figcaption>
  </figure> 
</li> 