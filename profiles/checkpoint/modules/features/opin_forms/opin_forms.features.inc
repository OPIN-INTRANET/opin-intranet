<?php
/**
 * @file
 * opin_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opin_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
