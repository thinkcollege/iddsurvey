<?php
/**
 * @file
 * individual_data_ma.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function individual_data_ma_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_shl_less'.
  $field_bases['field_shl_less'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shl_less',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Person is being paid less than minimum wage through your agency\'s DOL Sub-Minimum Wage Certificate (Title 14C)',
        1 => 'Other: please explain below',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_shl_less_other'.
  $field_bases['field_shl_less_other'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shl_less_other',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
