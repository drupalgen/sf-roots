<?php
/**
 * @file
 * genealogy_family_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function genealogy_family_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function genealogy_family_content_type_node_info() {
  $items = array(
    'family' => array(
      'name' => t('Family'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
