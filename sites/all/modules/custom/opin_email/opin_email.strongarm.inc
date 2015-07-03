<?php
/**
 * @file
 * opin_email.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opin_email_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_on';
  $strongarm->value = 0;
  $export['smtp_on'] = $strongarm;

  return $export;
}
