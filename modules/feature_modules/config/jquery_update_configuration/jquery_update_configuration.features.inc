<?php
/**
 * @file
 * jquery_update_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jquery_update_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
