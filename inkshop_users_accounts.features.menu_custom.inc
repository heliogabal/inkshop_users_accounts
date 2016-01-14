<?php
/**
 * @file
 * inkshop_users_accounts.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function inkshop_users_accounts_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-benutzer-menu.
  $menus['menu-benutzer-menu'] = array(
    'menu_name' => 'menu-benutzer-menu',
    'title' => 'Benutzer Menu',
    'description' => 'Zeigt persönliche Links zum Konto, Warenkorb und zur Anmeldung',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Benutzer Menu');
  t('Zeigt persönliche Links zum Konto, Warenkorb und zur Anmeldung');

  return $menus;
}
