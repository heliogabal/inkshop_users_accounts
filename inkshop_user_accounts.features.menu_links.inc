<?php
/**
 * @file
 * inkshop_user_accounts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function inkshop_user_accounts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-benutzer-menu_abmelden:user/logout
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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-benutzer-menu_anmelden:user/login
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
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-benutzer-menu_mein-benutzerkonto:menutoken/54df6ed5273cb
  $menu_links['menu-benutzer-menu_mein-benutzerkonto:menutoken/54df6ed5273cb'] = array(
    'menu_name' => 'menu-benutzer-menu',
    'link_path' => 'menutoken/54df6ed5273cb',
    'router_path' => 'menutoken/%',
    'link_title' => 'Mein Benutzerkonto',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'menu_token_link_path' => 'user/[current-user:uid]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-benutzer-menu_mein-benutzerkonto:menutoken/54df6ed5273cb',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -9,
    'customized' => 1,
  );
  // Exported menu link: menu-benutzer-menu_mein-merkzettel:user/[user:uid]/wishlist
  $menu_links['menu-benutzer-menu_mein-merkzettel:user/[user:uid]/wishlist'] = array(
    'menu_name' => 'menu-benutzer-menu',
    'link_path' => 'user/[user:uid]/wishlist',
    'router_path' => 'user/%/wishlist',
    'link_title' => 'Mein Merkzettel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_token_link_path' => 'user/[current-user:uid]/wishlist',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-benutzer-menu_mein-merkzettel:user/[user:uid]/wishlist',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Abmelden');
  t('Anmelden');
  t('Mein Benutzerkonto');
  t('Mein Merkzettel');


  return $menu_links;
}
