<?php
/**
 * @file
 * opin_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opin_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:translator_module';
  $strongarm->value = 'facetapi_i18n';
  $export['facetapi:translator_module'] = $strongarm;

  return $export;
}
