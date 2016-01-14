<?php
/**
 * @file
 * inkshop_users_accounts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function inkshop_users_accounts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-benutzer-menu_abmelden:user/logout.
  $menu_links['menu-benutzer-menu_abmelden:user/logout'] = array(
    'menu_name' => 'menu-benutzer-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Abmelden',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-benutzer-menu_abmelden:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-benutzer-menu_anmelden:user/login.
  $menu_links['menu-benutzer-menu_anmelden:user/login'] = array(
    'menu_name' => 'menu-benutzer-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Anmelden',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-benutzer-menu_anmelden:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abmelden');
  t('Anmelden');

  return $menu_links;
}
