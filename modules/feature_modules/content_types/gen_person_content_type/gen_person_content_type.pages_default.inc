<?php
/**
 * @file
 * gen_person_content_type.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gen_person_content_type_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_8e1be1e8-bac9-49dd-96ab-99efd9b98eb5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Person',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'person' => 'person',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:node_person';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'image_gallery' => NULL,
      'life_events_and_facts' => NULL,
      'parents_and_siblings' => NULL,
      'spouses_and_children' => NULL,
      'biography' => NULL,
      'references' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'person/%node:nid/%node:title';
  $display->uuid = '364a50f8-8dce-4661-8c5d-4e3e00955854';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ead8c73d-e18a-43f3-9e0a-e2f69f8cdeb4';
    $pane->panel = 'center';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ead8c73d-e18a-43f3-9e0a-e2f69f8cdeb4';
    $display->content['new-ead8c73d-e18a-43f3-9e0a-e2f69f8cdeb4'] = $pane;
    $display->panels['center'][0] = 'new-ead8c73d-e18a-43f3-9e0a-e2f69f8cdeb4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_8e1be1e8-bac9-49dd-96ab-99efd9b98eb5'] = $handler;

  return $export;
}
