<?php
/**
 * @file
 * inkshop_users_accounts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function inkshop_users_accounts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'shop' => 'shop',
      'versand' => 'versand',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'shop' => 'shop',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer wishlists'.
  $permissions['administer wishlists'] = array(
    'name' => 'administer wishlists',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_wishlist',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'manage own wishlist'.
  $permissions['manage own wishlist'] = array(
    'name' => 'manage own wishlist',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'buchhaltung' => 'buchhaltung',
      'kunde' => 'kunde',
      'shop' => 'shop',
      'versand' => 'versand',
    ),
    'module' => 'commerce_wishlist',
  );

  // Exported permission: 'view active wishlists'.
  $permissions['view active wishlists'] = array(
    'name' => 'view active wishlists',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_wishlist',
  );

  return $permissions;
}
