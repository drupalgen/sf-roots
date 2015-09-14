<?php
/**
 * @file
 * gen_person_content_type.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function gen_person_content_type_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'node_person';
  $layout->admin_title = 'Node Person';
  $layout->admin_description = '';
  $layout->category = 'Node';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'image_gallery',
        ),
        'parent' => 'main',
        'class' => 'node-person row-individual row',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Individual',
        'width' => '65.00441306266549',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'node-person region-individual region',
        'hide_empty' => 0,
      ),
      'image_gallery' => array(
        'type' => 'region',
        'title' => 'Image Gallery',
        'width' => '34.99558693733451',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'node-person region-image-gallery region',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'life_events_and_facts',
        ),
        'parent' => 'main',
        'class' => 'node-person row-life-events row',
        'hide_empty' => 0,
      ),
      'life_events_and_facts' => array(
        'type' => 'region',
        'title' => 'Life Events and Facts',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'node-person region-life-events region',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'parents_and_siblings',
          1 => 'spouses_and_children',
        ),
        'parent' => 'main',
        'class' => 'node-person row-family-info row',
        'hide_empty' => 0,
      ),
      'parents_and_siblings' => array(
        'type' => 'region',
        'title' => 'Parents and Siblings',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'node-person region-parents-siblings region',
        'hide_empty' => 0,
      ),
      'spouses_and_children' => array(
        'type' => 'region',
        'title' => 'Spouses and Children',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'node-person region-spouses-children region',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'biography',
        ),
        'parent' => 'main',
        'class' => 'node-person row-bio row',
        'hide_empty' => 0,
      ),
      'biography' => array(
        'type' => 'region',
        'title' => 'Biography',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'node-person region-bio region',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'references',
        ),
        'parent' => 'main',
        'class' => 'node-person row-references row',
        'hide_empty' => 0,
      ),
      'references' => array(
        'type' => 'region',
        'title' => 'References',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'node-person region-references region',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['node_person'] = $layout;

  return $export;
}
