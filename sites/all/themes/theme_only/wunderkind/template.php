<?php

/**
 * Implementation of hook_preprocess_html().
 */
function wunderkind_preprocess_html(&$variables) {
  global $user;
  // Add required skin
  drupal_add_css(drupal_get_path('theme', 'wunderkind') . '/css/colors/' . theme_get_setting('skin') . '.css', array('group' => CSS_THEME));
  drupal_add_js(array(
    'wunderkind' => array(
      'smooth_scroll' => theme_get_setting('smooth_scroll')
    )
  ), 'setting');
  $variables['login_account_links'] = '';
  if (theme_get_setting('login_account_links')) {
    $output = '';
    if(theme_get_setting('login_account_links')) {
      $output .= '<p class="login">
        <i class="fa fa-lock"></i> ' . l(($user->uid ? t('My Account') : t('Login')), 'user') . '
      </p>';
      $output .= $user->uid ? '<p class="logout"><i class="fa fa-sign-out"></i> ' . l(t('Logout'), 'user/logout') . '</p>' : '';
      $output .= !$user->uid ? '<p class="register"><i class="fa fa-pencil-square-o"></i>' . l(t('Register'), 'user/register') . '</p>' : '';
    }
    $variables['login_account_links'] = '<div class="login-links panel-close"><a class="panel-btn"><i class="fa fa-sign-in"></i></a>
      <div class="colors-container">' . $output . '</div>
    </div>';
  }
  $layout = _nikadevs_cms_get_active_layout();
  if(isset($layout['settings']['one_page']) && $layout['settings']['one_page']) {
    $variables['attributes_array']['data-target'] = '#main-nav';
    $variables['attributes_array']['data-spy'] = 'scroll';
    $variables['attributes_array']['data-offset'] = '200'; 
  }
}

/**
 * Implementation of hook_preprocess_page().
 */
function wunderkind_process_page(&$variables) {
  if(theme_get_setting('retina')) {
    drupal_add_js(drupal_get_path('theme', 'wunderkind') . '/js/jquery.retina.js');
  }
  $variables['preloader'] = base_path() . drupal_get_path('theme', 'wunderkind') . '/img/preload.gif';
  if(theme_get_setting('preloader_custom')) {
    $preloader = variable_get(variable_get('theme_default', 'none') . '_preloader_image', array());
    $variables['preloader'] = isset($preloader['image_path']) ? file_create_url($preloader['image_path']) : $variables['preloader'];
  }
}

/**
 * Implementation of hook_css_alter().
 */
function wunderkind_css_alter(&$css) {
  // Disable standart css from ubercart
  unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
  unset($css[drupal_get_path('module', 'search') . '/search.css']);
}

/**
 * Implementation of hook_js_alter()
 */
function wunderkind_js_alter(&$javascript) {
  if(isset($javascript['misc/jquery.js'])) {
    $javascript['misc/jquery.js']['data'] = path_to_theme() . '/js/jquery-1.11.0.min.js';
  }
}

/**
 * Update status messages
*/
function wunderkind_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  $types = array(
    'status' => 'success',
    'error' => 'danger',
    'warning' => 'warning',
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"alert alert-dismissable alert-" . $types[$type] . "\">\n<button type='button' class='close' data-dismiss='alert'>×</button>";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }
    $output .= "</div>\n";
  }
  return $output;
}

function wunderkind_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    return '<h2 class="element-invisible">' . t('Pages') . '</h2><div class = "pager">' . $li_previous . $li_next . '</div>';
  }
}

function wunderkind_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  $replace_titles = array(
    t('‹ previous') => '<button type="button" class="btn btn-primary" style="float:left"><i class="icon ion-arrow-left-b"> </i> '. t('Newer') . '</button>',
    t('next ›') => '<button type="button" class="btn btn-primary" style="float:right">' . t('Older') . ' <i class="icon ion-arrow-right-b"></i>' . '</button>',
  );

  $text = isset($replace_titles[$text]) ? $replace_titles[$text] : $text;
  $attributes['href'] = url($_GET['q'], array('query' => $query));
  $text = '<a' . drupal_attributes($attributes) . '>' . $text . '</a>';

  return $text;
}

function wunderkind_field($variables) {
  $output = '';
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }
  return $output;
}


/**
 * Overrides theme_form_element_label().
 */
function wunderkind_form_element_label(&$variables) {
  $element = $variables['element'];
  $skip = (isset($element['#type']) && ('checkbox' === $element['#type'] || 'radio' === $element['#type']));
  if ((!isset($element['#title']) || $element['#title'] === '' && !$skip) && empty($element['#required'])) {
    return '';
  }
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';
  $title = filter_xss_admin($element['#title']);
  $attributes = array();
  if ($element['#title_display'] == 'after' && !$skip) {
    $attributes['class'][] = $element['#type'];
  }
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'][] = 'element-invisible';
  }
  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }
  $output = '';
  if (isset($variables['#children'])) {
    $output .= $variables['#children'];
  }
  $output .= t('!title !required', array('!title' => $title, '!required' => $required));
  return ' <label' . drupal_attributes($attributes) . '>' . $output . "</label>\n";
}


