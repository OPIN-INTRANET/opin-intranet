<?php
/**
 * @file
 * opin_calendar.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function opin_calendar_defaultconfig_features() {
  return array(
    'opin_calendar' => array(
      'context_default_contexts' => 'context_default_contexts',
      'field_default_fields' => 'field_default_fields',
      'field_group_info' => 'field_group_info',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
      'views_default_views' => 'views_default_views',
    ),
  );
}

/**
 * Implements hook_defaultconfig_context_default_contexts().
 */
function opin_calendar_defaultconfig_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calendar';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-calendar-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-calendar-page_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views--exp-calendar-page' => array(
          'module' => 'views',
          'delta' => '-exp-calendar-page',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['calendar'] = $context;

  return $export;
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function opin_calendar_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-calendar_entry-field_contact'.
  $fields['node-calendar_entry-field_contact'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_contact',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'calendar_entry',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Contact information of the event/meeting organizer',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 6,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contact',
      'label' => 'Contact',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 10,
      ),
    ),
  );

  // Exported field: 'node-calendar_entry-field_description'.
  $fields['node-calendar_entry-field_description'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'calendar_entry',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'entity_translation_sync' => FALSE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'node-calendar_entry-field_entry_date'.
  $fields['node-calendar_entry-field_entry_date'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_entry_date',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'date',
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'entity_translation_sync' => FALSE,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => 'required',
        'tz_handling' => 'site',
      ),
      'translatable' => 0,
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'calendar_entry',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 8,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_entry_date',
      'label' => 'Entry date',
      'required' => 1,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => 30,
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'node-calendar_entry-field_entry_type'.
  $fields['node-calendar_entry-field_entry_type'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_entry_type',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'entry_type',
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'calendar_entry',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_entry_type',
      'label' => 'Entry type',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'node-calendar_entry-field_location'.
  $fields['node-calendar_entry-field_location'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'calendar_entry',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Location of the meeting or event',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'node-calendar_entry-field_modified_date'.
  $fields['node-calendar_entry-field_modified_date'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_modified_date',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'date',
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'entity_translation_sync' => FALSE,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => 0,
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'calendar_entry',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_modified_date',
      'label' => 'Modified date',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => 15,
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 5,
      ),
    ),
  );

  // Exported field: 'node-calendar_entry-title_field'.
  $fields['node-calendar_entry-title_field'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'title_field',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
      ),
      'translatable' => 1,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'calendar_entry',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'title_field',
      'label' => 'Title',
      'required' => TRUE,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'hide_label' => array(
          'entity' => FALSE,
          'page' => FALSE,
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 0,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Contact information of the event/meeting organizer');
  t('Description');
  t('Entry date');
  t('Entry type');
  t('Location');
  t('Location of the meeting or event');
  t('Modified date');
  t('Title');

  return $fields;
}

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function opin_calendar_defaultconfig_field_group_info() {
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

/**
 * Implements hook_defaultconfig_strongarm().
 */
function opin_calendar_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_calendar_entry';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_calendar';
  $strongarm->value = 'M d';
  $export['date_format_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_calendar_entry';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_calendar_entry';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_calendar_entry';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_calendar_entry';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_calendar_entry';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_calendar_entry';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_calendar_entry';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_calendar_entry';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__calendar_entry';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_calendar_entry';
  $strongarm->value = 1;
  $export['i18n_node_extended_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_calendar_entry';
  $strongarm->value = array();
  $export['i18n_node_options_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_calendar_entry';
  $strongarm->value = '4';
  $export['language_content_type_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_calendar_entry';
  $strongarm->value = array();
  $export['menu_options_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_calendar_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_calendar_entry';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_calendar_entry';
  $strongarm->value = '1';
  $export['node_preview_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_calendar_entry';
  $strongarm->value = 0;
  $export['node_submitted_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_calendar_entry';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_calendar_entry_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_calendar_entry_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_calendar_entry_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_calendar_entry_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_calendar_entry_pattern';
  $strongarm->value = '';
  $export['pathauto_node_calendar_entry_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_calendar_entry_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_calendar_entry_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_calendar_entry';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_calendar_entry'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function opin_calendar_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node calendar_entry defaults'.
  $permissions['administer panelizer node calendar_entry defaults'] = array(
    'name' => 'administer panelizer node calendar_entry defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create calendar_entry content'.
  $permissions['create calendar_entry content'] = array(
    'name' => 'create calendar_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any calendar_entry content'.
  $permissions['delete any calendar_entry content'] = array(
    'name' => 'delete any calendar_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own calendar_entry content'.
  $permissions['delete own calendar_entry content'] = array(
    'name' => 'delete own calendar_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any calendar_entry content'.
  $permissions['edit any calendar_entry content'] = array(
    'name' => 'edit any calendar_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own calendar_entry content'.
  $permissions['edit own calendar_entry content'] = array(
    'name' => 'edit own calendar_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function opin_calendar_defaultconfig_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_ownership_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_entry_type_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_entry_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_entry_date_value2_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wetkit_wysiwyg_text';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_entry_date_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_description' => 'field_description',
    'field_location' => 'field_location',
    'field_entry_date' => 'field_entry_date',
    'field_entry_date_1' => 'field_entry_date_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_entry_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_entry_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No events fit your search criteria for this month.';
  $handler->display->display_options['empty']['area']['format'] = 'wetkit_wysiwyg_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Subject';
  $handler->display->display_options['fields']['field_description']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  /* Field: Content: Entry date */
  $handler->display->display_options['fields']['field_entry_date']['id'] = 'field_entry_date';
  $handler->display->display_options['fields']['field_entry_date']['table'] = 'field_data_field_entry_date';
  $handler->display->display_options['fields']['field_entry_date']['field'] = 'field_entry_date';
  $handler->display->display_options['fields']['field_entry_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_entry_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_entry_date']['delta_offset'] = '0';
  /* Field: Content: Entry date */
  $handler->display->display_options['fields']['field_entry_date_1']['id'] = 'field_entry_date_1';
  $handler->display->display_options['fields']['field_entry_date_1']['table'] = 'field_data_field_entry_date';
  $handler->display->display_options['fields']['field_entry_date_1']['field'] = 'field_entry_date';
  $handler->display->display_options['fields']['field_entry_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_entry_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entry_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_date_1']['settings'] = array(
    'format_type' => 'calendar',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Entry date -  start date (field_entry_date) */
  $handler->display->display_options['sorts']['field_entry_date_value']['id'] = 'field_entry_date_value';
  $handler->display->display_options['sorts']['field_entry_date_value']['table'] = 'field_data_field_entry_date';
  $handler->display->display_options['sorts']['field_entry_date_value']['field'] = 'field_entry_date_value';
  /* Contextual filter: Field: Title (title_field) */
  $handler->display->display_options['arguments']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['arguments']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_field_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title_field_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title_field_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'calendar_entry' => 'calendar_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Entry type (field_entry_type) */
  $handler->display->display_options['filters']['field_entry_type_tid']['id'] = 'field_entry_type_tid';
  $handler->display->display_options['filters']['field_entry_type_tid']['table'] = 'field_data_field_entry_type';
  $handler->display->display_options['filters']['field_entry_type_tid']['field'] = 'field_entry_type_tid';
  $handler->display->display_options['filters']['field_entry_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_entry_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entry_type_tid']['expose']['operator_id'] = 'field_entry_type_tid_op';
  $handler->display->display_options['filters']['field_entry_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_entry_type_tid']['expose']['operator'] = 'field_entry_type_tid_op';
  $handler->display->display_options['filters']['field_entry_type_tid']['expose']['identifier'] = 'field_entry_type_tid';
  $handler->display->display_options['filters']['field_entry_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_entry_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_entry_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_entry_type_tid']['vocabulary'] = 'entry_type';
  $handler->display->display_options['filters']['field_entry_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Entry date -  start date (field_entry_date) */
  $handler->display->display_options['filters']['field_entry_date_value']['id'] = 'field_entry_date_value';
  $handler->display->display_options['filters']['field_entry_date_value']['table'] = 'field_data_field_entry_date';
  $handler->display->display_options['filters']['field_entry_date_value']['field'] = 'field_entry_date_value';
  $handler->display->display_options['filters']['field_entry_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_entry_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_entry_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entry_date_value']['expose']['operator_id'] = 'field_entry_date_value_op';
  $handler->display->display_options['filters']['field_entry_date_value']['expose']['label'] = 'From';
  $handler->display->display_options['filters']['field_entry_date_value']['expose']['operator'] = 'field_entry_date_value_op';
  $handler->display->display_options['filters']['field_entry_date_value']['expose']['identifier'] = 'field_entry_date_value';
  $handler->display->display_options['filters']['field_entry_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Entry date - end date (field_entry_date:value2) */
  $handler->display->display_options['filters']['field_entry_date_value2_1']['id'] = 'field_entry_date_value2_1';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['table'] = 'field_data_field_entry_date';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['field'] = 'field_entry_date_value2';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['group'] = 1;
  $handler->display->display_options['filters']['field_entry_date_value2_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entry_date_value2_1']['expose']['operator_id'] = 'field_entry_date_value2_1_op';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['expose']['label'] = 'To';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['expose']['operator'] = 'field_entry_date_value2_1_op';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['expose']['identifier'] = 'field_entry_date_value2_1';
  $handler->display->display_options['filters']['field_entry_date_value2_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_entry_type_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_entry_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_entry_date_value2_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_ownership_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wetkit_wysiwyg_text';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'calendar';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'title_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'wetkit_wysiwyg_text';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'calendar_entry' => 'calendar_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'word';
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'calendar-2';
  $translatables['calendar'] = array(
    t('Master'),
    t('Calendar'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No events fit your search criteria for this month.'),
    t('Title'),
    t('Subject'),
    t('Location'),
    t('Date'),
    t('All'),
    t('Type'),
    t('From'),
    t('To'),
    t('Page'),
    t('Search'),
  );
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'calendar_navigation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar Navigation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Entry date */
  $handler->display->display_options['fields']['field_entry_date']['id'] = 'field_entry_date';
  $handler->display->display_options['fields']['field_entry_date']['table'] = 'field_data_field_entry_date';
  $handler->display->display_options['fields']['field_entry_date']['field'] = 'field_entry_date';
  $handler->display->display_options['fields']['field_entry_date']['label'] = '';
  $handler->display->display_options['fields']['field_entry_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Entry date -  start date (field_entry_date) */
  $handler->display->display_options['sorts']['field_entry_date_value']['id'] = 'field_entry_date_value';
  $handler->display->display_options['sorts']['field_entry_date_value']['table'] = 'field_data_field_entry_date';
  $handler->display->display_options['sorts']['field_entry_date_value']['field'] = 'field_entry_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'calendar_entry' => 'calendar_entry',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['calendar_navigation'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['calendar_navigation'] = $view;

  return $export;
}
