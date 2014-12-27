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
?>
<?php if(isset($fields['title']->content)): ?>
  <h2 class="post-title"><?php print $fields['title']->content; ?></h2>
<?php endif; ?>

<p><?php print t('by'); ?> <?php print $fields['name']->content; ?> <small><?php print isset($fields['field_position']->content) ? $fields['field_position']->content : ''; ?></small></p>

<p><span class="icon ion-ios7-clock"></span> <?php print t('Posted on') . ' ' . $fields['created']->content; ?></p>

<?php if(isset($fields['body']->content)): ?>
  <p><?php print $fields['body']->content; ?></p>
<?php endif; ?>

<a class="btn btn-primary" href="<?php print $fields['path']->content; ?>"><?php print t('Continue Reading'); ?></a>

<div class="spacer md"></div>