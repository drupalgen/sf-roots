<?php
/**
 * @file
 * gen_person_content_type.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gen_person_content_type_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:person:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'person';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '70.04308822490641',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '29.95691177509359',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '86bd1627-6b0e-4e5e-a6a6-c88147538992';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-605bc7fa-85db-46f1-b52f-90316fcb57ad';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_name_prefix';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '605bc7fa-85db-46f1-b52f-90316fcb57ad';
    $display->content['new-605bc7fa-85db-46f1-b52f-90316fcb57ad'] = $pane;
    $display->panels['center'][0] = 'new-605bc7fa-85db-46f1-b52f-90316fcb57ad';
    $pane = new stdClass();
    $pane->pid = 'new-a1e5bc33-d3db-4091-8373-4b25a420cd5d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_given_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a1e5bc33-d3db-4091-8373-4b25a420cd5d';
    $display->content['new-a1e5bc33-d3db-4091-8373-4b25a420cd5d'] = $pane;
    $display->panels['center'][1] = 'new-a1e5bc33-d3db-4091-8373-4b25a420cd5d';
    $pane = new stdClass();
    $pane->pid = 'new-73f699e3-3a84-4595-ac72-0366a45c7a90';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_surname';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '73f699e3-3a84-4595-ac72-0366a45c7a90';
    $display->content['new-73f699e3-3a84-4595-ac72-0366a45c7a90'] = $pane;
    $display->panels['center'][2] = 'new-73f699e3-3a84-4595-ac72-0366a45c7a90';
    $pane = new stdClass();
    $pane->pid = 'new-8ff33e5d-70d6-4378-8263-d3a099ec22aa';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_name_suffix';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8ff33e5d-70d6-4378-8263-d3a099ec22aa';
    $display->content['new-8ff33e5d-70d6-4378-8263-d3a099ec22aa'] = $pane;
    $display->panels['center'][3] = 'new-8ff33e5d-70d6-4378-8263-d3a099ec22aa';
    $pane = new stdClass();
    $pane->pid = 'new-5e95dbf9-5817-4f29-8f4b-b7b94187667c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_gender';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5e95dbf9-5817-4f29-8f4b-b7b94187667c';
    $display->content['new-5e95dbf9-5817-4f29-8f4b-b7b94187667c'] = $pane;
    $display->panels['center'][4] = 'new-5e95dbf9-5817-4f29-8f4b-b7b94187667c';
    $pane = new stdClass();
    $pane->pid = 'new-21f3a68b-1a93-4283-b775-386e4b970fc7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_nicknames_aliases';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '21f3a68b-1a93-4283-b775-386e4b970fc7';
    $display->content['new-21f3a68b-1a93-4283-b775-386e4b970fc7'] = $pane;
    $display->panels['center'][5] = 'new-21f3a68b-1a93-4283-b775-386e4b970fc7';
    $pane = new stdClass();
    $pane->pid = 'new-9a647b50-d7f4-4625-b517-cef351b05129';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_born';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'genealogy_date_simple_text',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9a647b50-d7f4-4625-b517-cef351b05129';
    $display->content['new-9a647b50-d7f4-4625-b517-cef351b05129'] = $pane;
    $display->panels['center'][6] = 'new-9a647b50-d7f4-4625-b517-cef351b05129';
    $pane = new stdClass();
    $pane->pid = 'new-4108a28b-6222-4081-8950-6c94120efb38';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_birthplace';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '4108a28b-6222-4081-8950-6c94120efb38';
    $display->content['new-4108a28b-6222-4081-8950-6c94120efb38'] = $pane;
    $display->panels['center'][7] = 'new-4108a28b-6222-4081-8950-6c94120efb38';
    $pane = new stdClass();
    $pane->pid = 'new-613c1337-423a-4731-a963-7a36c3dad3fe';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_died';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'genealogy_date_simple_text',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '613c1337-423a-4731-a963-7a36c3dad3fe';
    $display->content['new-613c1337-423a-4731-a963-7a36c3dad3fe'] = $pane;
    $display->panels['center'][8] = 'new-613c1337-423a-4731-a963-7a36c3dad3fe';
    $pane = new stdClass();
    $pane->pid = 'new-34c847a1-e27e-4af1-8c0e-cc56f0041f32';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_person_deathplace';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '34c847a1-e27e-4af1-8c0e-cc56f0041f32';
    $display->content['new-34c847a1-e27e-4af1-8c0e-cc56f0041f32'] = $pane;
    $display->panels['center'][9] = 'new-34c847a1-e27e-4af1-8c0e-cc56f0041f32';
    $pane = new stdClass();
    $pane->pid = 'new-db45ffdb-da9c-4552-989a-3a6168d5ef1e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_gen_person_idx2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'db45ffdb-da9c-4552-989a-3a6168d5ef1e';
    $display->content['new-db45ffdb-da9c-4552-989a-3a6168d5ef1e'] = $pane;
    $display->panels['center'][10] = 'new-db45ffdb-da9c-4552-989a-3a6168d5ef1e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9a647b50-d7f4-4625-b517-cef351b05129';
  $panelizer->display = $display;
  $export['node:person:default'] = $panelizer;

  return $export;
}
