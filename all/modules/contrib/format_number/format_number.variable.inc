<?php

/**
 * @file
 * Hook implementations for the variable module.
 */

/**
 * Implements hook_variable_group_info().
 */
function format_number_variable_group_info() {
  $groups['format_number'] = array(
    'title' => t('Format Number API'),
    'description' => t('Exposes variables from the Format Number API'),
    'access' => 'configure default number format',
    'path' => 'admin/config/regional/format_number',
  );
  return $groups;
}

/**
 * Implements hook_variable_info().
 */
function format_number_variable_info($options) {
  $variables['format_number_thousands_sep'] = array(
    'type' => 'string',
    'title' => t('Thousands separator', array(), $options),
    'default' => ',',
    'options' => format_number_get_thousands_separator_options(),
    'description' => t('Select the character that will be used as decimal point.', array(), $options),
    'required' => TRUE,
    'localize' => TRUE,
    'group' => 'format_number',
  );
  $variables['format_number_decimal_point'] = array(
    'type' => 'string',
    'title' => t('Decimal point', array(), $options),
    'default' => '.',
    'options' => format_number_get_decimal_point_options(),
    'description' => t('Select the character that will be used as thousands separator.', array(), $options),
    'required' => TRUE,
    'localize' => TRUE,
    'group' => 'format_number',
  );
  return $variables;
}
