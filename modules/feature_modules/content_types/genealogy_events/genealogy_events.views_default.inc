<?php
/**
 * @file
 * genealogy_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function genealogy_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'life_events_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Life Events List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Life Events and Facts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_type' => 'field_event_type',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Beginning Date */
  $handler->display->display_options['fields']['field_beginning_date']['id'] = 'field_beginning_date';
  $handler->display->display_options['fields']['field_beginning_date']['table'] = 'field_data_field_beginning_date';
  $handler->display->display_options['fields']['field_beginning_date']['field'] = 'field_beginning_date';
  $handler->display->display_options['fields']['field_beginning_date']['click_sort_column'] = 'orig_text';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['label'] = 'Ending Date';
  $handler->display->display_options['fields']['field_end_date']['click_sort_column'] = 'orig_text';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Brief Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Person ID */
  $handler->display->display_options['fields']['field_person_id']['id'] = 'field_person_id';
  $handler->display->display_options['fields']['field_person_id']['table'] = 'field_data_field_person_id';
  $handler->display->display_options['fields']['field_person_id']['field'] = 'field_person_id';
  $handler->display->display_options['fields']['field_person_id']['label'] = '';
  $handler->display->display_options['fields']['field_person_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_id']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_person_id']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/edit/nojs/[field_person_id]';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'btn btn-default modal-buttons ctools-use-modal';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'Notes';
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'node/[nid_1]/edit/[field_person_id]';
  $handler->display->display_options['fields']['nid_1']['alter']['link_class'] = 'ctools-use-modal btn btn-default modal-buttons';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$person_id = $data->field_field_person_id[0][\'raw\'][\'target_id\'];
$query = new EntityFieldQuery();

$result = $query->entityCondition(\'entity_type\', \'node\')
  ->entityCondition(\'bundle\', \'notes\')
  ->fieldCondition(\'field_assoc_entity_id\', \'target_id\', $row->nid, \'=\')
  ->propertyOrderBy(\'changed\', \'DESC\')
  ->range(0, 1)
  ->execute();
$exists = FALSE;
if (isset($result[\'node\'])) {
  $exists = TRUE;
  $notes_nids = array_keys($result[\'node\']);
  $modal_path = \'node/\' . $notes_nids[0] . \'/nojs/\' . $row->nid . \'/\' . $person_id;
  $nonmodal_path = \'note/\' . $notes_nids[0];
} else {
  $modal_path = \'node/add/notes/nojs/\' . $row->nid . \'/\' .  $person_id;
  $nonmodal_path = \'node/add/notes/\' . $row->nid;
}
if(user_access(\'create person content\')) {
  if ($exists) {
    $text = t(\'Notes *\');
  } else {
    $text = t(\'Notes\');
  }
  $destination[\'destination\'] = drupal_get_path_alias(\'node/\' . $person_id);
  $modal_link = l($text, $modal_path, array(\'attributes\' => array(\'class\' => array(\'btn btn-default modal-buttons ctools-use-modal\'))));
  $nonmodal_link = l($text, $nonmodal_path, array(\'attributes\' => array(\'class\' => array(\'btn btn-default nonmodal-buttons\')),\'query\' => array(\'field_entity_assoc_id\' => $row->field_person_id, $destination)));
$output = $modal_link . $nonmodal_link;
print $output;
}
?>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Person ID (field_person_id) */
  $handler->display->display_options['arguments']['field_person_id_target_id']['id'] = 'field_person_id_target_id';
  $handler->display->display_options['arguments']['field_person_id_target_id']['table'] = 'field_data_field_person_id';
  $handler->display->display_options['arguments']['field_person_id_target_id']['field'] = 'field_person_id_target_id';
  $handler->display->display_options['arguments']['field_person_id_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_person_id_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_person_id_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_id_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_id_target_id']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['life_events_list'] = $view;

  return $export;
}
