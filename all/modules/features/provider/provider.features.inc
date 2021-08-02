<?php
/**
 * @file
 * provider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function provider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function provider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function provider_node_info() {
  $items = array(
    'provider' => array(
      'name' => t('Provider'),
      'base' => 'node_content',
      'description' => t('Use this to create a new StateData.info provider.'),
      'has_title' => '1',
      'title_label' => t('Identifier'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
