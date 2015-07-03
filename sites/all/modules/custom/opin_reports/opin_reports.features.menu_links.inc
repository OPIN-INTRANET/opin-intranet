<?php
/**
 * @file
 * opin_reports.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function opin_reports_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_charts-examples:charts/examples
  $menu_links['navigation_charts-examples:charts/examples'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'charts/examples',
    'router_path' => 'charts/examples',
    'link_title' => 'Charts examples',
    'options' => array(
      'identifier' => 'navigation_charts-examples:charts/examples',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Charts examples');


  return $menu_links;
}
