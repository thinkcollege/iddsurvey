<?php
/**
 * @file
 * state.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function state_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function state_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function state_node_info() {
  $items = array(
    'reporting_period' => array(
      'name' => t('Reporting period'),
      'base' => 'node_content',
      'description' => t('Use this to create a new reporting period for a State.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'state' => array(
      'name' => t('State'),
      'base' => 'node_content',
      'description' => t('Use this to create a new state for data collection. This is the top-level entity. Providers and Reporting Periods belong to States. Individuals belong to Providers.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
