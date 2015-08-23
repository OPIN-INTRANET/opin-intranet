<?php
/**
 * @file
 * opin_forms.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function opin_forms_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_clientside-validation:admin/config/validation/clientside_validation
  $menu_links['management_clientside-validation:admin/config/validation/clientside_validation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/validation/clientside_validation',
    'router_path' => 'admin/config/validation/clientside_validation',
    'link_title' => 'Clientside Validation',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer clientside validation.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_clientside-validation:admin/config/validation/clientside_validation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_validation:admin/config/validation',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Clientside Validation');


  return $menu_links;
}
