<?php
/**
 * @file
 * genealogy_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function genealogy_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_beg_date|node|event|form';
  $field_group->group_name = 'group_event_beg_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_row';
  $field_group->data = array(
    'label' => 'Beg Date',
    'weight' => '2',
    'children' => array(
      0 => 'field_beginning_date',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Beg Date',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '2',
        'bootstrap_grid_col_lg' => '2',
        'required_fields' => 1,
        'classes' => 'group-event-beg-date field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_event_beg_date|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_end_date|node|event|form';
  $field_group->group_name = 'group_event_end_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_row';
  $field_group->data = array(
    'label' => 'End Date',
    'weight' => '3',
    'children' => array(
      0 => 'field_end_date',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'End Date',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '2',
        'bootstrap_grid_col_lg' => '2',
        'required_fields' => 1,
        'classes' => 'group-event-end-date field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_event_end_date|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_location|node|event|form';
  $field_group->group_name = 'group_event_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_row';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '6',
        'bootstrap_grid_col_lg' => '6',
        'required_fields' => 1,
        'classes' => 'group-event-location field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_event_location|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_row|node|event|form';
  $field_group->group_name = 'group_event_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_event_type',
      1 => 'group_event_beg_date',
      2 => 'group_event_end_date',
      3 => 'group_event_location',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event-row field-group-bootstrap_grid_row',
        'show_heading' => 0,
        'heading_position' => 0,
        'label_element' => 'h3',
        'description_element' => 'p',
        'description' => '',
        'panelize' => 0,
        'bootstrap_grid_col_xs' => '',
        'bootstrap_grid_col_sm' => '',
        'bootstrap_grid_col_md' => '',
        'bootstrap_grid_col_lg' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_row|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_type|node|event|form';
  $field_group->group_name = 'group_event_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_row';
  $field_group->data = array(
    'label' => 'Event type',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_type',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Event type',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '2',
        'bootstrap_grid_col_lg' => '2',
        'required_fields' => 1,
        'classes' => 'group-event-type field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_event_type|node|event|form'] = $field_group;

  return $export;
}
