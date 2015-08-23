<?php
/**
 * @file
 * opin_core_testing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opin_core_testing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer blazemeter configuration'.
  $permissions['administer blazemeter configuration'] = array(
    'name' => 'administer blazemeter configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'blazemeter',
  );

  return $permissions;
}
