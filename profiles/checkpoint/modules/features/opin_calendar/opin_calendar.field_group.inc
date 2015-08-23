<?php
/**
 * @file
 * opin_calendar.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function opin_calendar_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|calendar_entry|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'calendar_entry';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event details',
    'weight' => '1',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_location',
      2 => 'field_entry_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Event details',
      'instance_settings' => array(
        'classes' => 'event-details',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details|node|calendar_entry|default'] = $field_group;

  return $export;
}
