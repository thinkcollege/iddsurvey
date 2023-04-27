<?php

/**
 * @file
 * idd_survey_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function idd_survey_layout_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_all_non_wk_fund_amt|node|idd_survey|form';
  $field_group->group_name = 'group_all_non_wk_fund_amt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_all_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_all_non_wk_oth_selfpay_chk',
      1 => 'field_all_non_wk_other_amt',
      2 => 'field_all_non_wk_state_cty_amt',
      3 => 'field_all_non_wk_titlexix_amt',
      4 => 'field_all_non_wk_titlexix_chk',
      5 => 'field_non_wk_state_cty_chk',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-all-non-wk-fund-amt field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '2a. Which of the following sources did your state agency use to fund all non-work services in the fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '2a. Which of the following sources did your state agency use to fund all non-work services in the fiscal year?',
    'weight' => '189',
  );
  $field_groups['group_all_non_wk_fund_amt|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_all_non_work|node|idd_survey|form';
  $field_group->group_name = 'group_all_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_comm_bsd_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_all_non_wk_comments',
      1 => 'field_all_non_wk_total_expend',
      2 => 'group_all_non_wk_fund_amt',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-all-non-work field-group-div showHideAllNW nwToggle newNW',
        'description' => '<p>List the total count of individuals who received either community-based or facility-based facility-based non-work services funded or monitored by your agency during the fiscal year. </p><p>
Counts should include non-work services for which referral, program monitoring, or case management are provided by your state IDD agency and/or state Medicaid authority. </p>',
        'effect' => 'none',
        'id' => 'showHideAllNW',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'IV-All All non-work services',
    ),
    'format_type' => 'div',
    'label' => 'IV-All All non-work services',
    'weight' => '189',
  );
  $field_groups['group_all_non_work|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_based_non_work|node|idd_survey|form';
  $field_group->group_name = 'group_com_based_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_comm_bsd_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_comm_total_expenditure',
      1 => 'field_comm_comments',
      2 => 'group_comm_fund_amt',
      3 => 'group_iv1_subques',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-com-based-non-work field-group-div showHideComNW nwToggle newNW',
        'description' => '<p>List the total count of individuals who received community-based non-work services funded or monitored by your agency during the fiscal year. </p><p>
Counts should include community-based non-work services for which referral, program monitoring, or case management are provided by your state IDD agency and/or state Medicaid authority. Counts should not include services that are provided in the community as part of a facility-based non-work program. <p>',
        'effect' => 'none',
        'id' => 'showhidecomnw',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'IV-CB Community based non work',
    ),
    'format_type' => 'div',
    'label' => 'IV-CB Community based non work',
    'weight' => '187',
  );
  $field_groups['group_com_based_non_work|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_nw_2a_srcs|node|idd_survey|default';
  $field_group->group_name = 'group_com_nw_2a_srcs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_iv_comm_nw';
  $field_group->data = array(
    'children' => array(
      0 => 'field_comm_xix_medicaid_amount',
      1 => 'field_comm_state_local_amount',
      2 => 'field_com_non_titlxix_check',
      3 => 'field_com_non_state_cty_check',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-com-nw-2a-srcs field-group-div h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '2a. Which of the following sources did your state agency use to fund community-based non-work services in the fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '2a. Which of the following sources did your state agency use to fund community-based non-work services in the fiscal year?',
    'weight' => '12',
  );
  $field_groups['group_com_nw_2a_srcs|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comm_bsd_non_work|node|idd_survey|form';
  $field_group->group_name = 'group_comm_bsd_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'group_fac_based_non_work',
      1 => 'group_all_non_work',
      2 => 'group_com_based_non_work',
      3 => 'group_nonwork_checks',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '<h2>IV. Non-Work Services</h2><p><strong>Nonwork services include all day services that support an individual to participate in activities in a community or in a program setting where they do not receive pay.</strong></p>
<p><strong>Community-based non-work services</strong> are services that are explicitly focused on supporting people to participate in individually chosen and scheduled activities and at locations in the community that members of the general community participate in and access. Activities may include:  volunteer work; postsecondary, adult, or continuing education; accessing community facilities such as the library, gym, or recreation center; any activities that people with and without disabilities do in their spare time. May include activities that support career exploration, wrap around work time, or serve as a retirement option. This service is sometimes referred to as Community Life Engagement, Community-Based Day or Community-Based Non-Work. </p><p>
<strong>Facility-based non-work services</strong> are services that are located in a program setting where the majority of participants have a disability. These activities include but are not limited to: psychosocial skills development, activities of daily living, recreation, and/or professional therapies (e.g., occupational, physical, and speech therapies). Individuals may participate in community outings and activities, but the majority of an individual\'s time is spent in the program setting, and continuous supports and supervision are provided to all participants with disabilities. This service category is also referred to as Day Activity, Day Habilitation, and Medical Day Care programs. </p>',
        'required_fields' => 1,
      ),
      'label' => 'IV. Non-work services',
    ),
    'format_type' => 'tab',
    'label' => 'IV. Non-work services',
    'weight' => '6',
  );
  $field_groups['group_comm_bsd_non_work|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comm_fund_amt|node|idd_survey|form';
  $field_group->group_name = 'group_comm_fund_amt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_based_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_comm_xix_medicaid_amount',
      1 => 'field_comm_state_local_amount',
      2 => 'field_comm_other_amount',
      3 => 'field_com_non_titlxix_check',
      4 => 'field_com_non_state_cty_check',
      5 => 'field_com_non_other_selfpy_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-comm-fund-amt field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '2a.  Which of the following sources did your state agency use to fund community-based non-work services in the fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '2a.  Which of the following sources did your state agency use to fund community-based non-work services in the fiscal year?',
    'weight' => '18',
  );
  $field_groups['group_comm_fund_amt|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|idd_survey|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'field_surv_coord_contact',
      1 => 'field_specify_reporting_dates',
      2 => 'group_other_staff',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '<h2>General Contact Information</h2>
<p>This survey was sent to you because you are the Director of your state Intellectual and Developmental Disabilities (IDD) agency, or because you were listed as a contact for our previous survey. Our current data collection is for <span class="currentYear"></span></p><p>
Please supply the following information on how to contact the staff member who coordinated your state’s response to the survey and any additional staff who provided information for the survey.</p>',
        'required_fields' => 1,
      ),
      'label' => 'Contact Information',
    ),
    'format_type' => 'tab',
    'label' => 'Contact Information',
    'weight' => '2',
  );
  $field_groups['group_contact_info|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dayemp_4a|node|idd_survey|default';
  $field_group->group_name = 'group_dayemp_4a';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_i_empday';
  $field_group->data = array(
    'children' => array(
      0 => 'field_which_of_the_checked_categ',
      1 => 'field_title_xix_mdc_waiv_amt',
      2 => 'field_state_county_or_loc_amt',
      3 => 'field_other_self_pay_amt',
      4 => 'field_dayemp_titleix_check',
      5 => 'field_dayemp_state_cty_check',
      6 => 'field_dayemp_other_selfpay_check',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '4a. Which of the following sources did your state agency use to fund employment and day services in this fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '4a. Which of the following sources did your state agency use to fund employment and day services in this fiscal year?',
    'weight' => '10',
  );
  $field_groups['group_dayemp_4a|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emp_day_svc_amount|node|idd_survey|form';
  $field_group->group_name = 'group_emp_day_svc_amount';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number_served';
  $field_group->data = array(
    'children' => array(
      0 => 'field_title_xix_mdc_waiv_amt',
      1 => 'field_state_county_or_loc_amt',
      2 => 'field_other_self_pay_amt',
      3 => 'field_dayemp_titleix_check',
      4 => 'field_dayemp_state_cty_check',
      5 => 'field_dayemp_other_selfpay_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-emp-day-svc-amount field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '4a. Which of the following sources did your state agency use to fund employment and day services in this fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '4a. Which of the following sources did your state agency use to fund employment and day services in this fiscal year?',
    'weight' => '18',
  );
  $field_groups['group_emp_day_svc_amount|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_amt|node|idd_survey|form';
  $field_group->group_name = 'group_fac_amt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_facility_based';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_titl_xix_waiv_amt',
      1 => 'field_fac_state_cty_amt',
      2 => 'field_fac_other_amt',
      3 => 'field_fac_titlexix_check',
      4 => 'field_fac_state_cty_check',
      5 => 'field_fac_other_selfpay_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-fac-amt field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '3a. Which of the following sources did your state agency use to fund facility-based work services in the fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '3a. Which of the following sources did your state agency use to fund facility-based work services in the fiscal year?',
    'weight' => '60',
  );
  $field_groups['group_fac_amt|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_based_non_work|node|idd_survey|form';
  $field_group->group_name = 'group_fac_based_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_comm_bsd_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_bas_num_indvs',
      1 => 'field_fac_non_wk_tot_expend',
      2 => 'field_comments_on_the_fy_2016_to',
      3 => 'group_fac_non_w_fund_amt',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-fac-based-non-work field-group-div showHideFacNW nwToggle newNW',
        'description' => '<p>List the total count of individuals who received facility-based non-work services funded or monitored by your agency during the fiscal year. </p><p>
Counts should include facility-based non-work services for which referral, program monitoring, or case management are provided by your state IDD agency and/or state Medicaid authority. </p>',
        'effect' => 'none',
        'id' => 'showhidefacnw',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'IV-FB Facility based non work',
    ),
    'format_type' => 'div',
    'label' => 'IV-FB Facility based non work',
    'weight' => '188',
  );
  $field_groups['group_fac_based_non_work|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_based|node|idd_survey|form';
  $field_group->group_name = 'group_fac_based';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_bas_y_n',
      1 => 'field_fac_bas_num_indvs',
      2 => 'field_fac_non_wk_tot_expend',
      3 => 'field_comments_on_the_fy_2016_to',
      4 => 'group_fac_non_w_fund_amt',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '<h2>V. Facility-based non-work services</h2><p><strong>List the total count of individuals who received facility-based non-work services funded or monitored by your agency during the fiscal year.</strong></p><p>Facility-based non-work services include all services that are located in a setting where the majority of participants have a disability. These activities include but are not limited to: psychosocial skills development, activities of daily living, recreation, and/or professional therapies (e.g., occupational, physical, and speech therapies). Individuals may participate in community outings and activities, but the majority of an individual\'s time is spent in the program setting, and continuous supports and supervision are provided to all participants with disabilities. This service category is also referred to as Day Activity, Day Habilitation, and Medical Day Care programs. </p><p>
Counts should include facility-based non-work services for which referral, program monitoring, or case management are provided by your state IDD agency and/or state Medicaid authority. </p>',
        'required_fields' => 1,
      ),
      'label' => 'V. Facility-based non-work services',
    ),
    'format_type' => 'tab',
    'label' => 'V. Facility-based non-work services',
    'weight' => '8',
  );
  $field_groups['group_fac_based|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_non_w_fund_amt|node|idd_survey|form';
  $field_group->group_name = 'group_fac_non_w_fund_amt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fac_based_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_non_w_titl_xix_amt',
      1 => 'field_fac_non_w_stat_local_amt',
      2 => 'field_fac_non_w_other_amt',
      3 => 'field_fac_nw_titlexix_check',
      4 => 'field_fac_nw_stat_cnty_check',
      5 => 'field_fac_nw_other_selfpy_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => ' field-group-div group_fac_non_w_fund_amt checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '2a. Which of the following sources did your state agency use to fund facility-based non-work services in the fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '2a. Which of the following sources did your state agency use to fund facility-based non-work services in the fiscal year?',
    'weight' => '19',
  );
  $field_groups['group_fac_non_w_fund_amt|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_nw_2a_srcs|node|idd_survey|default';
  $field_group->group_name = 'group_fac_nw_2a_srcs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_v_fac_bas_nw';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_non_w_titl_xix_amt',
      1 => 'field_fac_non_w_stat_local_amt',
      2 => 'field_fac_non_w_other_amt',
      3 => 'field_fac_nw_titlexix_check',
      4 => 'field_fac_nw_stat_cnty_check',
      5 => 'field_fac_nw_other_selfpy_check',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-fac-nw-2a-srcs field-group-div h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '2a. Which of the following sources did your state agency use to fund facility-based non-work services in the fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '2a. Which of the following sources did your state agency use to fund facility-based non-work services in the fiscal year?',
    'weight' => '20',
  );
  $field_groups['group_fac_nw_2a_srcs|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_other_entities|node|idd_survey|form';
  $field_group->group_name = 'group_fac_other_entities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_facility_based';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_oth_voc_reh_y_n',
      1 => 'field_fac_oth_voc_reh_num',
      2 => 'field_fac_oth_ed_y_n',
      3 => 'field_fac_oth_ed_num',
      4 => 'field_fac_dept_mh_y_n',
      5 => 'field_fac_dep_mh_num',
      6 => 'field_fac_oth_oth_name',
      7 => 'field_fac_oth_oth_y_n',
      8 => 'field_fac_oth_oth_num',
      9 => 'field_fac_dep_voc_rehab_check',
      10 => 'field_fac_doe_check',
      11 => 'field_fac_dmh_check',
      12 => 'field_fac_other_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-fac-other-entities field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '2a. Which entities funded/monitored long term facility-based work services. Check all that apply.',
    ),
    'format_type' => 'div',
    'label' => '2a. Which entities funded/monitored long term facility-based work services. Check all that apply.',
    'weight' => '58',
  );
  $field_groups['group_fac_other_entities|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_wk_3a_fund_srcs|node|idd_survey|default';
  $field_group->group_name = 'group_fac_wk_3a_fund_srcs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_iii_fac_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_titl_xix_waiv_amt',
      1 => 'field_fac_state_cty_amt',
      2 => 'field_fac_other_amt',
      3 => 'field_fac_titlexix_check',
      4 => 'field_fac_state_cty_check',
      5 => 'field_fac_other_selfpay_check',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-fac-wk-3a-fund-srcs field-group-div h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '3a. Which of the following sources did your state agency use to fund facility-based work services in the fiscal year?',
    ),
    'format_type' => 'div',
    'label' => '3a. Which of the following sources did your state agency use to fund facility-based work services in the fiscal year?',
    'weight' => '50',
  );
  $field_groups['group_fac_wk_3a_fund_srcs|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_facility_based|node|idd_survey|form';
  $field_group->group_name = 'group_facility_based';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_y_n',
      1 => 'field_fac_total_num_of_ind',
      2 => 'field_fac_other_entity_y_n',
      3 => 'field_fac_total_expendit',
      4 => 'field_fac_comments',
      5 => 'group_fac_amt',
      6 => 'group_fac_other_entities',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '<h2>III. Facility-based work services</h2>
<p><strong>List the total count of individuals who received facility-based work services funded or monitored by your agency during the fiscal year.</strong></p><p>Facility-based work services include all employment services which occur in a setting where the majority of employees have a disability, and occur in setting where continuous job-related supports and supervision are provided to all workers with disabilities. This service category is typically referred to as a Sheltered Workshop, Work Activity Center, or Extended Employment program and includes facility based pre-vocational services.</p><p>
Counts should include facility-based work services for which referral, program monitoring, or case management are provided by your state IDD agency and/or state Medicaid authority. Please do not include services provided by your state vocational rehabilitation agency or education agency. </p>',
        'required_fields' => 1,
      ),
      'label' => 'III. Facility-based work services',
    ),
    'format_type' => 'tab',
    'label' => 'III. Facility-based work services',
    'weight' => '5',
  );
  $field_groups['group_facility_based|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_final_step|node|idd_survey|form';
  $field_group->group_name = 'group_final_step';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'field_save_and_return',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'VI. Final Step ',
    ),
    'format_type' => 'tab',
    'label' => 'VI. Final Step ',
    'weight' => '10',
  );
  $field_groups['group_final_step|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gen_contact_info|node|idd_survey|default';
  $field_group->group_name = 'group_gen_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_contact_other_staff',
      1 => 'field_surv_coord_contact',
      2 => 'field_specify_reporting_dates',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-gen-contact-info field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'General Contact Information',
    'weight' => '1',
  );
  $field_groups['group_gen_contact_info|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_i_empday|node|idd_survey|default';
  $field_group->group_name = 'group_i_empday';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_total_served',
      1 => 'field_desc_response_ques_1',
      2 => 'field_if_a_specific_point_in_tim',
      3 => 'field_of_the_total_number_of_ind',
      4 => 'field_total_integ_y_n',
      5 => 'field_which_of_the_following_sou',
      6 => 'field_what_were_the_other_source',
      7 => 'field_please_enter_the_total_num',
      8 => 'field_comments_totals_day_and_em',
      9 => 'group_dayemp_4a',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-i-empday field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'I. Fiscal year (FY) totals for all employment and day services',
    'weight' => '3',
  );
  $field_groups['group_i_empday|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_idd_survey_sections|node|idd_survey|form';
  $field_group->group_name = 'group_idd_survey_sections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_comm_bsd_non_work',
      1 => 'group_contact_info',
      2 => 'group_facility_based',
      3 => 'group_final_step',
      4 => 'group_integ_employ_svces',
      5 => 'group_number_served',
      6 => 'group_oth_emp_day_svcs',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
    'format_type' => 'tabs',
    'label' => 'Survey Sections',
    'weight' => '5',
  );
  $field_groups['group_idd_survey_sections|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ii1_subques|node|idd_survey|form';
  $field_group->group_name = 'group_ii1_subques';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_integ_employ_svces';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_emp_svc_num_ind',
      1 => 'field_integ_em_sv_indv_y_n',
      2 => 'field_integ_em_individ_em_num',
      3 => 'field__integ_em_sv_grp_y_n',
      4 => 'field__integ_em_grp_em_num',
      5 => 'field_integ_short_term_emp_svc',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-ii1-subques field-group-div subQuestion',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'II1 Subquestion',
    ),
    'format_type' => 'div',
    'label' => 'II1 Subquestion',
    'weight' => '22',
  );
  $field_groups['group_ii1_subques|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ii_int|node|idd_survey|default';
  $field_group->group_name = 'group_ii_int';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_emp_svc_y_n',
      1 => 'field_integ_emp_svc_num_ind',
      2 => 'field_integ_em_sv_indv_y_n',
      3 => 'field_integ_em_individ_em_num',
      4 => 'field__integ_em_sv_grp_y_n',
      5 => 'field__integ_em_grp_em_num',
      6 => 'field_integ_short_term_emp_svc',
      7 => 'field__integ_working_paid_commun',
      8 => 'field_integ_paid_commun_num',
      9 => 'field_integ_working_ind_y_n',
      10 => 'field_integ_working_ind_num',
      11 => 'field_integ_working_grp_y_n',
      12 => 'field_integ_working_grp_num',
      13 => 'field_integ_working_self_y_n',
      14 => 'field_integ_working_self_num',
      15 => 'field_integ_other_agencies',
      16 => 'field_integ_total_expenditure',
      17 => 'field_integ_comments',
      18 => 'field_waitlist_num',
      19 => 'field_dayemp_wait_list_y_n',
      20 => 'group_integ_3a_oth_provs',
      21 => 'group_integ_4a_fund_srcs',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-ii-int field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'II Integrated employment services',
    'weight' => '4',
  );
  $field_groups['group_ii_int|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_iii_fac_work|node|idd_survey|default';
  $field_group->group_name = 'group_iii_fac_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_y_n',
      1 => 'field_fac_total_num_of_ind',
      2 => 'field_fac_other_entity_y_n',
      3 => 'field_fac_oth_voc_reh_y_n',
      4 => 'field_fac_oth_voc_reh_num',
      5 => 'field_fac_oth_ed_y_n',
      6 => 'field_fac_oth_ed_num',
      7 => 'field_fac_dept_mh_y_n',
      8 => 'field_fac_dep_mh_num',
      9 => 'field_fac_oth_oth_name',
      10 => 'field_fac_oth_oth_y_n',
      11 => 'field_fac_oth_oth_num',
      12 => 'field_fac_total_expendit',
      13 => 'field_fac_comments',
      14 => 'field_fac_dep_voc_rehab_check',
      15 => 'field_fac_doe_check',
      16 => 'field_fac_dmh_check',
      17 => 'field_fac_other_check',
      18 => 'group_fac_wk_2a',
      19 => 'group_fac_wk_3a_fund_srcs',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-iii-fac-work field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'III. Facility-based work services',
    'weight' => '5',
  );
  $field_groups['group_iii_fac_work|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_integ_3a_oth_provs|node|idd_survey|default';
  $field_group->group_name = 'group_integ_3a_oth_provs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ii_int';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_oth_voc_re_num',
      1 => 'field_integ_oth_vo_re_num',
      2 => 'field_integ_oth_ed_y_n',
      3 => 'field_integ_oth_ed_num',
      4 => 'field_integ_oth_mh_y_n',
      5 => 'field_integ_oth_oth_name',
      6 => 'field_integ_oth_oth_num_y_n',
      7 => 'field_integ_oth_oth_num',
      8 => 'field_fac_oth_dep_mh_num',
      9 => 'field_integ_voc_rehab_check',
      10 => 'field_integ_dmh_check',
      11 => 'field_integ_doe_check',
      12 => 'field_integ_other_check',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-integ-3a-oth-provs field-group-div h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '3a. Which entities funded/monitored long term integrated employment services. Check all that apply.',
    ),
    'format_type' => 'div',
    'label' => '3a. Which entities funded/monitored long term integrated employment services. Check all that apply.',
    'weight' => '21',
  );
  $field_groups['group_integ_3a_oth_provs|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_integ_4a_fund_srcs|node|idd_survey|default';
  $field_group->group_name = 'group_integ_4a_fund_srcs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ii_int';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_xix_waiv_amt',
      1 => 'field_integ_st_cty_idd_amt',
      2 => 'field_integ_oth_slf_pay_amt',
      3 => 'field_integ_titilexix_check',
      4 => 'field_integ_state_cty_check',
      5 => 'field_integ_other_selfpay_check',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-integ-4a-fund-srcs field-group-div h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '4a. Which of the following did your state agency use to fund integrated employment services? Check all that apply',
    ),
    'format_type' => 'div',
    'label' => '4a. Which of the following did your state agency use to fund integrated employment services? Check all that apply',
    'weight' => '23',
  );
  $field_groups['group_integ_4a_fund_srcs|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_integ_employ_svces|node|idd_survey|form';
  $field_group->group_name = 'group_integ_employ_svces';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_emp_svc_y_n',
      1 => 'field__integ_working_paid_commun',
      2 => 'field_integ_other_agencies',
      3 => 'field_integ_total_expenditure',
      4 => 'field_integ_comments',
      5 => 'group_ii1_subques',
      6 => 'group_integ_fund_amt',
      7 => 'group_integ_other_agc_subgroup',
      8 => 'group_subques_ii2',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '<h2>II. Integrated employment services</h2>
<p><strong>List the total count of individuals who received integrated employment services funded or monitored by your agency during the fiscal year.</strong></p><p>Integrated employment services include both (a) job development services (including  discovery and career planning as part of a job development process) that are intended to directly result in paid integrated employment  and (b) services to maintain paid integrated employment ( including job training, job coaching (both individual and group), ongoing supports, and services for self-employment).</p><p> 
Counts should include integrated employment services for which referral, program monitoring, or case management are provided by your state IDD agency and/or state Medicaid authority. Please do not include services provided by your state vocational rehabilitation agency or education agency. </p>',
        'required_fields' => 1,
      ),
      'label' => 'II. Integrated employment services',
    ),
    'format_type' => 'tab',
    'label' => 'II. Integrated employment services',
    'weight' => '4',
  );
  $field_groups['group_integ_employ_svces|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_integ_fund_amt|node|idd_survey|form';
  $field_group->group_name = 'group_integ_fund_amt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_integ_employ_svces';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_xix_waiv_amt',
      1 => 'field_integ_st_cty_idd_amt',
      2 => 'field_integ_oth_slf_pay_amt',
      3 => 'field_integ_titilexix_check',
      4 => 'field_integ_state_cty_check',
      5 => 'field_integ_other_selfpay_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-integ-fund-amt field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '4a. Which of the following did your state agency use to fund integrated employment services? Check all that apply',
    ),
    'format_type' => 'div',
    'label' => '4a. Which of the following did your state agency use to fund integrated employment services? Check all that apply',
    'weight' => '35',
  );
  $field_groups['group_integ_fund_amt|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_integ_other_agc_subgroup|node|idd_survey|form';
  $field_group->group_name = 'group_integ_other_agc_subgroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_integ_employ_svces';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_oth_voc_re_num',
      1 => 'field_integ_oth_vo_re_num',
      2 => 'field_integ_oth_ed_y_n',
      3 => 'field_integ_oth_ed_num',
      4 => 'field_integ_oth_mh_y_n',
      5 => 'field_integ_oth_oth_name',
      6 => 'field_integ_oth_oth_num_y_n',
      7 => 'field_integ_oth_oth_num',
      8 => 'field_fac_oth_dep_mh_num',
      9 => 'field_integ_voc_rehab_check',
      10 => 'field_integ_dmh_check',
      11 => 'field_integ_doe_check',
      12 => 'field_integ_other_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-integ-other-agc-subgroup field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '3a. Which entities funded/monitored long term integrated employment services. Check all that apply.',
    ),
    'format_type' => 'div',
    'label' => '3a. Which entities funded/monitored long term integrated employment services. Check all that apply.',
    'weight' => '33',
  );
  $field_groups['group_integ_other_agc_subgroup|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_iv1_subques|node|idd_survey|form';
  $field_group->group_name = 'group_iv1_subques';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_based_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_comm_total_num_indiv',
      1 => 'field_comm_ind_based_svcs_num',
      2 => 'field_comm_ind_based_svc_y_n',
      3 => 'field_comm_grp_based_y_n',
      4 => 'field_comm_group_based_svc_num',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-iv1-subques field-group-div subQuestion',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'IV1 Subquestions',
    ),
    'format_type' => 'div',
    'label' => 'IV1 Subquestions',
    'weight' => '16',
  );
  $field_groups['group_iv1_subques|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_iv_comm_nw|node|idd_survey|default';
  $field_group->group_name = 'group_iv_comm_nw';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_comm_does_state_offer',
      1 => 'field_comm_total_num_indiv',
      2 => 'field_comm_ind_based_svcs_num',
      3 => 'field_comm_ind_based_svc_y_n',
      4 => 'field_comm_grp_based_y_n',
      5 => 'field_comm_group_based_svc_num',
      6 => 'field_comm_total_expenditure',
      7 => 'field_comm_comments',
      8 => 'field_comm_other_amount',
      9 => 'field_com_non_other_selfpy_check',
      10 => 'group_v_fac_bas_nw',
      11 => 'group_com_nw_2a_srcs',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-iv-comm-nw field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'IV. Community-based non-work services',
    'weight' => '6',
  );
  $field_groups['group_iv_comm_nw|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nonwork_checks|node|idd_survey|form';
  $field_group->group_name = 'group_nonwork_checks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_comm_bsd_non_work';
  $field_group->data = array(
    'children' => array(
      0 => 'field_comm_does_state_offer',
      1 => 'field_fac_bas_y_n',
      2 => 'field_all_non_work_total',
      3 => 'field_all_nonwork_separate_types',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-nonwork-checks field-group-div nonchecks',
        'description' => '',
        'effect' => 'none',
        'id' => 'nonChecks',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Nonwork checks',
    ),
    'format_type' => 'div',
    'label' => 'Nonwork checks',
    'weight' => '186',
  );
  $field_groups['group_nonwork_checks|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_served|node|idd_survey|form';
  $field_group->group_name = 'group_number_served';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'field_total_served',
      1 => 'field_of_the_total_number_of_ind',
      2 => 'field_total_integ_y_n',
      3 => 'field_which_of_the_following_sou',
      4 => 'field_what_were_the_other_source',
      5 => 'field_please_enter_the_total_num',
      6 => 'field_which_of_the_checked_categ',
      7 => 'field_comments_totals_day_and_em',
      8 => 'field_waitlist_num',
      9 => 'field_dayemp_wait_list_y_n',
      10 => 'group_emp_day_svc_amount',
      11 => 'group_sub_i1',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '<h2>I. Fiscal year (FY) totals for all day and employment services</h2><p><strong>This survey collects information on individuals who participated in a day or employment service funded or monitored by your agency during the fiscal year.</strong></p>
   <ul><li>Counts should include any Medicaid funded, state funded, or other funded service for which referral, program monitoring, or case management are provided by your agency.</li><li>Day and employment services include all day and employment services except those conducted on the grounds of residential facilities with 16 or more residents.</li></ul>

<p>For Question 1 list the <u>unduplicated total count of individuals</u> who participated in day and employment services funded or monitored by your agency during the fiscal year. An unduplicated total count means that individuals served in day and employment services are only counted once even if they receive more than one service. </p>',
        'required_fields' => 1,
      ),
      'label' => 'I. Fiscal year (FY) totals for all employment and day services',
    ),
    'format_type' => 'tab',
    'label' => 'I. Fiscal year (FY) totals for all employment and day services',
    'weight' => '3',
  );
  $field_groups['group_number_served|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oth_3a_srcs|node|idd_survey|default';
  $field_group->group_name = 'group_oth_3a_srcs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vi_oth_empday';
  $field_group->data = array(
    'children' => array(
      0 => 'field_oth_emp_day_xix_amt',
      1 => 'field_oth_emp_day_stat_cty_amt',
      2 => 'field_oth_emp_day_oth_amt',
      3 => 'field_oth_empday_titlxix_check',
      4 => 'field_oth_empday_stat_cty_check',
      5 => 'field_oth_empday_othselfpy_check',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-oth-3a-srcs field-group-div h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '3a. Which of the following sources did your state agency use to fund other employment and day services in the FY?',
    ),
    'format_type' => 'div',
    'label' => '3a. Which of the following sources did your state agency use to fund other employment and day services in the FY?',
    'weight' => '10',
  );
  $field_groups['group_oth_3a_srcs|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oth_emp_day_fund_amt|node|idd_survey|form';
  $field_group->group_name = 'group_oth_emp_day_fund_amt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_oth_emp_day_svcs';
  $field_group->data = array(
    'children' => array(
      0 => 'field_oth_emp_day_xix_amt',
      1 => 'field_oth_emp_day_stat_cty_amt',
      2 => 'field_oth_emp_day_oth_amt',
      3 => 'field_oth_empday_titlxix_check',
      4 => 'field_oth_empday_stat_cty_check',
      5 => 'field_oth_empday_othselfpy_check',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-oth-emp-day-fund-amt field-group-div checkGroup jumbotron h3Smaller',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => '3a. Which of the following sources did your state agency use to fund other employment and day services in the FY?',
    ),
    'format_type' => 'div',
    'label' => '3a. Which of the following sources did your state agency use to fund other employment and day services in the FY?',
    'weight' => '19',
  );
  $field_groups['group_oth_emp_day_fund_amt|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oth_emp_day_svcs|node|idd_survey|form';
  $field_group->group_name = 'group_oth_emp_day_svcs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_idd_survey_sections';
  $field_group->data = array(
    'children' => array(
      0 => 'field_oth_emp_day_y_n',
      1 => 'field_oth_emp_day_num_indv',
      2 => 'field_oth_emp_day_providers',
      3 => 'field_oth_emp_day_total_funds',
      4 => 'field_oth_comments',
      5 => 'group_oth_emp_day_fund_amt',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '<h2>V. Other employment and day services</h2><p><strong>List the total count of individuals who received employment and day services that do not match the descriptions for the previous five service categories.</strong></p><p>For example your state may choose to report data in the other category if you cannot separate non-work services into community and facility based settings. Counts should include integrated employment services for which referral, monitoring, or case management are provided by your state IDD agency and/or state Medicaid authority. </p>',
        'required_fields' => 1,
      ),
      'label' => 'V. Other employment and day services',
    ),
    'format_type' => 'tab',
    'label' => 'V. Other employment and day services',
    'weight' => '9',
  );
  $field_groups['group_oth_emp_day_svcs|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_staff|node|idd_survey|form';
  $field_group->group_name = 'group_other_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info';
  $field_group->data = array(
    'children' => array(
      0 => 'field_contact_other_staff',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-other-staff field-group-div',
        'description' => 'Select the "Add a staff member" button to add contact information for other staff who contributed financial, service and other information to this report.  You may add as many staff as you need to.',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'Other staff who contributed to this report',
    ),
    'format_type' => 'div',
    'label' => 'Other staff who contributed to this report',
    'weight' => '169',
  );
  $field_groups['group_other_staff|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_i1|node|idd_survey|form';
  $field_group->group_name = 'group_sub_i1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_number_served';
  $field_group->data = array(
    'children' => array(
      0 => 'field_desc_response_ques_1',
      1 => 'field_if_a_specific_point_in_tim',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-sub-i1 field-group-div subQuestion',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Subquestions I1',
    ),
    'format_type' => 'div',
    'label' => 'Subquestions I1',
    'weight' => '9',
  );
  $field_groups['group_sub_i1|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subques_ii2|node|idd_survey|form';
  $field_group->group_name = 'group_subques_ii2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_integ_employ_svces';
  $field_group->data = array(
    'children' => array(
      0 => 'field_integ_paid_commun_num',
      1 => 'field_integ_working_ind_y_n',
      2 => 'field_integ_working_ind_num',
      3 => 'field_integ_working_grp_y_n',
      4 => 'field_integ_working_grp_num',
      5 => 'field_integ_working_self_y_n',
      6 => 'field_integ_working_self_num',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-subques-ii2 field-group-div subQuestion',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Subquestion II2',
    ),
    'format_type' => 'div',
    'label' => 'Subquestion II2',
    'weight' => '24',
  );
  $field_groups['group_subques_ii2|node|idd_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_v_fac_bas_nw|node|idd_survey|default';
  $field_group->group_name = 'group_v_fac_bas_nw';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_iv_comm_nw';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_bas_y_n',
      1 => 'field_fac_bas_num_indvs',
      2 => 'field_fac_non_wk_tot_expend',
      3 => 'field_comments_on_the_fy_2016_to',
      4 => 'group_fac_nw_2a_srcs',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-v-fac-bas-nw field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'V. Facility-based non-work services',
    'weight' => '16',
  );
  $field_groups['group_v_fac_bas_nw|node|idd_survey|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vi_oth_empday|node|idd_survey|default';
  $field_group->group_name = 'group_vi_oth_empday';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'idd_survey';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_oth_emp_day_y_n',
      1 => 'field_oth_emp_day_num_indv',
      2 => 'field_oth_emp_day_providers',
      3 => 'field_oth_emp_day_total_funds',
      4 => 'field_oth_comments',
      5 => 'group_oth_3a_srcs',
    ),
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => 'group-vi-oth-empday field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'VI. Other employment and day services',
    'weight' => '7',
  );
  $field_groups['group_vi_oth_empday|node|idd_survey|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('2a.  Which of the following sources did your state agency use to fund community-based non-work services in the fiscal year?');
  t('2a. Which entities funded/monitored long term facility-based work services. Check all that apply.');
  t('2a. Which of the following sources did your state agency use to fund all non-work services in the fiscal year?');
  t('2a. Which of the following sources did your state agency use to fund community-based non-work services in the fiscal year?');
  t('2a. Which of the following sources did your state agency use to fund facility-based non-work services in the fiscal year?');
  t('3a. Which entities funded/monitored long term integrated employment services. Check all that apply.');
  t('3a. Which of the following sources did your state agency use to fund facility-based work services in the fiscal year?');
  t('3a. Which of the following sources did your state agency use to fund other employment and day services in the FY?');
  t('4a. Which of the following did your state agency use to fund integrated employment services? Check all that apply');
  t('4a. Which of the following sources did your state agency use to fund employment and day services in this fiscal year?');
  t('Contact Information');
  t('General Contact Information');
  t('I. Fiscal year (FY) totals for all employment and day services');
  t('II Integrated employment services');
  t('II. Integrated employment services');
  t('II1 Subquestion');
  t('III. Facility-based work services');
  t('IV-All All non-work services');
  t('IV-CB Community based non work');
  t('IV-FB Facility based non work');
  t('IV. Community-based non-work services');
  t('IV. Non-work services');
  t('IV1 Subquestions');
  t('Nonwork checks');
  t('Other staff who contributed to this report');
  t('Subquestion II2');
  t('Subquestions I1');
  t('Survey Sections');
  t('V. Facility-based non-work services');
  t('V. Other employment and day services');
  t('VI. Final Step ');
  t('VI. Other employment and day services');

  return $field_groups;
}
