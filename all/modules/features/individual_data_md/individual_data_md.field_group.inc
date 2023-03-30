<?php

/**
 * @file
 * individual_data_md.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function individual_data_md_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shl|node|individual_data|form';
  $field_group->group_name = 'group_shl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_shl_partic',
      1 => 'field_shl_hrs',
      2 => 'field_shl_gross_wages',
      3 => 'field_shl_paid_tim_off',
      4 => 'field_shl_set_aside',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-shl field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Facility based/Sheltered work',
    'weight' => '12',
  );
  $field_groups['group_shl|node|individual_data|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Facility based/Sheltered work');

  return $field_groups;
}
