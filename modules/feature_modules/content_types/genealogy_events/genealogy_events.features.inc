<?php
/**
 * @file
 * genealogy_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function genealogy_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function genealogy_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Life Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Brief Description'),
      'help' => '',
    ),
    'family_event' => array(
      'name' => t('Family Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Brief Description'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
