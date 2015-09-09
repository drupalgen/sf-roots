<?php
/**
 * @file
 * gen_location_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gen_location_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create genealogy_location content'.
  $permissions['create genealogy_location content'] = array(
    'name' => 'create genealogy_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any genealogy_location content'.
  $permissions['delete any genealogy_location content'] = array(
    'name' => 'delete any genealogy_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own genealogy_location content'.
  $permissions['delete own genealogy_location content'] = array(
    'name' => 'delete own genealogy_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any genealogy_location content'.
  $permissions['edit any genealogy_location content'] = array(
    'name' => 'edit any genealogy_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own genealogy_location content'.
  $permissions['edit own genealogy_location content'] = array(
    'name' => 'edit own genealogy_location content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
