<?php
/**
 * @file
 * gen_person_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gen_person_content_type_taxonomy_default_vocabularies() {
  return array(
    'gender' => array(
      'name' => 'Gender',
      'machine_name' => 'gender',
      'description' => 'Gender of a person',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'name_prefix' => array(
      'name' => 'Name Prefix',
      'machine_name' => 'name_prefix',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'name_suffix' => array(
      'name' => 'Name Suffix',
      'machine_name' => 'name_suffix',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
