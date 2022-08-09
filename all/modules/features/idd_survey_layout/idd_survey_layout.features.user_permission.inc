<?php

/**
 * @file
 * idd_survey_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function idd_survey_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_idd_reporting_period'.
  $permissions['create field_idd_reporting_period'] = array(
    'name' => 'create field_idd_reporting_period',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_idd_state_name'.
  $permissions['create field_idd_state_name'] = array(
    'name' => 'create field_idd_state_name',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_survey_type'.
  $permissions['create field_survey_type'] = array(
    'name' => 'create field_survey_type',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_idd_reporting_period'.
  $permissions['edit field_idd_reporting_period'] = array(
    'name' => 'edit field_idd_reporting_period',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_idd_state_name'.
  $permissions['edit field_idd_state_name'] = array(
    'name' => 'edit field_idd_state_name',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_survey_type'.
  $permissions['edit field_survey_type'] = array(
    'name' => 'edit field_survey_type',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_idd_reporting_period'.
  $permissions['edit own field_idd_reporting_period'] = array(
    'name' => 'edit own field_idd_reporting_period',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_idd_state_name'.
  $permissions['edit own field_idd_state_name'] = array(
    'name' => 'edit own field_idd_state_name',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_survey_type'.
  $permissions['edit own field_survey_type'] = array(
    'name' => 'edit own field_survey_type',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_idd_reporting_period'.
  $permissions['view field_idd_reporting_period'] = array(
    'name' => 'view field_idd_reporting_period',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'IDD states' => 'IDD states',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_idd_state_name'.
  $permissions['view field_idd_state_name'] = array(
    'name' => 'view field_idd_state_name',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_survey_type'.
  $permissions['view field_survey_type'] = array(
    'name' => 'view field_survey_type',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_idd_reporting_period'.
  $permissions['view own field_idd_reporting_period'] = array(
    'name' => 'view own field_idd_reporting_period',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'IDD states' => 'IDD states',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_idd_state_name'.
  $permissions['view own field_idd_state_name'] = array(
    'name' => 'view own field_idd_state_name',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_survey_type'.
  $permissions['view own field_survey_type'] = array(
    'name' => 'view own field_survey_type',
    'roles' => array(
      'IDD Survey administrator' => 'IDD Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
