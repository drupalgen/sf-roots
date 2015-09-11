<?php
/**
 * @file
 * genealogy_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function genealogy_events_taxonomy_default_vocabularies() {
  return array(
    'family_events' => array(
      'name' => 'Family Events',
      'machine_name' => 'family_events',
      'description' => 'Family Event Categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'life_events' => array(
      'name' => 'Life Events',
      'machine_name' => 'life_events',
      'description' => 'Life Event Categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
