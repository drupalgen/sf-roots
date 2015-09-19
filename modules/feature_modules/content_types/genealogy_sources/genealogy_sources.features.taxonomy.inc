<?php
/**
 * @file
 * genealogy_sources.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function genealogy_sources_taxonomy_default_vocabularies() {
  return array(
    'repository_type' => array(
      'name' => 'Repository Type',
      'machine_name' => 'repository_type',
      'description' => 'Repository Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'source_quality' => array(
      'name' => 'Source Quality',
      'machine_name' => 'source_quality',
      'description' => 'Source Quality',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'source_type' => array(
      'name' => 'Source Type',
      'machine_name' => 'source_type',
      'description' => 'Source Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
