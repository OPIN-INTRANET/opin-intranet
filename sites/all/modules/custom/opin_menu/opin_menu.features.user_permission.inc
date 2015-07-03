<?php
/**
 * @file
 * opin_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opin_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(),
    'module' => 'menu_position',
  );

  return $permissions;
}
