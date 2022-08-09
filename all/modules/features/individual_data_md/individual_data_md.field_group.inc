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
  $field_group->identifier = 'group_com_non_work|node|individual_data|form';
  $field_group->group_name = 'group_com_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Community based non work',
    'weight' => '13',
    'children' => array(
      0 => 'field_com_non_work_partic',
      1 => 'field_com_non_work_vol_partic',
      2 => 'field_com_non_work_vol_partic_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-non-work field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_non_work|node|individual_data|form';
  $field_group->group_name = 'group_fac_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Facility based non work',
    'weight' => '14',
    'children' => array(
      0 => 'field_fac_non_work_partic',
      1 => 'field_fac_non_work_yn_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fac-non-work field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grp_integ|node|individual_data|form';
  $field_group->group_name = 'group_grp_integ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Group integrated job',
    'weight' => '10',
    'children' => array(
      0 => 'field_grp_integ_partic',
      1 => 'field_grp_integ_hrs',
      2 => 'field_grp_integ_gross_wages',
      3 => 'field_grp_integ_paid_tim_off',
      4 => 'field_grp_integ_set_aside',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-grp-integ field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_individual_data_categories|node|individual_data|form';
  $field_group->group_name = 'group_individual_data_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '5',
    'children' => array(
      0 => 'group_indv_comp',
      1 => 'group_indv_cont',
      2 => 'group_grp_integ',
      3 => 'group_self_emp',
      4 => 'group_shl',
      5 => 'group_com_non_work',
      6 => 'group_fac_non_work',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-individual-data-categories field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_comp|node|individual_data|form';
  $field_group->group_name = 'group_indv_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Individual competitive job',
    'weight' => '8',
    'children' => array(
      0 => 'field_indv_comp_hrs',
      1 => 'field_indv_comp_gross_wages',
      2 => 'field_indv_comp_paid_tim_off',
      3 => 'field_indv_comp_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indv-comp field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_cont|node|individual_data|form';
  $field_group->group_name = 'group_indv_cont';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Individual contracted job',
    'weight' => '9',
    'children' => array(
      0 => 'field_indv_cont_hrs',
      1 => 'field_indv_cont_gross_wages',
      2 => 'field_indv_cont_paid_tim_off',
      3 => 'field_indv_cont_set_aside',
      4 => 'field_indv_cont_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indv-cont field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_emp|node|individual_data|form';
  $field_group->group_name = 'group_self_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Self employment',
    'weight' => '11',
    'children' => array(
      0 => 'field_self_emp_partic',
      1 => 'field_self_emp_hrs',
      2 => 'field_self_emp_gross_income',
      3 => 'field_self_emp_gross_expens',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-self-emp field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

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
    'label' => 'Facility based/Sheltered work',
    'weight' => '12',
    'children' => array(
      0 => 'field_shl_partic',
      1 => 'field_shl_hrs',
      2 => 'field_shl_gross_wages',
      3 => 'field_shl_paid_tim_off',
      4 => 'field_shl_set_aside',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-shl field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Community based non work');
  t('Facility based non work');
  t('Facility based/Sheltered work');
  t('Group integrated job');
  t('Individual competitive job');
  t('Individual contracted job');
  t('Self employment');

  return $field_groups;
}
