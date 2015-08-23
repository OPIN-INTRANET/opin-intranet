<?php
/**
 * @file
 * opin_file_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opin_file_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
