<?php
/**
 * @file
 * wunderkind_import_blocks.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function wunderkind_import_blocks_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 13,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 16,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 22,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -20,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 31,
  'module' => 'nikadevs_cms',
  'delta' => 'contact_form',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'wunderkind_cms',
  'delta' => 'menu',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'wunderkind_cms',
  'delta' => 'gmap',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 34,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -18,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/parallax-background',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 35,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -17,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/video-background',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -16,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/fullscreen-slider',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 37,
  'module' => 'wunderkind_cms',
  'delta' => 'messages',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 38,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -15,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/image-pattern',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'views',
  'delta' => 'people-block_1',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'views',
  'delta' => 'projects-block',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'views',
  'delta' => 'clients-block',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'wunderkind_cms',
  'delta' => 'footer',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/parallax-background',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 62,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'seven',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/video-background',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/fullscreen-slider',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 65,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'seven',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/image-pattern',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 66,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 67,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 68,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 69,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 70,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 71,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 72,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 74,
  'module' => 'nikadevs_cms',
  'delta' => 'contact_form',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 75,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 76,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 77,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'views',
  'delta' => 'clients-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'views',
  'delta' => 'people-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'views',
  'delta' => 'projects-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'wunderkind_cms',
  'delta' => 'footer',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'wunderkind_cms',
  'delta' => 'gmap',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'wunderkind_cms',
  'delta' => 'menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'wunderkind_cms',
  'delta' => 'messages',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => 'Vivamus risus',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -21,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'views',
  'delta' => 'taxonomy-block',
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -19,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'views',
  'delta' => 'taxonomy-block_1',
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -18,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 99,
  'module' => 'wunderkind_cms',
  'delta' => 'page_header',
  'theme' => 'wunderkind',
  'status' => 1,
  'weight' => -21,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/shortcodes',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/parallax-background',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 108,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => 'Vivamus risus',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -17,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/video-background',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -16,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/fullscreen-slider',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -15,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'home/image-pattern',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 118,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'nikadevs_cms',
  'delta' => 'contact_form',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'views',
  'delta' => 'clients-block',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 137,
  'module' => 'views',
  'delta' => 'people-block_1',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'views',
  'delta' => 'projects-block',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'views',
  'delta' => 'taxonomy-block',
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'views',
  'delta' => 'taxonomy-block_1',
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'wunderkind_cms',
  'delta' => 'footer',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'wunderkind_cms',
  'delta' => 'gmap',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'wunderkind_cms',
  'delta' => 'menu',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'wunderkind_cms',
  'delta' => 'messages',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 8,
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'wunderkind_cms',
  'delta' => 'page_header',
  'theme' => 'wunderkind_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/shortcodes',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'wunderkind',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 147,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'wunderkind_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '[node admin_url = "/node/1/edit"][/node]',
  'info' => 'Parallax Background',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '[node admin_url = "/node/2/edit"][/node]',
  'info' => 'Video Background',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '[node admin_url = "/node/3/edit"][/node]',
  'info' => 'FullScreen Slider',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '[node admin_url = "node/4/edit"][/node]',
  'info' => 'Image Pattern',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '[col animation = "flipInX" large = 12 class = "centered"]
  <h2><small>We Are Wunderkind</small> <br>Making Your Brand Shine</h2>
  <p class="lead">We create experiences that [h]transform brands[/h], grow businesses <br>and make people’s lives better. Building brands and driving sales with powerful ideas.</p>
[/col]
[spacer][/spacer]
[row animation = "flipInX"]
  [col tablet = 6 desktop = 6]
    [icon_box icon = "icon ion-ios7-lightbulb-outline" bg_icon]
      <h4>We\'re Creative<br><small>Crafting With Love</small></h4>
      <p>Vivamus congue diam vitae tortor imperdiet congue. Nullam sagittis, tristique diam, ut ullamcorper tellus. Cras porttitor massa.</p>
    [/icon_box]
  [/col]
  [col tablet = 6 desktop = 6]
    [icon_box icon = "icon ion-paper-airplane" bg_icon]
      <h4>We\'re Cool Nerds<br><small>Coding With Fun</small></h4>
      <p>Duis vel est nec sapien suscipit gravida. Integer vitae tortor dui. Donec libero quam, euismod sit amet enim ac, varius dictum.</p>
    [/icon_box]
  [/col]
  [col tablet = 6 desktop = 6]
    [icon_box icon = "icon ion-ios7-heart" bg_icon]
      <h4>We\'re Passionate<br><small>Available When You Need Us</small></h4>
      <p>Maecenas sit amet eros luctus dui volutpat sollicitudin id vitae est. Vivamus laoreet adipiscing metus vel fermentum. Sed velit.</p>
    [/icon_box]
  [/col]
  [col tablet = 6 desktop = 6]
    [icon_box icon = "icon ion-speakerphone " bg_icon]
      <h4>We\'re Professional<br><small>New York Based</small></h4>
      <p>Integer ornare, tellus eget lobortis cursus, metus enim ultricies eros, vitae porttitor elit sapien quis justo. Duis vitae.</p>
    [/icon_box]
  [/col]    
[/row]',
  'info' => 'We Are Wunderkind',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 6,
  'body' => '[node admin_url = "node/5/edit"][/node]',
  'info' => 'Our Skills Parallax',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '[node admin_url = "node/9"][/node]',
  'info' => 'We\'re Creative',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '<div class = "container">
[spacer][/spacer]
[row animation = "flipInX"]
  [col desktop = 3 tablet = 6]
    [counter number = "4246"]Satisfied Customers[/counter]
  [/col]
  [col desktop = 3 tablet = 6]
    [counter number = "618"]Twenkies Eaten[/counter]
  [/col]
  [col desktop = 3 tablet = 6]
    [counter number = "240"]Completed Projects[/counter]
  [/col]
  [col desktop = 3 tablet = 6]
    [counter number = "96"]Winning Awards[/counter]
  [/col]
[/row]
[spacer][/spacer]
</div>',
  'info' => 'Facts 4 Animated Counters',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '[node admin_url = "node/10/edit"][/node]',
  'info' => 'Quotes with Parallax',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 10,
  'body' => '[container]
  [row]
    [col animation = "flipInX" large = 12 class = "centered"]
      <h2><small>What We Do</small><br><strong>Our Capabilities</strong></h2>
      <p class="lead">A highly skilled professional service with a [h]creative touch.[/h]</p>
    [/col]
  [/row]
  [spacer][/spacer]
  [row]
    [col tablet = 6 desktop = 4 animation = "flipInX"]
      [icon_box icon = "icon ion-ios7-monitor-outline" bg_icon]
        <h4>Graphic Design<br><small>Crafting with Love </small></h4>
        <p>Vivamus congue diam vitae tortor imperdiet congue. Nullam sagittis tristique diam, ut ullamcorper tellus. Cras porttitor massa.</p>
      [/icon_box]
    [/col]
    [col tablet = 6 desktop = 4 animation = "flipInY"]
      [icon_box icon = "icon ion-social-github" bg_icon]
        <h4>Crazy Coding<br><small>Hand Developing</small></h4>
        <p>Nullam id ornare magna. Nullam eu nisi porttitor, aliquam mi sit amet, viverra diam. Maecenas vitae mollis est. Nunc nec lectus.</p>
      [/icon_box]
    [/col]
    [col tablet = 6 desktop = 4 animation = "flipInX"]
      [icon_box icon = "icon ion-speedometer" bg_icon]
        <h4>Web Optimization<br><small>Faster than Light</small></h4>
        <p>Maecenas sit amet eros luctus dui volutpat sollicitudin id vitae est. Vivamus laoreet adipiscing metus vel fermentum. Sed velit.</p>
      [/icon_box]
    [/col]
    [col tablet = 6 desktop = 4 animation = "flipInY"]
      [icon_box icon = "icon ion-map" bg_icon]
        <h4>Branding<br><small>Making a New You</small></h4>
        <p>In pulvinar sapien ipsum, vel scelerisque ligula fringilla in. Donec mi urna, aliquet ac arcu vel, feugiat fermentum leo.</p>
      [/icon_box]
    [/col]
    [col tablet = 6 desktop = 4 animation = "flipInX"]
      [icon_box icon = "icon ion-ionic" bg_icon]
        <h4>Customer Support<br><small>And Affinity</small></h4>
        <p>Duis vel est nec sapien suscipit gravida. Integer vitae tortor dui. Donec libero quam, euismod sit amet enim ac, varius.</p>
      [/icon_box]
    [/col]
    [col tablet = 6 desktop = 4 animation = "flipInY"]
      [icon_box icon = "icon ion-paper-airplane" bg_icon]
        <h4>Having Fun<br><small>Office Surfing (with chairs!)</small></h4>
        <p>Etiam cursus nunc vitae auctor semper. In commodo ligula eu faucibus mattis. Maecenas sed consectetur orci. Curabitur dui.</p>
      [/icon_box]
    [/col] 
  [/row]
[/container]',
  'info' => 'What We Do',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => '[node admin_url = "node/12"][/node]',
  'info' => 'Call to Action Think Parallax',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 12,
  'body' => '[node admin_url = "node/22/edit"][/node]',
  'info' => 'Testimonials Images Slider',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 13,
  'body' => '[node admin_url = "node/29/edit"][/node]',
  'info' => 'Get Connected Follow Us',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 14,
  'body' => '<div class="centered" animation = "flipInX">
  <h2><small>Pick Some of</small><br><strong>Our Latest Offers</strong></h2>
  <p class="lead">Pick a plan that [h]best suits[/h] your needs.</p>
</div>
[spacer class = "md"][/spacer]
[row]
  [col tablet = 4 animation = "flipInY"]
    [pricing_table title = "Free" price = "0" price_text = "/mon." button = "Sign Up Now" link = "contact"]
      [pricing_table_row]<span>Full</span> Email Support[/pricing_table_row]
      [pricing_table_row]<span>25</span> Projects[/pricing_table_row]
      [pricing_table_row]<i class="icon ion-close-round"></i>[/pricing_table_row]
      [pricing_table_row]<i class="icon ion-close-round"></i>[/pricing_table_row]
    [/pricing_table]
  [/col]
  [col  tablet = 4 animation = "flipInY"]
    [pricing_table active title = "Pro" price = "25" price_text = "/mon." button = "Sign Up Now" link = "contact"]
      [pricing_table_row]<span>Full</span> Email Support[/pricing_table_row]
      [pricing_table_row]<span>Unlimited</span> Projects[/pricing_table_row]
      [pricing_table_row]<span>Unlimited</span> Users[/pricing_table_row]
      [pricing_table_row]<span>1000GB</span> Storage[/pricing_table_row]
    [/pricing_table]
  [/col]
  [col tablet = 4 animation = "flipInY"]
    [pricing_table title = "Basic" price = "15" price_text = "/mon." button = "Sign Up Now" link = "contact"]
      [pricing_table_row]<span>Full</span> Email Support[/pricing_table_row]
      [pricing_table_row]<span>Unlimited</span> Projects[/pricing_table_row]
      [pricing_table_row]<span>Unlimited</span> Users[/pricing_table_row]
      [pricing_table_row]<span>500GB</span> Storage[/pricing_table_row]
    [/pricing_table]
  [/col]
[/row]',
  'info' => 'Pick Some of Our Latest Offers',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 15,
  'body' => '[node admin_url = "node/31/edit"][/node]',
  'info' => 'Contact us - Phone',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '[spacer class = "lg"][/spacer]
[container]
  [row]
    [col desktop = 12  animation = "flipInX" class = "centered"]
      <h2><small>Get In Touch</small><br><strong>Contact Us</strong></h2>
      <p class="lead">We would like to [h]hear from you.[/h]</p>
    [/col]
  [/row]
  [spacer class = "md"][/spacer]
  [contact animation = "flipInX" name = "Name" mail = "Email" Subject = "Phone" message = "Message"][/contact]
  [spacer class = "lg"][/spacer]
[/container]
',
  'info' => 'Contact Form',
  'format' => 'embed_html',
);
  $export['block_custom'][] = array(
  'bid' => 17,
  'body' => 'Vivamus risus leo, feugiat eu nibh quis, vehicula interdum urna. Maecenas quis justo ullamcorper, iaculis neque eget, eleifend dolor.',
  'info' => 'Vivamus risus',
  'format' => 'plain_text',
);
  $export['block_custom'][] = array(
  'bid' => 18,
  'body' => '[node admin_url = "node/39/edit"][/node]',
  'info' => 'Section Video',
  'format' => 'embed_html',
);
return $export;
}
