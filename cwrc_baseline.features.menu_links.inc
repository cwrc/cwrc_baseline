<?php
/**
 * @file
 * cwrc_baseline.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cwrc_baseline_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-secondary-menu_home:<front>.
  $menu_links['menu-secondary-menu_home:<front>'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_home:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');

  return $menu_links;
}
