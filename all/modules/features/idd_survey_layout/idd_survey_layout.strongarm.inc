<?php

/**
 * @file
 * idd_survey_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function idd_survey_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_idd_survey';
  $strongarm->value = '2';
  $export['auto_entitylabel_node_idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_idd_survey';
  $strongarm->value = '<?php
$query = new EntityFieldQuery;
$result = $query
->entityCondition(\'entity_type\', \'taxonomy_term\')
->propertyCondition(\'name\', \'[node:field_idd_state_name]\')
->propertyCondition(\'vid\', 3) // 4 == Vid of the known vocabulary.
->execute();
$tid = array_shift($result[\'taxonomy_term\'])->tid;
$current = taxonomy_term_load($tid); 
 if ($current)
    print $current->description . \': [node:field_idd_reporting_period]\'; 
?>';
  $export['auto_entitylabel_pattern_node_idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_idd_survey';
  $strongarm->value = 1;
  $export['auto_entitylabel_php_node_idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__idd_survey';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
    ),
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_idd_survey';
  $strongarm->value = array();
  $export['menu_options_idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_idd_survey';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_idd_survey';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_idd_survey';
  $strongarm->value = '1';
  $export['node_preview_idd_survey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_idd_survey';
  $strongarm->value = 0;
  $export['node_submitted_idd_survey'] = $strongarm;

  return $export;
}
