<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function wunderkind_form_system_theme_settings_alter(&$form, &$form_state) {
  drupal_add_css(drupal_get_path('theme', 'wunderkind') . '/css/theme-settings.css');
  $form['options'] = array(
    '#type' => 'vertical_tabs',
    '#default_tab' => 'main',
    '#weight' => '-10',
    '#title' => t('WunderKind Theme settings'),
  );

  if(module_exists('nikadevs_cms')) {
    $form['options']['nd_layout_builder'] = nikadevs_cms_layout_builder();
  }
  else {
    drupal_set_message('Enable NikaDevs CMS module to use layout builder.');
  }

  $form['options']['main'] = array(
    '#type' => 'fieldset',
    '#title' => t('Main settings'),
  );
  $form['options']['main']['home_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Homepage Title'),
    '#default_value' => theme_get_setting('home_title') ? theme_get_setting('home_title') : t('Welcome to @sitename', array('@sitename' => variable_get('site_name', ''))),
  );
  $form['options']['main']['login_account_links'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Login & Account Links'),
    '#default_value' => theme_get_setting('login_account_links'),
    '#description'   => t("Login or Account links placed on the top right header."),
  );
  $form['options']['main']['smooth_scroll'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Smooth Scrolling'),
    '#default_value' => theme_get_setting('smooth_scroll'),
  );
  $form['options']['main']['support'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Support button'),
    '#default_value' => theme_get_setting('support'),
    '#description'   => t("Support button allow you send message to our support email. For user roles with checked permission 'Use NikaDevs CMS'."),
  );
  $form['options']['main']['retina'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Retina Script'),
    '#default_value' => theme_get_setting('retina'),
    '#description'   => t("Only for retina displays and for manually added images. The script will check if the same image with suffix @2x exists and will show it."),
  );
  $form['options']['main']['blog_author'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Blog Author'),
    '#default_value' => theme_get_setting('blog_author'),
    '#description'   => t("Show about author section on the Blog node page."),
  );
  $form['options']['main']['preloader_custom'] = array(
    '#type' => 'checkbox',
    '#title' => t('Custom preloader spinning image'),
    '#default_value' => theme_get_setting('preloader_custom'),
  );
  $preloader = variable_get(variable_get('theme_default', 'none') . '_preloader_image', array());
  $form['options']['main']['preloader'] = array(
    '#type' => 'container',
    '#states' => array(
      'visible' => array(
        ':input[name="preloader_custom"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['options']['main']['preloader']['preloader_fid'] = array(
    '#type' => 'hidden',
    '#value' => isset($preloader['fid']) ? $preloader['fid'] : 0,
  );
  $form['options']['main']['preloader']['preview'] = array(
    '#markup' => theme('image', array('path' => isset($preloader['image_path']) ? $preloader['image_path'] : drupal_get_path('theme', 'wunderkind') . '/img/preload.gif')),
  );
  $form['options']['main']['preloader']['preloader_image'] = array(
    '#type' => 'file',
    '#title' => t('Preloader image'),
  );

  $form['options']['gmap'] = array(
    '#type' => 'fieldset',
    '#title' => t('Google Map Settings'),
  );
  $form['options']['gmap']['gmap_lat'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Map Latitude'),
    '#default_value' => theme_get_setting('gmap_lat'),
    '#size' => 12
  );
  $form['options']['gmap']['gmap_lng'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Map Longitude'),
    '#default_value' => theme_get_setting('gmap_lng'),
    '#size' => 12
  );
  $form['options']['gmap']['gmap_zoom'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Map Zoom'),
    '#default_value' => theme_get_setting('gmap_zoom'),
    '#size' => 6
  );

  $form['options']['color'] = array(
    '#type' => 'fieldset',
    '#title' => t('Color'),
  );
  $colors = array('pink', 'blue-2', 'blue', 'purple', 'green', 'yellow', 'orange', 'red', 'red-2', 'red-3', 'pink-2', 'midnight', 'green-2', 'beige', 'black');
  $form['options']['color']['skin'] = array(
    '#type' => 'radios',
    '#title' => t('Skin'),
    '#default_value' => theme_get_setting('skin'),
    '#options' => array_combine($colors, $colors)
  );

  $form['#submit'][] = 'wunderkind_settings_submit';
}

/**
 * Save settings data.
 */
function wunderkind_settings_submit($form, &$form_state) {
  if ($file = file_save_upload('preloader_image', array(), 'public://')) {
    $settings = array('fid' => $file->fid, 'image_path' => $file->uri);
    if ($form_state['input']['preloader_fid']) {
      if($file = file_load($form_state['input']['preloader_fid'])) {
        file_delete($file); 
      }
      else {
        file_unmanaged_delete($form_state['input']['preloader_image']);
      }
    }
    variable_set(variable_get('theme_default', 'none') . '_preloader_image', $settings);
  }
}