/**
 * Implements theme_form_element().
 */
function wunderkind_form_element(&$variables) {
  $element = &$variables['element'];
  $is_checkbox = FALSE;
  $is_radio = FALSE;
  $element += array(
    '#title_display' => 'before',
  );
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  if (isset($element['#parents']) && form_get_error($element)) {
    $attributes['class'][] = 'error';
  }
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(
        ' ' => '-',
        '_' => '-',
        '[' => '-',
        ']' => '',
      ));
  }
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  if (!empty($element['#autocomplete_path']) && drupal_valid_path($element['#autocomplete_path'])) {
    $attributes['class'][] = 'form-autocomplete';
  }
  $attributes['class'][] = 'form-item';
  if (isset($element['#type'])) {
    if ($element['#type'] == "radio") {
      $attributes['class'][] = 'radio';
      $is_radio = TRUE;
    }
    elseif ($element['#type'] == "checkbox") {
      $attributes['class'][] = 'checkbox';
      $is_checkbox = TRUE;
    }
    else {
      $attributes['class'][] = 'form-group';
    }
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = '';
  $suffix = '';
  if (isset($element['#field_prefix']) || isset($element['#field_suffix'])) {
    if (!empty($element['#input_group'])) {
      $prefix .= '<div class="input-group">';
      $prefix .= isset($element['#field_prefix']) ? '<span class="input-group-addon">' . $element['#field_prefix'] . '</span>' : '';
      $suffix .= isset($element['#field_suffix']) ? '<span class="input-group-addon">' . $element['#field_suffix'] . '</span>' : '';
      $suffix .= '</div>';
    }
    else {
      $prefix .= isset($element['#field_prefix']) ? $element['#field_prefix'] : '';
      $suffix .= isset($element['#field_suffix']) ? $element['#field_suffix'] : '';
    }
  }
  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables) . ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      if ($is_radio || $is_checkbox) {
        $output .= ' ' . $prefix . $element['#children'] . $suffix;
      }
      else {
        $variables['#children'] = ' ' . $prefix . $element['#children'] . $suffix;
      }
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;
    case 'none':
    case 'attribute':
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }
  if (isset($element['#description'])) {
    $output .= '<p class="help-block">' . $element['#description'] . "</p>\n";
  }
  $output .= "</div>\n";
  return $output;
}


/**
 *  Implements theme_textfield().
 */
function wunderkind_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'text';
  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength',
  ));
  _form_set_class($element, array('form-text'));
  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';
  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';
    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $output = '<div class="input-group">' . $output . '<span class="input-group-addon"><i class = "fa fa-refresh"></i></span></div>';
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }
  return $output . $extra;
}

/**
 * Implements hook_preprocess_button().
 */
function wunderkind_preprocess_button(&$vars) {
  $vars['element']['#attributes']['class'][] = 'btn';
  $vars['element']['#attributes']['class'][] = 'btn-primary';
}

/**
 * Implements hook_element_info_alter().
 */
function wunderkind_element_info_alter(&$elements) {
  foreach ($elements as &$element) {
    $element['#process'][] = '_wunderkind_process_element';
    if (!empty($element['#input'])) {
      $element['#process'][] = '_wunderkind_process_input';
    }
  }
}


function _wunderkind_process_element(&$element, &$form_state) {
  if (!empty($element['#attributes']['class']) && is_array($element['#attributes']['class'])) {
    if (in_array('container-inline', $element['#attributes']['class'])) {
      $element['#attributes']['class'][] = 'form-inline';
    }
    if (in_array('form-wrapper', $element['#attributes']['class'])) {
      $element['#attributes']['class'][] = 'form-group';
    }
  }
  return $element;
}


function _wunderkind_process_input(&$element, &$form_state) {
  $types = array(
    'textarea',
    'textfield',
    'select',
    'password',
    'password_confirm',
  );
  if (!empty($element['#type']) && (in_array($element['#type'], $types) || ($element['#type'] === 'file' && empty($element['#managed_file'])))) {
    $element['#attributes']['class'][] = 'form-control';
  }
  return $element;
}

/**
 * Implements hook_preprocess_node().
 */
function wunderkind_preprocess_node(&$variables) {
  if(isset($variables['field_parallax_background']) && !empty($variables['field_parallax_background'])) {
    $field = _get_node_field((object)$variables, 'field_parallax_background');
    $image = $field[array_rand($field)];
    $path = file_create_url($image['uri']);
    $variables['classes_array'][1] .= ' container';
    $variables['classes_array'][] = 'parallax-bg';
    $variables['attributes_array']['style'] = 'background-image: url(' . $path . ');';
    $variables['attributes_array']['data-stellar-background-ratio'] = '0.7';
    $variables['title_suffix'][] = array('#markup' => '<div class="parallax-overlay"></div>');
  }
}