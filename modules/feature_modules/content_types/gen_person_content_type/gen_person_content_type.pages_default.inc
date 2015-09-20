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
      'parents_and_siblings' => NULL,
      'spouses_and_children' => NULL,
      'biography' => NULL,
      'references' => NULL,
      'life_events_and_facts' => NULL,
    ),
    'life_events_and_facts' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
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
    $pane = new stdClass();
    $pane->pid = 'new-f485b110-31a5-4c2e-867f-20c60a46ef8f';
    $pane->panel = 'life_events_and_facts';
    $pane->type = 'views';
    $pane->subtype = 'life_events_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->uuid = 'f485b110-31a5-4c2e-867f-20c60a46ef8f';
    $display->content['new-f485b110-31a5-4c2e-867f-20c60a46ef8f'] = $pane;
    $display->panels['life_events_and_facts'][0] = 'new-f485b110-31a5-4c2e-867f-20c60a46ef8f';
    $pane = new stdClass();
    $pane->pid = 'new-c037a965-e10f-4551-a7f2-e828b43f5a22';
    $pane->panel = 'life_events_and_facts';
    $pane->type = 'block';
    $pane->subtype = 'gen_event-add_event_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c037a965-e10f-4551-a7f2-e828b43f5a22';
    $display->content['new-c037a965-e10f-4551-a7f2-e828b43f5a22'] = $pane;
    $display->panels['life_events_and_facts'][1] = 'new-c037a965-e10f-4551-a7f2-e828b43f5a22';
    $pane = new stdClass();
    $pane->pid = 'new-b74171bd-db0c-48d8-ac1a-87ff244f9310';
    $pane->panel = 'references';
    $pane->type = 'views';
    $pane->subtype = 'source_citations_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b74171bd-db0c-48d8-ac1a-87ff244f9310';
    $display->content['new-b74171bd-db0c-48d8-ac1a-87ff244f9310'] = $pane;
    $display->panels['references'][0] = 'new-b74171bd-db0c-48d8-ac1a-87ff244f9310';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_8e1be1e8-bac9-49dd-96ab-99efd9b98eb5'] = $handler;

  return $export;
}
