<?php
/**
 * @file
 * sfr_date_configuration_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sfr_date_configuration_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
