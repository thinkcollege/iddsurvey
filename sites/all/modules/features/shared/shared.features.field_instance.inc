<?php
/**
 * @file
 * shared.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function shared_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-reporting_period-field_rp_date_range'.
  $field_instances['taxonomy_term-reporting_period-field_rp_date_range'] = array(
    'bundle' => 'reporting_period',
    'deleted' => 0,
    'description' => 'For the end date, be sure to select the date after your desired end date. For example, to select an end date of January 31, select February 1.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_rp_date_range',
    'label' => 'Date range',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+3 months',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-reporting_period-field_rp_state2'.
  $field_instances['taxonomy_term-reporting_period-field_rp_state2'] = array(
    'bundle' => 'reporting_period',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_rp_state2',
    'label' => 'State',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date range');
  t('For the end date, be sure to select the date after your desired end date. For example, to select an end date of January 31, select February 1.');
  t('State');

  return $field_instances;
}
