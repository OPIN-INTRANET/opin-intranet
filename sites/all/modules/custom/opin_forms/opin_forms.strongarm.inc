<?php
/**
 * @file
 * opin_forms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opin_forms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_path_list';
  $strongarm->value = 'admin/structure/views/*';
  $export['clientside_validation_path_list'] = $strongarm;

  return $export;
}
