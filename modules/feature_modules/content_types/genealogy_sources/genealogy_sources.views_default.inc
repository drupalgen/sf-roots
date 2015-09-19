<?php
/**
 * @file
 * genealogy_sources.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function genealogy_sources_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'source_citations_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Source Citations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Source Citations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_assoc_entity_id_target_id']['id'] = 'field_assoc_entity_id_target_id';
  $handler->display->display_options['relationships']['field_assoc_entity_id_target_id']['table'] = 'field_data_field_assoc_entity_id';
  $handler->display->display_options['relationships']['field_assoc_entity_id_target_id']['field'] = 'field_assoc_entity_id_target_id';
  $handler->display->display_options['relationships']['field_assoc_entity_id_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Entity ID */
  $handler->display->display_options['fields']['field_assoc_entity_id']['id'] = 'field_assoc_entity_id';
  $handler->display->display_options['fields']['field_assoc_entity_id']['table'] = 'field_data_field_assoc_entity_id';
  $handler->display->display_options['fields']['field_assoc_entity_id']['field'] = 'field_assoc_entity_id';
  $handler->display->display_options['fields']['field_assoc_entity_id']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Reference Field */
  $handler->display->display_options['fields']['field_ref']['id'] = 'field_ref';
  $handler->display->display_options['fields']['field_ref']['table'] = 'field_data_field_ref';
  $handler->display->display_options['fields']['field_ref']['field'] = 'field_ref';
  $handler->display->display_options['fields']['field_ref']['type'] = 'field_hidden_text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Content: Reference Field (field_ref) */
  $handler->display->display_options['sorts']['field_ref_value']['id'] = 'field_ref_value';
  $handler->display->display_options['sorts']['field_ref_value']['table'] = 'field_data_field_ref';
  $handler->display->display_options['sorts']['field_ref_value']['field'] = 'field_ref_value';
  /* Contextual filter: Content: Entity ID (field_assoc_entity_id) */
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['id'] = 'field_assoc_entity_id_target_id';
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['table'] = 'field_data_field_assoc_entity_id';
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['field'] = 'field_assoc_entity_id_target_id';
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_assoc_entity_id_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'source_citation' => 'source_citation',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['source_citations_view'] = $view;

  return $export;
}
