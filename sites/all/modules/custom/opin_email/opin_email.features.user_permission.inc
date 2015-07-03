<?php
/**
 * @file
 * opin_email.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opin_email_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(),
    'module' => 'smtp',
  );

  return $permissions;
}
