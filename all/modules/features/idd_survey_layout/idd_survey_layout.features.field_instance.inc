<?php

/**
 * @file
 * idd_survey_layout.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function idd_survey_layout_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contac_oth_staf_address_2'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contac_oth_staf_address_2'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contac_oth_staf_address_2',
    'label' => 'Address 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contac_oth_staf_e_mail'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contac_oth_staf_e_mail'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contac_oth_staf_e_mail',
    'label' => 'Staff e-mail address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contac_oth_staf_zip_code'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contac_oth_staf_zip_code'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contac_oth_staf_zip_code',
    'label' => 'Zip code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contac_oth_staff_phone'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contac_oth_staff_phone'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contac_oth_staff_phone',
    'label' => 'Staff telephone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contac_oth_staff_state'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contac_oth_staff_state'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contac_oth_staff_state',
    'label' => 'State',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contact_oth_staf_address_1'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contact_oth_staf_address_1'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contact_oth_staf_address_1',
    'label' => 'Address 1',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contact_oth_staff_city'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contact_oth_staff_city'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contact_oth_staff_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_contact_oth_staff_name'.
  $field_instances['field_collection_item-field_contact_other_staff-field_contact_oth_staff_name'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contact_oth_staff_name',
    'label' => 'Full name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_contact_other_staff-field_staff_title'.
  $field_instances['field_collection_item-field_contact_other_staff-field_staff_title'] = array(
    'bundle' => 'field_contact_other_staff',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_staff_title',
    'label' => 'Staff position title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_surv_coord_contact-field_contact_survey_coordinator'.
  $field_instances['field_collection_item-field_surv_coord_contact-field_contact_survey_coordinator'] = array(
    'bundle' => 'field_surv_coord_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_contact_survey_coordinator',
    'label' => 'Survey Coordinator',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'name-oneline' => 'name-oneline',
          'address-optional' => 'address-optional',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-administrative-area' => 0,
          'address-hide-locality' => 0,
          'organisation' => 0,
          'name-full' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_surv_coord_contact-field_surv_co_email'.
  $field_instances['field_collection_item-field_surv_coord_contact-field_surv_co_email'] = array(
    'bundle' => 'field_surv_coord_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_surv_co_email',
    'label' => 'Survey coordinator e-mail address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_surv_coord_contact-field_surv_co_position_title'.
  $field_instances['field_collection_item-field_surv_coord_contact-field_surv_co_position_title'] = array(
    'bundle' => 'field_surv_coord_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_surv_co_position_title',
    'label' => 'Survey coordinator position title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_surv_coord_contact-field_surv_co_telephone'.
  $field_instances['field_collection_item-field_surv_coord_contact-field_surv_co_telephone'] = array(
    'bundle' => 'field_surv_coord_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_surv_co_telephone',
    'label' => 'Survey coordinator telephone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field__integ_em_grp_em_num'.
  $field_instances['node-idd_survey-field__integ_em_grp_em_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field__integ_em_grp_em_num',
    'label' => 'The total number of individuals receiving group employment services is',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field__integ_em_sv_grp_y_n'.
  $field_instances['node-idd_survey-field__integ_em_sv_grp_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field__integ_em_sv_grp_y_n',
    'label' => 'Of the total number of individuals in FY 2016 who received integrated employment services (insert response to question II. 1a he',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field__integ_working_paid_commun'.
  $field_instances['node-idd_survey-field__integ_working_paid_commun'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field__integ_working_paid_commun',
    'label' => 'Is your state able to determine the total number of individuals served in integrated employment services (insert response to que',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_all_non_wk_comments'.
  $field_instances['node-idd_survey-field_all_non_wk_comments'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_wk_comments',
    'label' => 'Comments on the fiscal year totals for all non-work services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 190,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_all_non_wk_oth_selfpay_chk'.
  $field_instances['node-idd_survey-field_all_non_wk_oth_selfpay_chk'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_wk_oth_selfpay_chk',
    'label' => 'Other (self-pay, JTPA, grants, DD Council, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 182,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_all_non_wk_other_amt'.
  $field_instances['node-idd_survey-field_all_non_wk_other_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_wk_other_amt',
    'label' => 'Dollar amount of "Other" funds spent on all non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 183,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_all_non_wk_state_cty_amt'.
  $field_instances['node-idd_survey-field_all_non_wk_state_cty_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 62,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_wk_state_cty_amt',
    'label' => 'Dollar amount of State, county or local IDD funds spent on all non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 181,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_all_non_wk_titlexix_amt'.
  $field_instances['node-idd_survey-field_all_non_wk_titlexix_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_wk_titlexix_amt',
    'label' => 'Dollar amount of Title XIX Medicaid waivers spent on all non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 179,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_all_non_wk_titlexix_chk'.
  $field_instances['node-idd_survey-field_all_non_wk_titlexix_chk'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_wk_titlexix_chk',
    'label' => 'Title XIX Medicaid waivers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 178,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_all_non_wk_total_expend'.
  $field_instances['node-idd_survey-field_all_non_wk_total_expend'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_wk_total_expend',
    'label' => 'Total number of dollars spent on non-work services for individuals funded or monitored by your state IDD agency in FY 2020. Plea',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 188,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_all_non_work_total'.
  $field_instances['node-idd_survey-field_all_non_work_total'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_non_work_total',
    'label' => 'List the total count of individuals who received either community-based or facility-based facility-based non-work services funde',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 187,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_all_nonwork_separate_types'.
  $field_instances['node-idd_survey-field_all_nonwork_separate_types'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_all_nonwork_separate_types',
    'label' => 'Is your state able to separate individual’s participation in facility-based and community-based non-work services in your report',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 192,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_com_non_other_selfpy_check'.
  $field_instances['node-idd_survey-field_com_non_other_selfpy_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_non_other_selfpy_check',
    'label' => 'Other (self-pay, JTPA, grants, DD Council, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 145,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_com_non_state_cty_check'.
  $field_instances['node-idd_survey-field_com_non_state_cty_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_non_state_cty_check',
    'label' => 'State, county, or local IDD funds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 143,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_com_non_titlxix_check'.
  $field_instances['node-idd_survey-field_com_non_titlxix_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_non_titlxix_check',
    'label' => 'Title XIX Medicaid Waivers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_comments'.
  $field_instances['node-idd_survey-field_comm_comments'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_comments',
    'label' => 'Comments on the fiscal year totals for community-based non-work services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_does_state_offer'.
  $field_instances['node-idd_survey-field_comm_does_state_offer'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_does_state_offer',
    'label' => 'Does your state agency fund or monitor community-based non-work services?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 190,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_group_based_svc_num'.
  $field_instances['node-idd_survey-field_comm_group_based_svc_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_group_based_svc_num',
    'label' => 'Number of individuals who received group community based services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_grp_based_y_n'.
  $field_instances['node-idd_survey-field_comm_grp_based_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_grp_based_y_n',
    'label' => '1c. Of the total number of individuals in FY 2016 who received community-based non-work services (insert response to question II',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_ind_based_svc_y_n'.
  $field_instances['node-idd_survey-field_comm_ind_based_svc_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_ind_based_svc_y_n',
    'label' => 'Of the total number of individauls who received community-based non-work services how many in group community based services?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_ind_based_svcs_num'.
  $field_instances['node-idd_survey-field_comm_ind_based_svcs_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_ind_based_svcs_num',
    'label' => '1b. Of the total number of individuals in FY 2016 who received community-based non-work services ow many are in individual commu',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_other_amount'.
  $field_instances['node-idd_survey-field_comm_other_amount'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 14,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_other_amount',
    'label' => 'Dollar amount of "Other" funds spent on community-based non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 146,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_state_local_amount'.
  $field_instances['node-idd_survey-field_comm_state_local_amount'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_state_local_amount',
    'label' => 'Dollar amount of State, county or local IDD funds spent on community-based non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 144,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_total_expenditure'.
  $field_instances['node-idd_survey-field_comm_total_expenditure'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_total_expenditure',
    'label' => '2. Total number of dollars spent on community-based non-work services for individuals funded or monitored by your state IDD agen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_total_num_indiv'.
  $field_instances['node-idd_survey-field_comm_total_num_indiv'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_total_num_indiv',
    'label' => '1a. Total number of individuals receiving community-based non-work services in FY 2016',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_comm_xix_medicaid_amount'.
  $field_instances['node-idd_survey-field_comm_xix_medicaid_amount'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 13,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comm_xix_medicaid_amount',
    'label' => 'Dollar amount of Title XIX Medicaid waivers spent on community-based non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 142,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_comments_on_the_fy_2016_to'.
  $field_instances['node-idd_survey-field_comments_on_the_fy_2016_to'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 66,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comments_on_the_fy_2016_to',
    'label' => 'Comments on the fiscal year totals for facility-based non-work services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_comments_totals_day_and_em'.
  $field_instances['node-idd_survey-field_comments_totals_day_and_em'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comments_totals_day_and_em',
    'label' => 'Comments on the totals for all employment and day services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_contact_other_staff'.
  $field_instances['node-idd_survey-field_contact_other_staff'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact_other_staff',
    'label' => 'Other staff who contributed to this report',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 167,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_dayemp_other_selfpay_check'.
  $field_instances['node-idd_survey-field_dayemp_other_selfpay_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dayemp_other_selfpay_check',
    'label' => 'Other (self-pay, JTPA, grants, DD Council, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_dayemp_state_cty_check'.
  $field_instances['node-idd_survey-field_dayemp_state_cty_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dayemp_state_cty_check',
    'label' => 'State, county, or local IDD funds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 125,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_dayemp_titleix_check'.
  $field_instances['node-idd_survey-field_dayemp_titleix_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dayemp_titleix_check',
    'label' => 'Title XIX Medicaid Waivers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_dayemp_wait_list_y_n'.
  $field_instances['node-idd_survey-field_dayemp_wait_list_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dayemp_wait_list_y_n',
    'label' => ' 5.  Does your state agency maintain a waiting list for employment and day services?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_desc_response_ques_1'.
  $field_instances['node-idd_survey-field_desc_response_ques_1'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_desc_response_ques_1',
    'label' => '1a. Which of the following best describes your answer to question 1',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_bas_num_indvs'.
  $field_instances['node-idd_survey-field_fac_bas_num_indvs'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 18,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_bas_num_indvs',
    'label' => '1a. Total number of individuals receiving facility-based non-work services in FY 2016.',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_bas_y_n'.
  $field_instances['node-idd_survey-field_fac_bas_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_bas_y_n',
    'label' => 'Does your state agency fund or monitor facility-based non-work services?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 191,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_comments'.
  $field_instances['node-idd_survey-field_fac_comments'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 51,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 112,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_comments',
    'label' => 'Comments on the fiscal year totals for facility-based work services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_dep_mh_num'.
  $field_instances['node-idd_survey-field_fac_dep_mh_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 47,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 108,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_dep_mh_num',
    'label' => 'Number of individuals served by the Department of Mental Health',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_dep_voc_rehab_check'.
  $field_instances['node-idd_survey-field_fac_dep_voc_rehab_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 36,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 97,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_dep_voc_rehab_check',
    'label' => 'Department of Vocational Rehabilitation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_dept_mh_y_n'.
  $field_instances['node-idd_survey-field_fac_dept_mh_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 103,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_dept_mh_y_n',
    'label' => 'Can you provide a number of individuals served by the Department of Mental Health',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_dmh_check'.
  $field_instances['node-idd_survey-field_fac_dmh_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 43,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 104,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_dmh_check',
    'label' => 'Department of Mental Health',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_doe_check'.
  $field_instances['node-idd_survey-field_fac_doe_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 101,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_doe_check',
    'label' => 'Department of Education/local school system',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_non_w_other_amt'.
  $field_instances['node-idd_survey-field_fac_non_w_other_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 29,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 86,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_non_w_other_amt',
    'label' => 'Dollar amount of "Other" funds spent on facility-based non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 152,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_non_w_stat_local_amt'.
  $field_instances['node-idd_survey-field_fac_non_w_stat_local_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 27,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 79,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_non_w_stat_local_amt',
    'label' => 'Dollar amount of State, county or local IDD funds spent on facility-based non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 150,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_non_w_titl_xix_amt'.
  $field_instances['node-idd_survey-field_fac_non_w_titl_xix_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 74,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_non_w_titl_xix_amt',
    'label' => 'Dollar amount of Title XIX Medicaid waivers spent on facility-based non-work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 148,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_non_wk_tot_expend'.
  $field_instances['node-idd_survey-field_fac_non_wk_tot_expend'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 19,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_non_wk_tot_expend',
    'label' => '2. Total number of dollars spent on facility-based non-work services for individuals funded or monitored by your state IDD agenc',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_nw_other_selfpy_check'.
  $field_instances['node-idd_survey-field_fac_nw_other_selfpy_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 81,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_nw_other_selfpy_check',
    'label' => 'Other (self-pay, JTPA, grants, DD Council, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 151,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_nw_stat_cnty_check'.
  $field_instances['node-idd_survey-field_fac_nw_stat_cnty_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 75,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_nw_stat_cnty_check',
    'label' => 'State, county, or local IDD funds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 149,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_nw_titlexix_check'.
  $field_instances['node-idd_survey-field_fac_nw_titlexix_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 69,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_nw_titlexix_check',
    'label' => 'Title XIX Medicaid waivers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 147,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_dep_mh_num'.
  $field_instances['node-idd_survey-field_fac_oth_dep_mh_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 31,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 89,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_dep_mh_num',
    'label' => 'Number of individuals served by the Department of Mental Health',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 105,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_ed_num'.
  $field_instances['node-idd_survey-field_fac_oth_ed_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 41,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 102,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_ed_num',
    'label' => 'Number of individuals served by the Department of Educ./local school system',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_ed_y_n'.
  $field_instances['node-idd_survey-field_fac_oth_ed_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 100,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_ed_y_n',
    'label' => 'Can you provide a number of individuals served by the Department of Education/local school system?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_oth_name'.
  $field_instances['node-idd_survey-field_fac_oth_oth_name'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 106,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_oth_name',
    'label' => 'What "Other" entity funded/monitoried long term facility-based employment services?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_oth_num'.
  $field_instances['node-idd_survey-field_fac_oth_oth_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 48,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 109,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_oth_num',
    'label' => 'Number of individuals served by "Other"',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 122,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_oth_y_n'.
  $field_instances['node-idd_survey-field_fac_oth_oth_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 46,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 107,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_oth_y_n',
    'label' => 'Can you provide a number of individuals served by the "Other" entity?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_voc_reh_num'.
  $field_instances['node-idd_survey-field_fac_oth_voc_reh_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 38,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_voc_reh_num',
    'label' => 'Number of individuals served by the Department of Vocational Rehab',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_oth_voc_reh_y_n'.
  $field_instances['node-idd_survey-field_fac_oth_voc_reh_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 37,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 98,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_oth_voc_reh_y_n',
    'label' => 'Can you provide a number of individuals served by the Department of Vocational Rehab?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_other_amt'.
  $field_instances['node-idd_survey-field_fac_other_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_bigint',
        'weight' => 55,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_bigint',
        'weight' => 117,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_other_amt',
    'label' => 'Dollar amount of "Other" funds spent on facility-based work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_other_check'.
  $field_instances['node-idd_survey-field_fac_other_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 44,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 105,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_other_check',
    'label' => 'Other (please specify) ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_other_entity_y_n'.
  $field_instances['node-idd_survey-field_fac_other_entity_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 94,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_other_entity_y_n',
    'label' => 'Are there individuals not included in III 1a who receive services from other entity?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_other_selfpay_check'.
  $field_instances['node-idd_survey-field_fac_other_selfpay_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 116,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_other_selfpay_check',
    'label' => 'Other (self-pay, JTPA, grants, DD Council, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_state_cty_amt'.
  $field_instances['node-idd_survey-field_fac_state_cty_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 53,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 115,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_state_cty_amt',
    'label' => 'Dollar amount of State, county or local IDD funds spent on facility-based work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_state_cty_check'.
  $field_instances['node-idd_survey-field_fac_state_cty_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 114,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_state_cty_check',
    'label' => 'State, county, or local IDD funds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_titl_xix_waiv_amt'.
  $field_instances['node-idd_survey-field_fac_titl_xix_waiv_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 51,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 113,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_titl_xix_waiv_amt',
    'label' => 'Dollar amount of Title XIX Medicaid waivers spent on facility -based work services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_titlexix_check'.
  $field_instances['node-idd_survey-field_fac_titlexix_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 50,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 111,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_titlexix_check',
    'label' => 'Title XIX Medicaid Waivers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_total_expendit'.
  $field_instances['node-idd_survey-field_fac_total_expendit'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_bigint',
        'weight' => 49,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_bigint',
        'weight' => 110,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_total_expendit',
    'label' => '3. Total number of dollars spent on facility-based work services for individuals funded or monitored by your state IDD agency in',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_total_num_of_ind'.
  $field_instances['node-idd_survey-field_fac_total_num_of_ind'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 33,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 92,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_total_num_of_ind',
    'label' => '1a. Total number of individuals receiving facility-based work services in FY 2016',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_fac_y_n'.
  $field_instances['node-idd_survey-field_fac_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 90,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_y_n',
    'label' => '1. Does your state agency fund or monitor facility-based work services?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_idd_reporting_period'.
  $field_instances['node-idd_survey-field_idd_reporting_period'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idd_reporting_period',
    'label' => 'Reporting Period',
    'options_limit' => 0,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'og_group_state_ref' => 0,
    ),
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_idd_state_name'.
  $field_instances['node-idd_survey-field_idd_state_name'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idd_state_name',
    'label' => 'State name',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_if_a_specific_point_in_tim'.
  $field_instances['node-idd_survey-field_if_a_specific_point_in_tim'] = array(
    'bundle' => 'idd_survey',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_if_a_specific_point_in_tim',
    'label' => 'If a specific point in time, please specify the point in time (mm/dd/yyyy)',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
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
        'year_range' => '-2:+0',
      ),
      'type' => 'date_popup',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_comments'.
  $field_instances['node-idd_survey-field_integ_comments'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 87,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_comments',
    'label' => 'Comments on the fiscal year totals for integrated employment services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_dmh_check'.
  $field_instances['node-idd_survey-field_integ_dmh_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 84,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_dmh_check',
    'label' => 'Department of Mental Health',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 103,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_doe_check'.
  $field_instances['node-idd_survey-field_integ_doe_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 77,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_doe_check',
    'label' => 'Department of Education/local school system',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_em_individ_em_num'.
  $field_instances['node-idd_survey-field_integ_em_individ_em_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_em_individ_em_num',
    'label' => '1c. The total number of individuals recieving <u>individual</u> integrated employment services is',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_em_sv_indv_y_n'.
  $field_instances['node-idd_survey-field_integ_em_sv_indv_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_em_sv_indv_y_n',
    'label' => 'Of the total number of individuals in FY 2016 who received integrated employment services (insert response to question II. 1a he',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_emp_svc_num_ind'.
  $field_instances['node-idd_survey-field_integ_emp_svc_num_ind'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_emp_svc_num_ind',
    'label' => '1a. Total number of individuals receiving integrated employment services in FY 2016',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_emp_svc_y_n'.
  $field_instances['node-idd_survey-field_integ_emp_svc_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_emp_svc_y_n',
    'label' => '1. Does your state agency fund or monitor integrated employment services?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_ed_num'.
  $field_instances['node-idd_survey-field_integ_oth_ed_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 28,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 82,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_ed_num',
    'label' => 'Number of individuals served by the Department of Educ./local school system ',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_ed_y_n'.
  $field_instances['node-idd_survey-field_integ_oth_ed_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 78,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_ed_y_n',
    'label' => 'Can you provide a number of individuals served by the Department of Education/local school system?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_mh_y_n'.
  $field_instances['node-idd_survey-field_integ_oth_mh_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 88,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_mh_y_n',
    'label' => 'Can you provide a number of individuals served by the Department of Mental Health',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 104,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_oth_name'.
  $field_instances['node-idd_survey-field_integ_oth_oth_name'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 93,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_oth_name',
    'label' => 'What "Other" entity funded/monitored long term integrated employment services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 107,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_oth_num'.
  $field_instances['node-idd_survey-field_integ_oth_oth_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 35,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 96,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_oth_num',
    'label' => 'Number of individuals served by "Other"',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_oth_num_y_n'.
  $field_instances['node-idd_survey-field_integ_oth_oth_num_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 95,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_oth_num_y_n',
    'label' => 'Can you provide a number of individuals served by the "Other" entity?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 108,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_slf_pay_amt'.
  $field_instances['node-idd_survey-field_integ_oth_slf_pay_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 29,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 85,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_slf_pay_amt',
    'label' => 'Dollar amount of "Other" funds spent on integrated employment',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 134,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_vo_re_num'.
  $field_instances['node-idd_survey-field_integ_oth_vo_re_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 73,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_vo_re_num',
    'label' => 'Number of individuals served by the Department of Vocational Rehab',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 99,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_oth_voc_re_num'.
  $field_instances['node-idd_survey-field_integ_oth_voc_re_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 71,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_oth_voc_re_num',
    'label' => 'Can you provide a number of individuals served by the Department of Vocational Rehab?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 98,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_other_agencies'.
  $field_instances['node-idd_survey-field_integ_other_agencies'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_other_agencies',
    'label' => 'Are there individuals with IDD who are not included in your response to Section II question 1a, that receive long term integrate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_other_check'.
  $field_instances['node-idd_survey-field_integ_other_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 91,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_other_check',
    'label' => 'Other (please specify)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 106,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_other_selfpay_check'.
  $field_instances['node-idd_survey-field_integ_other_selfpay_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 83,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_other_selfpay_check',
    'label' => 'Other (self-pay, JTPA, grants, DD Council, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 133,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_paid_commun_num'.
  $field_instances['node-idd_survey-field_integ_paid_commun_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_paid_commun_num',
    'label' => 'The total number of individuals served in integrated employment services working in a paid integrated job in the community is',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_short_term_emp_svc'.
  $field_instances['node-idd_survey-field_integ_short_term_emp_svc'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_short_term_emp_svc',
    'label' => 'Does your state have a short term employment services',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_st_cty_idd_amt'.
  $field_instances['node-idd_survey-field_integ_st_cty_idd_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 27,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 80,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_st_cty_idd_amt',
    'label' => 'Dollar amount of State, county or local IDD funds spent on integrated employment',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_state_cty_check'.
  $field_instances['node-idd_survey-field_integ_state_cty_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 76,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_state_cty_check',
    'label' => 'State, county, or local IDD funds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_titilexix_check'.
  $field_instances['node-idd_survey-field_integ_titilexix_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 70,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_titilexix_check',
    'label' => 'Title XIX Medicaid waivers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_total_expenditure'.
  $field_instances['node-idd_survey-field_integ_total_expenditure'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 22,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 67,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_total_expenditure',
    'label' => 'Please enter the total number of dollars spent on integrated employment services for individuals funded or monitored by your sta',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_voc_rehab_check'.
  $field_instances['node-idd_survey-field_integ_voc_rehab_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 68,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_voc_rehab_check',
    'label' => 'Department of Vocational Rehabilitiation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 97,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_working_grp_num'.
  $field_instances['node-idd_survey-field_integ_working_grp_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_working_grp_num',
    'label' => 'Total number in group supported jobs',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_working_grp_y_n'.
  $field_instances['node-idd_survey-field_integ_working_grp_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_working_grp_y_n',
    'label' => ' Of the total number of individuals in FY 2016 working in paid integrated jobs in the community (insert response to section II. ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_working_ind_num'.
  $field_instances['node-idd_survey-field_integ_working_ind_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 13,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_working_ind_num',
    'label' => 'Total in paid integrated jobs in the community (insert response to section II. 2a here) how many individuals were in individua',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_working_ind_y_n'.
  $field_instances['node-idd_survey-field_integ_working_ind_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_working_ind_y_n',
    'label' => 'Of the total number of individuals in FY 2016 working in paid integrated jobs in the community (insert response to section II. 2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_working_self_num'.
  $field_instances['node-idd_survey-field_integ_working_self_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 17,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_working_self_num',
    'label' => 'Number of paid integrated jobs with self employment',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_working_self_y_n'.
  $field_instances['node-idd_survey-field_integ_working_self_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 62,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_working_self_y_n',
    'label' => 'How many in paid integrated jobs self employed, do you have a number?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_integ_xix_waiv_amt'.
  $field_instances['node-idd_survey-field_integ_xix_waiv_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 72,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integ_xix_waiv_amt',
    'label' => 'Dollar amount of Title XIX Medicaid waivers spent on integrated employment',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_non_wk_state_cty_chk'.
  $field_instances['node-idd_survey-field_non_wk_state_cty_chk'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_non_wk_state_cty_chk',
    'label' => 'State, county, or local IDD funds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 180,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_of_the_total_number_of_ind'.
  $field_instances['node-idd_survey-field_of_the_total_number_of_ind'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 5,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_of_the_total_number_of_ind',
    'label' => 'Of the total number of individuals served in employment and day services what is the total number who',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_comments'.
  $field_instances['node-idd_survey-field_oth_comments'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_comments',
    'label' => 'Comments  on the fiscal year totals for other employment and day services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_emp_day_num_indv'.
  $field_instances['node-idd_survey-field_oth_emp_day_num_indv'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 7,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_emp_day_num_indv',
    'label' => '1a. Total number of individuals served in other employment and day services in FY 2016',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_emp_day_oth_amt'.
  $field_instances['node-idd_survey-field_oth_emp_day_oth_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 16,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_emp_day_oth_amt',
    'label' => 'Dollar amount of "Other" funds spent on other employment and day services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 158,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_emp_day_providers'.
  $field_instances['node-idd_survey-field_oth_emp_day_providers'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_emp_day_providers',
    'label' => '2. If individuals are served in other employment and day services please identify the services',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_emp_day_stat_cty_amt'.
  $field_instances['node-idd_survey-field_oth_emp_day_stat_cty_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 14,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_emp_day_stat_cty_amt',
    'label' => 'Dollar amount of State, county or local IDD funds spent on other employment and day services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 156,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_emp_day_total_funds'.
  $field_instances['node-idd_survey-field_oth_emp_day_total_funds'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_emp_day_total_funds',
    'label' => '3. Total number of dollars spent on other employment and day services for individuals funded or monitored by your state IDD agen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_emp_day_xix_amt'.
  $field_instances['node-idd_survey-field_oth_emp_day_xix_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 12,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_emp_day_xix_amt',
    'label' => 'Dollar amount of Title XIX Medicaid waivers spent on other employment and day services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 154,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_emp_day_y_n'.
  $field_instances['node-idd_survey-field_oth_emp_day_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_emp_day_y_n',
    'label' => '1.  Does your state agency fund or monitor other employment and day services?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_oth_empday_othselfpy_check'.
  $field_instances['node-idd_survey-field_oth_empday_othselfpy_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_empday_othselfpy_check',
    'label' => 'Other (self-pay, JTPA, grants, DD Council, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_empday_stat_cty_check'.
  $field_instances['node-idd_survey-field_oth_empday_stat_cty_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_empday_stat_cty_check',
    'label' => 'State, county, or local IDD funds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 155,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_oth_empday_titlxix_check'.
  $field_instances['node-idd_survey-field_oth_empday_titlxix_check'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oth_empday_titlxix_check',
    'label' => 'Title XIX Medicaid Waivers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 153,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_other_self_pay_amt'.
  $field_instances['node-idd_survey-field_other_self_pay_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 16,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_self_pay_amt',
    'label' => 'Dollar amount of "Other" funds  spent on employment and day services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 128,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_please_enter_the_total_num'.
  $field_instances['node-idd_survey-field_please_enter_the_total_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_please_enter_the_total_num',
    'label' => 'Please enter the total number of dollars spent on employment and day services for individuals funded or monitored by your state ',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_save_and_return'.
  $field_instances['node-idd_survey-field_save_and_return'] = array(
    'bundle' => 'idd_survey',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 118,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_save_and_return',
    'label' => 'Check this box and hit the "Save" button to notify our project manager that your report is complete.',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_specify_reporting_dates'.
  $field_instances['node-idd_survey-field_specify_reporting_dates'] = array(
    'bundle' => 'idd_survey',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_specify_reporting_dates',
    'label' => 'Please specify the start date and end date of the fiscal year you are reporting on',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
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
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 167,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_state_county_or_loc_amt'.
  $field_instances['node-idd_survey-field_state_county_or_loc_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 14,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_state_county_or_loc_amt',
    'label' => 'Dollar amount of State, county or local IDD funds spent on employment and day services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_surv_coord_contact'.
  $field_instances['node-idd_survey-field_surv_coord_contact'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_surv_coord_contact',
    'label' => 'Survey Coordinator',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 168,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_survey_type'.
  $field_instances['node-idd_survey-field_survey_type'] = array(
    'bundle' => 'idd_survey',
    'default_value' => array(
      0 => array(
        'target_id' => 29,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 120,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_survey_type',
    'label' => 'Survey type',
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
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_title_xix_mdc_waiv_amt'.
  $field_instances['node-idd_survey-field_title_xix_mdc_waiv_amt'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 12,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_title_xix_mdc_waiv_amt',
    'label' => 'Dollar amount of Title XIX Medicaid waivers spent on employment and day services',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_total_integ_y_n'.
  $field_instances['node-idd_survey-field_total_integ_y_n'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_total_integ_y_n',
    'label' => ' Of the total number of individuals served in employment and day services (insert total entered in 1 here) is your state able to',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_total_served'.
  $field_instances['node-idd_survey-field_total_served'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_total_served',
    'label' => '1. Total unduplicated number of individuals served in employment and day services in your state',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-idd_survey-field_waitlist_num'.
  $field_instances['node-idd_survey-field_waitlist_num'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 20,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'bigint',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_bigint',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_waitlist_num',
    'label' => '5a. Total number of individuals waiting for employment and day services in FY2016',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'size' => 60,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'bigint',
      'settings' => array(),
      'type' => 'number_bigint',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_what_were_the_other_source'.
  $field_instances['node-idd_survey-field_what_were_the_other_source'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_what_were_the_other_source',
    'label' => 'What were the "other sources?" ',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_which_of_the_checked_categ'.
  $field_instances['node-idd_survey-field_which_of_the_checked_categ'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_which_of_the_checked_categ',
    'label' => '3a. Which of the checked categories above was your primary source of information?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-idd_survey-field_which_of_the_following_sou'.
  $field_instances['node-idd_survey-field_which_of_the_following_sou'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_which_of_the_following_sou',
    'label' => 'Which of the following sources did your state agency use to report the total unduplicated number of individuals served in employ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-idd_survey-og_group_state_ref'.
  $field_instances['node-idd_survey-og_group_state_ref'] = array(
    'bundle' => 'idd_survey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 119,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_state_ref',
    'label' => 'State',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' 5.  Does your state agency maintain a waiting list for employment and day services?');
  t(' Of the total number of individuals in FY 2016 working in paid integrated jobs in the community (insert response to section II. ');
  t(' Of the total number of individuals served in employment and day services (insert total entered in 1 here) is your state able to');
  t('1.  Does your state agency fund or monitor other employment and day services?');
  t('1. Does your state agency fund or monitor facility-based work services?');
  t('1. Does your state agency fund or monitor integrated employment services?');
  t('1. Total unduplicated number of individuals served in employment and day services in your state');
  t('1a. Total number of individuals receiving community-based non-work services in FY 2016');
  t('1a. Total number of individuals receiving facility-based non-work services in FY 2016.');
  t('1a. Total number of individuals receiving facility-based work services in FY 2016');
  t('1a. Total number of individuals receiving integrated employment services in FY 2016');
  t('1a. Total number of individuals served in other employment and day services in FY 2016');
  t('1a. Which of the following best describes your answer to question 1');
  t('1b. Of the total number of individuals in FY 2016 who received community-based non-work services ow many are in individual commu');
  t('1c. Of the total number of individuals in FY 2016 who received community-based non-work services (insert response to question II');
  t('1c. The total number of individuals recieving <u>individual</u> integrated employment services is');
  t('2. If individuals are served in other employment and day services please identify the services');
  t('2. Total number of dollars spent on community-based non-work services for individuals funded or monitored by your state IDD agen');
  t('2. Total number of dollars spent on facility-based non-work services for individuals funded or monitored by your state IDD agenc');
  t('3. Total number of dollars spent on facility-based work services for individuals funded or monitored by your state IDD agency in');
  t('3. Total number of dollars spent on other employment and day services for individuals funded or monitored by your state IDD agen');
  t('3a. Which of the checked categories above was your primary source of information?');
  t('5a. Total number of individuals waiting for employment and day services in FY2016');
  t('Address 1');
  t('Address 2');
  t('Are there individuals not included in III 1a who receive services from other entity?');
  t('Are there individuals with IDD who are not included in your response to Section II question 1a, that receive long term integrate');
  t('Can you provide a number of individuals served by the "Other" entity?');
  t('Can you provide a number of individuals served by the Department of Education/local school system?');
  t('Can you provide a number of individuals served by the Department of Mental Health');
  t('Can you provide a number of individuals served by the Department of Vocational Rehab?');
  t('Check this box and hit the "Save" button to notify our project manager that your report is complete.');
  t('City');
  t('Comments  on the fiscal year totals for other employment and day services');
  t('Comments on the fiscal year totals for all non-work services');
  t('Comments on the fiscal year totals for community-based non-work services');
  t('Comments on the fiscal year totals for facility-based non-work services');
  t('Comments on the fiscal year totals for facility-based work services');
  t('Comments on the fiscal year totals for integrated employment services');
  t('Comments on the totals for all employment and day services');
  t('Department of Education/local school system');
  t('Department of Mental Health');
  t('Department of Vocational Rehabilitation');
  t('Department of Vocational Rehabilitiation');
  t('Does your state agency fund or monitor community-based non-work services?');
  t('Does your state agency fund or monitor facility-based non-work services?');
  t('Does your state have a short term employment services');
  t('Dollar amount of "Other" funds  spent on employment and day services');
  t('Dollar amount of "Other" funds spent on all non-work services');
  t('Dollar amount of "Other" funds spent on community-based non-work services');
  t('Dollar amount of "Other" funds spent on facility-based non-work services');
  t('Dollar amount of "Other" funds spent on facility-based work services');
  t('Dollar amount of "Other" funds spent on integrated employment');
  t('Dollar amount of "Other" funds spent on other employment and day services');
  t('Dollar amount of State, county or local IDD funds spent on all non-work services');
  t('Dollar amount of State, county or local IDD funds spent on community-based non-work services');
  t('Dollar amount of State, county or local IDD funds spent on employment and day services');
  t('Dollar amount of State, county or local IDD funds spent on facility-based non-work services');
  t('Dollar amount of State, county or local IDD funds spent on facility-based work services');
  t('Dollar amount of State, county or local IDD funds spent on integrated employment');
  t('Dollar amount of State, county or local IDD funds spent on other employment and day services');
  t('Dollar amount of Title XIX Medicaid waivers spent on all non-work services');
  t('Dollar amount of Title XIX Medicaid waivers spent on community-based non-work services');
  t('Dollar amount of Title XIX Medicaid waivers spent on employment and day services');
  t('Dollar amount of Title XIX Medicaid waivers spent on facility -based work services');
  t('Dollar amount of Title XIX Medicaid waivers spent on facility-based non-work services');
  t('Dollar amount of Title XIX Medicaid waivers spent on integrated employment');
  t('Dollar amount of Title XIX Medicaid waivers spent on other employment and day services');
  t('Full name');
  t('How many in paid integrated jobs self employed, do you have a number?');
  t('If a specific point in time, please specify the point in time (mm/dd/yyyy)');
  t('Is your state able to determine the total number of individuals served in integrated employment services (insert response to que');
  t('Is your state able to separate individual’s participation in facility-based and community-based non-work services in your report');
  t('List the total count of individuals who received either community-based or facility-based facility-based non-work services funde');
  t('Number of individuals served by "Other"');
  t('Number of individuals served by the Department of Educ./local school system');
  t('Number of individuals served by the Department of Educ./local school system ');
  t('Number of individuals served by the Department of Mental Health');
  t('Number of individuals served by the Department of Vocational Rehab');
  t('Number of individuals who received group community based services');
  t('Number of paid integrated jobs with self employment');
  t('Of the total number of individauls who received community-based non-work services how many in group community based services?');
  t('Of the total number of individuals in FY 2016 who received integrated employment services (insert response to question II. 1a he');
  t('Of the total number of individuals in FY 2016 working in paid integrated jobs in the community (insert response to section II. 2');
  t('Of the total number of individuals served in employment and day services what is the total number who');
  t('Other (please specify)');
  t('Other (please specify) ');
  t('Other (self-pay, JTPA, grants, DD Council, etc.)');
  t('Other staff who contributed to this report');
  t('Please enter the total number of dollars spent on employment and day services for individuals funded or monitored by your state ');
  t('Please enter the total number of dollars spent on integrated employment services for individuals funded or monitored by your sta');
  t('Please specify the start date and end date of the fiscal year you are reporting on');
  t('Reporting Period');
  t('Staff e-mail address');
  t('Staff position title');
  t('Staff telephone');
  t('State');
  t('State name');
  t('State, county, or local IDD funds');
  t('Survey Coordinator');
  t('Survey coordinator e-mail address');
  t('Survey coordinator position title');
  t('Survey coordinator telephone');
  t('Survey type');
  t('The total number of individuals receiving group employment services is');
  t('The total number of individuals served in integrated employment services working in a paid integrated job in the community is');
  t('Title XIX Medicaid Waivers');
  t('Title XIX Medicaid waivers');
  t('Total in paid integrated jobs in the community (insert response to section II. 2a here) how many individuals were in individua');
  t('Total number in group supported jobs');
  t('Total number of dollars spent on non-work services for individuals funded or monitored by your state IDD agency in FY 2020. Plea');
  t('What "Other" entity funded/monitored long term integrated employment services');
  t('What "Other" entity funded/monitoried long term facility-based employment services?');
  t('What were the "other sources?" ');
  t('Which of the following sources did your state agency use to report the total unduplicated number of individuals served in employ');
  t('Zip code');

  return $field_instances;
}
