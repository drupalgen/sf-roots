<?php
/**
 * @file
 * gen_location_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gen_location_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gen_location_content_type_node_info() {
  $items = array(
    'genealogy_location' => array(
      'name' => t('Genealogy Location'),
      'base' => 'node_content',
      'description' => t('Location field for Genealogy records'),
      'has_title' => '1',
      'title_label' => t('Location'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
