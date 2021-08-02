<?php
/**
 * @file
 * individual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function individual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function individual_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function individual_node_info() {
  $items = array(
    'individual' => array(
      'name' => t('Individual'),
      'base' => 'node_content',
      'description' => t('Use this to create a new Individual.'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
