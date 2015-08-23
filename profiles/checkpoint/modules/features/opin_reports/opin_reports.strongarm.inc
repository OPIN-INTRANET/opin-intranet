<?php
/**
 * @file
 * opin_reports.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opin_reports_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkchecker_impersonate_user';
  $strongarm->value = 'admin';
  $export['linkchecker_impersonate_user'] = $strongarm;

  return $export;
}
