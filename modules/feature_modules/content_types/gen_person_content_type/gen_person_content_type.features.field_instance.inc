<?php
/**
 * @file
 * gen_person_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gen_person_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-person-field_gen_person_idx'
  $field_instances['node-person-field_gen_person_idx'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gen_person_idx',
    'label' => 'gen_person_idx',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-person-field_gen_person_idx2'
  $field_instances['node-person-field_gen_person_idx2'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gen_person_idx2',
    'label' => 'gen_person_idx2',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_hidden',
      'settings' => array(),
      'type' => 'field_hidden',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-person-field_person_birthplace'
  $field_instances['node-person-field_person_birthplace'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Place of Birth.  List all components that are known, in this order:  City/Town, County/Parish, State/Province, Country.  For Country, use the commonly accepted abbreviation or acronym (USA for United States, GB for Great Britain, etc.  For all other components, please spell out the complete name (for example, for States, use "Tennessee" instead of "TN").

This field will suggest previously saved locations for you to select from in making your choice to keep locations consistent.  If no previously saved location is suggested that meets your needs, please add one by select "Create New Location" and filling in all the information you have available.  The Location description is the only required field.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_birthplace',
    'label' => 'Place of Birth',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-person-field_person_born'
  $field_instances['node-person-field_person_born'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Birthdate',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'genealogy_date',
        'settings' => array(),
        'type' => 'genealogy_date_simple_text',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'genealogy_date',
        'settings' => array(),
        'type' => 'genealogy_date_simple_text',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'genealogy_date',
        'settings' => array(),
        'type' => 'genealogy_date_simple_text',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_born',
    'label' => 'Born',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'genealogy_date',
      'settings' => array(),
      'type' => 'genealogy_date_text',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-person-field_person_deathplace'
  $field_instances['node-person-field_person_deathplace'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Location of Death.  List all components that are known, in this order:  City/Town, County/Parish, State/Province, Country.  For Country, use the commonly accepted abbreviation or acronym (USA for United States, GB for Great Britain, etc.  For all other components, please spell out the complete name (for example, for States, use "Tennessee" instead of "TN").

This field will suggest previously saved locations for you to select from in making your choice to keep locations consistent.  If no previously saved location is suggested that meets your needs, please add one by select "Create New Location" and filling in all the information you have available.  The Location description is the only required field.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_deathplace',
    'label' => 'Location of Death',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-person-field_person_died'
  $field_instances['node-person-field_person_died'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Date of Death',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'genealogy_date',
        'settings' => array(),
        'type' => 'genealogy_date_simple_text',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'genealogy_date',
        'settings' => array(),
        'type' => 'genealogy_date_simple_text',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'genealogy_date',
        'settings' => array(),
        'type' => 'genealogy_date_simple_text',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_died',
    'label' => 'Died',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'genealogy_date',
      'settings' => array(),
      'type' => 'genealogy_date_text',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-person-field_person_gender'
  $field_instances['node-person-field_person_gender'] = array(
    'bundle' => 'person',
    'default_value' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Male, Female, or Unknown',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_gender',
    'label' => 'Gender',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-person-field_person_given_name'
  $field_instances['node-person-field_person_given_name'] = array(
    'bundle' => 'person',
    'default_value' => array(
      0 => array(
        'value' => 'unk',
      ),
    ),
    'deleted' => 0,
    'description' => 'Given name, including any middle name(s)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_given_name',
    'label' => 'Given Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-person-field_person_name_prefix'
  $field_instances['node-person-field_person_name_prefix'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A pre-nominal designation indicating a title or other prefix that comes before a person\'s given name.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_name_prefix',
    'label' => 'Prefix',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-person-field_person_name_suffix'
  $field_instances['node-person-field_person_name_suffix'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Post-nominal letters (for positions, degrees, offices, etc) or Generational ordering (Jr, Sr, III, etc)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_name_suffix',
    'label' => 'Suffix',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-person-field_person_nicknames_aliases'
  $field_instances['node-person-field_person_nicknames_aliases'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nicknames, aliases, or other names by which this person may be known',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_nicknames_aliases',
    'label' => 'Aliases',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-person-field_person_surname'
  $field_instances['node-person-field_person_surname'] = array(
    'bundle' => 'person',
    'default_value' => array(
      0 => array(
        'value' => 'unk',
      ),
    ),
    'deleted' => 0,
    'description' => 'Surname, or Last Name',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_surname',
    'label' => 'Surname',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A pre-nominal designation indicating a title or other prefix that comes before a person\'s given name.');
  t('Aliases');
  t('Birthdate');
  t('Born');
  t('Date of Death');
  t('Died');
  t('Gender');
  t('Given Name');
  t('Given name, including any middle name(s)');
  t('Location of Death');
  t('Location of Death.  List all components that are known, in this order:  City/Town, County/Parish, State/Province, Country.  For Country, use the commonly accepted abbreviation or acronym (USA for United States, GB for Great Britain, etc.  For all other components, please spell out the complete name (for example, for States, use "Tennessee" instead of "TN").

This field will suggest previously saved locations for you to select from in making your choice to keep locations consistent.  If no previously saved location is suggested that meets your needs, please add one by select "Create New Location" and filling in all the information you have available.  The Location description is the only required field.');
  t('Male, Female, or Unknown');
  t('Nicknames, aliases, or other names by which this person may be known');
  t('Place of Birth');
  t('Place of Birth.  List all components that are known, in this order:  City/Town, County/Parish, State/Province, Country.  For Country, use the commonly accepted abbreviation or acronym (USA for United States, GB for Great Britain, etc.  For all other components, please spell out the complete name (for example, for States, use "Tennessee" instead of "TN").

This field will suggest previously saved locations for you to select from in making your choice to keep locations consistent.  If no previously saved location is suggested that meets your needs, please add one by select "Create New Location" and filling in all the information you have available.  The Location description is the only required field.');
  t('Post-nominal letters (for positions, degrees, offices, etc) or Generational ordering (Jr, Sr, III, etc)');
  t('Prefix');
  t('Suffix');
  t('Surname');
  t('Surname, or Last Name');
  t('gen_person_idx');
  t('gen_person_idx2');

  return $field_instances;
}
