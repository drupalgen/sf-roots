<?php
/**
 * @file
 * gen_person_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gen_person_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_alias_col|node|person|form';
  $field_group->group_name = 'group_person_alias_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_nicknames';
  $field_group->data = array(
    'label' => '',
    'weight' => '21',
    'children' => array(
      0 => 'field_person_nicknames_aliases',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '8',
        'bootstrap_grid_col_sm' => '8',
        'bootstrap_grid_col_md' => '8',
        'bootstrap_grid_col_lg' => '8',
        'required_fields' => 1,
        'classes' => 'group-person-alias-col field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_alias_col|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_birth_date|node|person|form';
  $field_group->group_name = 'group_person_birth_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_birth';
  $field_group->data = array(
    'label' => '',
    'weight' => '21',
    'children' => array(
      0 => 'field_person_born',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '4',
        'bootstrap_grid_col_lg' => '4',
        'required_fields' => 1,
        'classes' => 'group-person-birth-date field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_birth_date|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_birth_place|node|person|form';
  $field_group->group_name = 'group_person_birth_place';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_birth';
  $field_group->data = array(
    'label' => '',
    'weight' => '22',
    'children' => array(
      0 => 'field_person_birthplace',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '8',
        'bootstrap_grid_col_sm' => '8',
        'bootstrap_grid_col_md' => '8',
        'bootstrap_grid_col_lg' => '8',
        'required_fields' => 1,
        'classes' => 'group-person-birth-place field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_birth_place|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_birth|node|person|form';
  $field_group->group_name = 'group_person_birth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Born',
    'weight' => '3',
    'children' => array(
      0 => 'group_person_birth_date',
      1 => 'group_person_birth_place',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Born',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h4',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '12',
        'bootstrap_grid_col_lg' => '12',
        'required_fields' => 1,
        'classes' => 'group-person-birth field-group-bootstrap_grid_row',
        'description' => '',
      ),
    ),
  );
  $export['group_person_birth|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_death_date|node|person|form';
  $field_group->group_name = 'group_person_death_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_death';
  $field_group->data = array(
    'label' => '',
    'weight' => '21',
    'children' => array(
      0 => 'field_person_died',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '4',
        'bootstrap_grid_col_lg' => '4',
        'required_fields' => 1,
        'classes' => 'group-person-death-date field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_death_date|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_death_place|node|person|form';
  $field_group->group_name = 'group_person_death_place';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_death';
  $field_group->data = array(
    'label' => '',
    'weight' => '22',
    'children' => array(
      0 => 'field_person_deathplace',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '8',
        'bootstrap_grid_col_sm' => '8',
        'bootstrap_grid_col_md' => '8',
        'bootstrap_grid_col_lg' => '8',
        'required_fields' => 1,
        'classes' => 'group-person-death-place field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_death_place|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_death|node|person|form';
  $field_group->group_name = 'group_person_death';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Died',
    'weight' => '4',
    'children' => array(
      0 => 'group_person_death_date',
      1 => 'group_person_death_place',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Died',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h4',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '12',
        'bootstrap_grid_col_lg' => '12',
        'required_fields' => 1,
        'classes' => 'group-person-death field-group-bootstrap_grid_row',
        'description' => '',
      ),
    ),
  );
  $export['group_person_death|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_gender_col|node|person|form';
  $field_group->group_name = 'group_person_gender_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_nicknames';
  $field_group->data = array(
    'label' => '',
    'weight' => '20',
    'children' => array(
      0 => 'field_person_gender',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '4',
        'bootstrap_grid_col_lg' => '4',
        'required_fields' => 1,
        'classes' => 'group-person-gender-col field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_gender_col|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_name_given|node|person|form';
  $field_group->group_name = 'group_person_name_given';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_name';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_person_given_name',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '8',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '4',
        'bootstrap_grid_col_lg' => '4',
        'required_fields' => 1,
        'classes' => 'group-person-name-given field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_name_given|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_name_prefix|node|person|form';
  $field_group->group_name = 'group_person_name_prefix';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_name';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_person_name_prefix',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '2',
        'bootstrap_grid_col_md' => '2',
        'bootstrap_grid_col_lg' => '2',
        'required_fields' => 1,
        'classes' => 'group-person-name-prefix field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_name_prefix|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_name_suffix|node|person|form';
  $field_group->group_name = 'group_person_name_suffix';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_name';
  $field_group->data = array(
    'label' => '',
    'weight' => '8',
    'children' => array(
      0 => 'field_person_name_suffix',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '4',
        'bootstrap_grid_col_sm' => '2',
        'bootstrap_grid_col_md' => '2',
        'bootstrap_grid_col_lg' => '2',
        'required_fields' => 1,
        'classes' => 'group-person-name-suffix field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_name_suffix|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_name_surname|node|person|form';
  $field_group->group_name = 'group_person_name_surname';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_name';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'field_person_surname',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '8',
        'bootstrap_grid_col_sm' => '4',
        'bootstrap_grid_col_md' => '4',
        'bootstrap_grid_col_lg' => '4',
        'required_fields' => 1,
        'classes' => 'group-person-name-surname field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_person_name_surname|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_name|node|person|form';
  $field_group->group_name = 'group_person_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '0',
    'children' => array(
      0 => 'group_person_name_prefix',
      1 => 'group_person_name_suffix',
      2 => 'group_person_name_given',
      3 => 'group_person_name_surname',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h4',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '12',
        'bootstrap_grid_col_lg' => '12',
        'required_fields' => 1,
        'classes' => 'group-person-name field-group-bootstrap_grid_row',
        'description' => '',
      ),
    ),
  );
  $export['group_person_name|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_nicknames|node|person|form';
  $field_group->group_name = 'group_person_nicknames';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'group_person_gender_col',
      1 => 'group_person_alias_col',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '12',
        'bootstrap_grid_col_md' => '12',
        'bootstrap_grid_col_lg' => '12',
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => '',
    ),
  );
  $export['group_person_nicknames|node|person|form'] = $field_group;

  return $export;
}
