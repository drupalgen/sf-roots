<?php
/**
 * @file
 * genealogy_content_editor_role.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function genealogy_content_editor_role_default_roles_permissions() {
  $roles = array();

  // Exported role: content editor
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
    'permissions' => array(
      'access user profiles' => TRUE,
      'change own username' => TRUE,
      'create genealogy_location content' => TRUE,
      'create person content' => TRUE,
      'edit any genealogy_location content' => TRUE,
      'edit any person content' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
    ),
  );

  return $roles;
}
