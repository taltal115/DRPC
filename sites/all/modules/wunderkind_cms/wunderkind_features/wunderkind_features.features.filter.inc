<?php
/**
 * @file
 * wunderkind_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wunderkind_features_filter_default_formats() {
  $formats = array();

  // Exported format: Embed HTML.
  $formats['embed_html'] = array(
    'format' => 'embed_html',
    'name' => 'Embed HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'shortcode_dynamic' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'quote' => 1,
          'h' => 1,
          'bgh' => 1,
          'bg' => 1,
          'tooltip' => 1,
          'progress' => 1,
          'spacer' => 1,
          'container' => 1,
          'row' => 1,
          'col' => 1,
          'message' => 1,
          'button' => 1,
          'call_to_action' => 1,
          'icon_box' => 1,
          'social_box' => 1,
          'pricing_table' => 1,
          'pricing_table_row' => 1,
          'view' => 1,
          'block' => 1,
          'node' => 1,
          'video' => 1,
          'contact' => 1,
          'counter' => 1,
          'slider' => 1,
        ),
      ),
      'shortcode_text_corrector' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'shortcode' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'quote' => 1,
          'h' => 1,
          'bgh' => 1,
          'bg' => 1,
          'tooltip' => 1,
          'progress' => 1,
          'spacer' => 1,
          'container' => 1,
          'row' => 1,
          'col' => 1,
          'message' => 1,
          'button' => 1,
          'call_to_action' => 1,
          'icon_box' => 1,
          'social_box' => 1,
          'pricing_table' => 1,
          'pricing_table_row' => 1,
          'view' => 0,
          'block' => 0,
          'node' => 0,
          'video' => 1,
          'contact' => 0,
          'counter' => 1,
          'slider' => 1,
        ),
      ),
      'shortcode_text_corrector' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
