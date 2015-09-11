<?php
/**
 * @file
 * genealogy_sources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function genealogy_sources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function genealogy_sources_node_info() {
  $items = array(
    'repository' => array(
      'name' => t('Repository'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'source' => array(
      'name' => t('Source'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'source_citation' => array(
      'name' => t('Source Citation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Record Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
