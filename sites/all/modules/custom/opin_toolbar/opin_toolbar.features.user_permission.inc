<?php
/**
 * @file
 * opin_toolbar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opin_toolbar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(),
    'module' => 'navbar',
  );

  return $permissions;
}
