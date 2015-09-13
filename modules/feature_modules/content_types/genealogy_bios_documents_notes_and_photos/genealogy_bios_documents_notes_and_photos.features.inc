<?php
/**
 * @file
 * genealogy_bios_documents_notes_and_photos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function genealogy_bios_documents_notes_and_photos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function genealogy_bios_documents_notes_and_photos_node_info() {
  $items = array(
    'biography' => array(
      'name' => t('Biography'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'documents_files' => array(
      'name' => t('Documents / Files'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'notes' => array(
      'name' => t('Notes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photos' => array(
      'name' => t('Photos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Short Description'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
