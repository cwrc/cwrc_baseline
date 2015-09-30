<?php
/**
 * @file
 * cwrc_baseline.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cwrc_baseline_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-cwrc_copyright'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'cwrc_copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-actions'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-actions',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'main_prefix',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -34,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-breadcrumb'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-breadcrumb',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'main_prefix',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-page-title'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-page-title',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'main_prefix',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-tabs'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-tabs',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'user_menu',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cwrc_search_bar-search'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search',
    'module' => 'cwrc_search_bar',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'masthead_secondary',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -41,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['de_contextual_help-help_drop_down'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help_drop_down',
    'module' => 'de_contextual_help',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'masthead',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => 3,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_compound_object-compound_navigation'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compound_navigation',
    'module' => 'islandora_compound_object',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-secondary-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-secondary-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-tertiary-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-tertiary-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -41,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 4,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 5,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'masthead',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => 4,
      ),
    ),
    'title' => 'User menu',
    'visibility' => 0,
  );

  $export['menu_block-6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 6,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'masthead',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => 1,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
