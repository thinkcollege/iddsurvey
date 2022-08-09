<?php

/**
 * @file
 * individual_data_ma.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function individual_data_ma_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function individual_data_ma_node_info() {
  $items = array(
    'individual_data_ma' => array(
      'name' => t('Individual data (MA)'),
      'base' => 'node_content',
      'description' => t('Use this to create a new "Individual data" node for Massachusetts - this contains a single reporting period\'s data, and is linked to a single "Individual" node.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
