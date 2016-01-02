<?php
/**
 * @file
 * inkshop_user_accounts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function inkshop_user_accounts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path';
  $strongarm->value = '';
  $export['admin_theme_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_path_disallow';
  $strongarm->value = 'user/*
user/*/*';
  $export['admin_theme_path_disallow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_wishlist_element';
  $strongarm->value = 'button';
  $export['commerce_wishlist_element'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_wishlist_product_types';
  $strongarm->value = array(
    'product' => 'product',
    'donation' => 0,
  );
  $export['commerce_wishlist_product_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_wishlist_remove_product';
  $strongarm->value = 1;
  $export['commerce_wishlist_remove_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_wishlist_weight';
  $strongarm->value = '0';
  $export['commerce_wishlist_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'profiles/inkota_shop/modules/features';
  $export['features_default_export_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_login_with_email';
  $strongarm->value = '1';
  $export['logintoboggan_login_with_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'logintoboggan_minimum_password_length';
  $strongarm->value = '6';
  $export['logintoboggan_minimum_password_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tabtamer_tab_settings';
  $strongarm->value = array(
    'node/%/webform' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results',
      'tabtamer_title' => '',
    ),
    'node/%/revisions' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/revisions',
      'tabtamer_title' => '',
    ),
    'node/%/import' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/import',
      'tabtamer_title' => '',
    ),
    'node/%/delete-items' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete-items',
      'tabtamer_title' => '',
    ),
    'node/%/unlock' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/unlock',
      'tabtamer_title' => '',
    ),
    'node/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/view',
      'tabtamer_title' => '',
    ),
    'node/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/edit',
      'tabtamer_title' => '',
    ),
    'node/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete',
      'tabtamer_title' => '',
    ),
    'node/%/simplenews' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/simplenews',
      'tabtamer_title' => '',
    ),
    'node/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel',
      'tabtamer_title' => '',
    ),
    'node/%/translate' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/translate',
      'tabtamer_title' => '',
    ),
    'node/%/display' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/display',
      'tabtamer_title' => '',
    ),
    'node/%/log' => array(
      'weight' => '12',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%/log',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components',
      'tabtamer_title' => '',
    ),
    'node/%/webform/conditionals' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/conditionals',
      'tabtamer_title' => '',
    ),
    'node/%/webform/configure' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/configure',
      'tabtamer_title' => '',
    ),
    'node/%/webform/emails' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/emails',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%/clone' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component/clone',
      'tabtamer_title' => '',
    ),
    'node/%/webform/components/%/delete' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform/components/%webform_menu_component/delete',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/submissions' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/submissions',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/analysis' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/analysis',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/table' => array(
      'weight' => '6',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/table',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/download' => array(
      'weight' => '7',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/download',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/clear' => array(
      'weight' => '8',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/clear',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/analysis/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/analysis/%webform_menu_component',
      'tabtamer_title' => '',
    ),
    'node/%/webform-results/analysis/%/more' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/webform-results/analysis/%webform_menu_component/more',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/view',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/edit' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/edit',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/delete' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/delete',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/devel',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/devel/load',
      'tabtamer_title' => '',
    ),
    'node/%/submission/%/devel/token' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%webform_menu/submission/%webform_menu_submission/devel/token',
      'tabtamer_title' => '',
    ),
    'node/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel/load',
      'tabtamer_title' => '',
    ),
    'node/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/devel/render',
      'tabtamer_title' => '',
    ),
    'node/add/add-content' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/add/add-content',
      'tabtamer_title' => '',
    ),
    'node/add/add-product' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/add/add-product',
      'tabtamer_title' => '',
    ),
    'charts/examples/built-in' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'charts/examples/built-in',
      'tabtamer_title' => '',
    ),
    'charts/examples/views' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'charts/examples/views',
      'tabtamer_title' => '',
    ),
    'user/%/addressbook' => array(
      'weight' => '-94',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/addressbook',
      'tabtamer_title' => '',
    ),
    'user/%/follow' => array(
      'weight' => '-98',
      'action' => 'disabled',
      'tabtamer_original_path' => 'user/%/follow',
      'tabtamer_title' => '',
    ),
    'user/%/mailchimp' => array(
      'weight' => '-93',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/mailchimp',
      'tabtamer_title' => '',
    ),
    'user/%/devel' => array(
      'weight' => '-92',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel',
      'tabtamer_title' => '',
    ),
    'user/%/view' => array(
      'weight' => '-100',
      'action' => 'disabled',
      'tabtamer_original_path' => 'user/%user/view',
      'tabtamer_title' => '',
    ),
    'user/%/edit' => array(
      'weight' => '-99',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/edit',
      'tabtamer_title' => 'Mein Benutzerkonto',
    ),
    'user/%/display' => array(
      'weight' => '-97',
      'action' => 'disabled',
      'tabtamer_original_path' => 'user/%user/display',
      'tabtamer_title' => '',
    ),
    'user/%/wishlist' => array(
      'weight' => '-95',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%/wishlist',
      'tabtamer_title' => '',
    ),
    'user/%/orders' => array(
      'weight' => '-96',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%views_arg/orders',
      'tabtamer_title' => '',
    ),
    'user/%/addressbook/billing' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/addressbook/billing',
      'tabtamer_title' => '',
    ),
    'user/%/addressbook/shipping' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/addressbook/shipping',
      'tabtamer_title' => '',
    ),
    'user/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel/load',
      'tabtamer_title' => '',
    ),
    'user/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/devel/render',
      'tabtamer_title' => '',
    ),
    'user/%/edit/account' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/account',
      'tabtamer_title' => '',
    ),
    'user/%/edit/simplenews' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/simplenews',
      'tabtamer_title' => '',
    ),
    'user/login' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/login',
      'tabtamer_title' => '',
    ),
    'user/register' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/register',
      'tabtamer_title' => '',
    ),
    'user/password' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/password',
      'tabtamer_title' => '',
    ),
    'import/%/import' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%/import',
      'tabtamer_title' => '',
    ),
    'import/%/delete-items' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%/delete-items',
      'tabtamer_title' => '',
    ),
    'import/%/unlock' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%/unlock',
      'tabtamer_title' => '',
    ),
    'import/%/log' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%/log',
      'tabtamer_title' => '',
    ),
    'file/add/upload' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload',
      'tabtamer_title' => '',
    ),
    'file/add/upload/file' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload/file',
      'tabtamer_title' => '',
    ),
    'file/add/upload/archive' => array(
      'weight' => '-5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload/archive',
      'tabtamer_title' => '',
    ),
    'file/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/view',
      'tabtamer_title' => '',
    ),
    'file/%/usage' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/usage',
      'tabtamer_title' => '',
    ),
    'file/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/edit',
      'tabtamer_title' => '',
    ),
    'file/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/delete',
      'tabtamer_title' => '',
    ),
    'file/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel',
      'tabtamer_title' => '',
    ),
    'file/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel/load',
      'tabtamer_title' => '',
    ),
    'file/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel/render',
      'tabtamer_title' => '',
    ),
    'file/%/devel/token' => array(
      'weight' => '5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/devel/token',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/view',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/edit' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/edit',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/display' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/display',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel/load',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/devel/render',
      'tabtamer_title' => '',
    ),
    'comment/%/devel' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel',
      'tabtamer_title' => '',
    ),
    'comment/%/devel/load' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel/load',
      'tabtamer_title' => '',
    ),
    'comment/%/devel/render' => array(
      'weight' => '100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'comment/%comment/devel/render',
      'tabtamer_title' => '',
    ),
  );
  $export['tabtamer_tab_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = '1';
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = '[user:name],

Eine Anfrage zur Löschung Ihres Benutzerkontos auf [site:name] wurde gestellt.

Sie können Ihr Konto auf [site:url-brief] jetzt durch Klick auf den folgenden Link löschen oder diesen alternativ in Ihren Browser kopieren:

[user:cancel-url]

HINWEIS: Die Löschung Ihres Benutzerkontos kann nicht rückgängig gemacht werden und ist endgültig.

Der Link ist einen Tag lang gültig und läuft automatisch aus, falls Sie ihn nicht verwenden.

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = 'Antrag auf Löschung von Benutzerkonto [user:name] auf [site:name]';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = '[user:name],

eine Anfrage zum Zurücksetzen des Passworts für Ihr Benutzerkonto auf [site:name] wurde gestellt.

Sie können sich jetzt mit einem Klick auf folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie zu einer Seite, auf der Sie ein neues Passwort festlegen können. Er ist einen Tag lang gültig und läuft automatisch aus, falls Sie ihn nicht verwenden.

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'Neue Login-Daten für Benutzerkonto [user:name] auf [site:name]';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '[user:name],

Ein Administrator der Website [site:name] hat für Sie ein Benutzerkonto angelegt. Sie können sich jetzt mit einem Klick auf den folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie zu einer Seite, auf der Sie ein neues Passwort vergeben können.

Nachdem Sie Ihr Passwort festgelegt haben, können Sie sich zukünftig auf [site:login-url] mit den folgenden Zugangsdaten anmelden:

Benutzername: [user:name]
Passwort: Ihr Passwort

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'Ein Administrator hat für Sie auf [site:name] ein Benutzerkonto angelegt';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '[user:name],

vielen Dank für die Registrierung auf [site:name]. Sie können sich jetzt mit einem Klick auf den folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie auf eine Seite, auf der Sie Ihr Passwort festlegen können.

Nachdem Sie Ihr Passwort festgelegt haben, können Sie sich zukünftig mit folgenden Zugangsdaten bei [site:login-url] anmelden:

Benutzername: [user:name]
Passwort: Ihr Passwort

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Benutzerkontendetails für [user:name] auf [site:name]';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = '[user:name],

vielen Dank für die Registrierung auf [site:name]. Ihr Antrag für ein Benutzerkonto wird aktuell geprüft. Sobald eine Freigabe erfolgt ist, erhalten Sie eine weitere E-Mail mit Informationen zum Login, Setzen Ihres Passwortes sowie weitere Details.

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Benutzerkontendetails für [user:name] auf [site:name] (Genehmigung durch einen Administrator steht aus)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = '[user:name],

Ihr Benutzerkonto auf [site:name] wurde aktiviert.

Sie können sich jetzt mit einem Klick auf folgenden Link anmelden oder diesen alternativ in Ihren Browser kopieren:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und leitet Sie zu einer Seite, auf der Sie ein neues Passwort festlegen können.

Nachdem Sie Ihr Passwort festgelegt haben, können Sie sich zukünftig auf [site:login-url] mit den folgenden Zugangsdaten anmelden:

Benutzername: [user:name]
Passwort: Ihr Passwort

Viele Grüße
Das Team von [site:name]';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'Benutzerkontendetails für [user:name] auf [site:name] (genehmigt)';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '[user:name],

Ihr Benutzerkonto auf [site:name] wurde gesperrt.

--  [site:name]-Team';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Details für Benutzerkonto [user:name] auf [site:name] (gesperrt)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = '[user:name],

Ihr Benutzerkonto auf [site:name] wurde gelöscht.

--  [site:name]-Team';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 0;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = 'Details für Benutzerkonto [user:name] auf [site:name] (gelöscht)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '2';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  return $export;
}
