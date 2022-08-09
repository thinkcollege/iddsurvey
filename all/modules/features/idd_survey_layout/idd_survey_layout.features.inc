<?php

/**
 * @file
 * idd_survey_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function idd_survey_layout_ctools_plugin_api($module = NULL, $api = NULL) {
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
function idd_survey_layout_node_info() {
  $items = array(
    'idd_survey' => array(
      'name' => t('IDD Survey'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
