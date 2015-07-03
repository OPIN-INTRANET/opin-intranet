<?php
/**
 * @file
 * opin_calendar.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function opin_calendar_taxonomy_default_vocabularies() {
  return array(
    'entry_type' => array(
      'name' => 'Entry type',
      'machine_name' => 'entry_type',
      'description' => 'Type of calendar entry (Event, Meeting)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
