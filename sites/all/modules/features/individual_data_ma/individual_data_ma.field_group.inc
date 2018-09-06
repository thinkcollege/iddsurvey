<?php
/**
 * @file
 * individual_data_ma.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function individual_data_ma_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_day_program|node|individual_data_ma|form';
  $field_group->group_name = 'group_day_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Additional day program services',
    'weight' => '9',
    'children' => array(
      0 => 'field_day_program_specify',
      1 => 'field_day_program_community',
      2 => 'field_day_program_habitation',
      3 => 'field_day_program_other',
      4 => 'field_day_program_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Additional day program services',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-day-program field-group-tab',
        'description' => 'What other day support services is this person participating in when the person is not engaged in employment or a job search? This might be supported by your organization or another provider.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_day_program|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grp_integ|node|individual_data_ma|form';
  $field_group->group_name = 'group_grp_integ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Group supported employment',
    'weight' => '5',
    'children' => array(
      0 => 'field_grp_integ_gross_wages',
      1 => 'field_grp_integ_hrs',
      2 => 'field_grp_integ_partic',
      3 => 'field_grp_sup_min_wage',
      4 => 'field_grp_sup_grp_10_of_12',
      5 => 'field_grp_sup_less',
      6 => 'field_grp_sup_less_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Group supported employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-grp-integ field-group-tab',
        'description' => 'A small group of individuals, (typically 2 to 8) work in the community under the supervision of a provider agency. Most often, the individuals are considered employees of the provider agency and are paid and receive benefits from that agency. Group Supported Employment may include small groups in industry (enclave); provider businesses/small business model; mobile work crews that allow for integration, and temporary services which may assist in securing an individual position within a business.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grp_integ|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_individual_data_categories|node|individual_data_ma|form';
  $field_group->group_name = 'group_individual_data_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'group_indv_comp',
      1 => 'group_grp_integ',
      2 => 'group_self_emp',
      3 => 'group_shl',
      4 => 'group_job_search',
      5 => 'group_day_program',
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
  $field_groups['group_individual_data_categories|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_comp|node|individual_data_ma|form';
  $field_group->group_name = 'group_indv_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Individual employment',
    'weight' => '4',
    'children' => array(
      0 => 'field_indv_comp_gross_wages',
      1 => 'field_indv_comp_hrs',
      2 => 'field_indv_comp_paid_tim_off',
      3 => 'field_indv_comp_partic',
      4 => 'field_indv_emp_min_wage',
      5 => 'field_indv_emp_paid_health',
      6 => 'field_indv_emp_new_job',
      7 => 'field_indv_emp_10_of_12',
      8 => 'field_indv_emp_less',
      9 => 'field_indv_emp_less_other',
      10 => 'field_indv_emp_hire_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Individual employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indv-comp field-group-tab',
        'description' => 'An individual has a full or part-time job for which they earn wages, based on their identified needs and interests, located in a community business; or is self-employed/owns his/her own business.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_indv_comp|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_search|node|individual_data_ma|form';
  $field_group->group_name = 'group_job_search';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Job search activities',
    'weight' => '8',
    'children' => array(
      0 => 'field_job_search_volunteer',
      1 => 'field_job_search_discovery',
      2 => 'field_job_search_development',
      3 => 'field_job_search_hours_unpaid',
      4 => 'field_job_search_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Job search activities',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-job-search field-group-tab',
        'description' => 'Is this individual actively engaged in job search or job pathway activities supported by an employment service?',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_job_search|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_emp|node|individual_data_ma|form';
  $field_group->group_name = 'group_self_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Self employment',
    'weight' => '7',
    'children' => array(
      0 => 'field_self_emp_gross_expens',
      1 => 'field_self_emp_gross_income',
      2 => 'field_self_emp_hrs',
      3 => 'field_self_emp_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Self employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-self-emp field-group-tab',
        'description' => 'Includes self-employment or microenterprises owned by the individual. Does not include a business that is owned by the support organization. <strong>Note that business income and expenses are reported over a 3 month period to capture fluctuations in business income.</strong>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_self_emp|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shl|node|individual_data_ma|form';
  $field_group->group_name = 'group_shl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Sheltered employment',
    'weight' => '6',
    'children' => array(
      0 => 'field_shl_gross_wages',
      1 => 'field_shl_hrs',
      2 => 'field_shl_partic',
      3 => 'field_shl_min_wage',
      4 => 'field_shl_less',
      5 => 'field_shl_less_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sheltered employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shl field-group-tab',
        'description' => 'These supports take place in settings such as sheltered workshops in which there is little or no contact with other workers without disabilities. Individuals are paid a wage in exchange for their production-related activities. They are considered employees of the provider agency.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shl|node|individual_data_ma|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional day program services');
  t('Categories');
  t('Group supported employment');
  t('Individual employment');
  t('Job search activities');
  t('Self employment');
  t('Sheltered employment');

  return $field_groups;
}
