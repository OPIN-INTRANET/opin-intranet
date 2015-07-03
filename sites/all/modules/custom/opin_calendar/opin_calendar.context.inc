<?php
/**
 * @file
 * opin_calendar.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function opin_calendar_context_default_contexts() {
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
