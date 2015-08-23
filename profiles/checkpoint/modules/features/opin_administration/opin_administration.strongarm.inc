<?php
/**
 * @file
 * opin_administration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opin_administration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adminimal_admin_menu_core-toolbar-disabled';
  $strongarm->value = TRUE;
  $export['adminimal_admin_menu_core-toolbar-disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adminimal_admin_menu_render';
  $strongarm->value = 'newline';
  $export['adminimal_admin_menu_render'] = $strongarm;

  return $export;
}
