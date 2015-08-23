<?php
/**
 * @file
 * opin_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opin_calendar_views_default_views() {
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
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['arguments']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_field_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title_field_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Broken/missing handler */
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
  $handler->display->display_options['path'] = 'calendar-2';
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
  $export['calendar_navigation'] = $view;

  return $export;
}
