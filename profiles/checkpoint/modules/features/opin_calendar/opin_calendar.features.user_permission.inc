<?php
/**
 * @file
 * opin_calendar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opin_calendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create calendar_entry content'.
  $permissions['create calendar_entry content'] = array(
    'name' => 'create calendar_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any calendar_entry content'.
  $permissions['delete any calendar_entry content'] = array(
    'name' => 'delete any calendar_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own calendar_entry content'.
  $permissions['delete own calendar_entry content'] = array(
    'name' => 'delete own calendar_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any calendar_entry content'.
  $permissions['edit any calendar_entry content'] = array(
    'name' => 'edit any calendar_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own calendar_entry content'.
  $permissions['edit own calendar_entry content'] = array(
    'name' => 'edit own calendar_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
