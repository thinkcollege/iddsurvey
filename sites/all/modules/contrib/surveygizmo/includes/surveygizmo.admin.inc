<?php
/**
 * @file
 * Admin UI implementation.
 */

/**
 * Build an admin Settings form.
 */
function surveygizmo_admin_settings() {
  $form = array();

  $form['surveygizmo_user'] = array(
    '#type'          => 'textfield',
    '#title'         => t('SurveyGizmo Username'),
    '#description'   => t('The email address used to log in to surveygizmo.com'),
    '#default_value' => variable_get('surveygizmo_user', array()),
  );

  $form['surveygizmo_password'] = array(
    '#type'          => 'password',
    '#title'         => t('SurveyGizmo Password'),
    '#description'   => t('A password used to log in to surveygizmo.com. Visit !authentication for more information.', array('!authentication' => l(t('SurveyGizmo help'), 'http://apisurveygizmo.helpgizmo.com/help/article/link/authentication'))),
    '#default_value' => variable_get('surveygizmo_password', array()),
  );

  $form['surveygizmo_consumer_key'] = array(
    '#type'          => 'textfield',
    '#title'         => t('SurveyGizmo Consumer key'),
    '#default_value' => variable_get('surveygizmo_consumer_key', array()),
  );

  $form['surveygizmo_consumer_secret'] = array(
    '#type'          => 'textfield',
    '#title'         => t('SurveyGizmo Consumer secret'),
    '#default_value' => variable_get('surveygizmo_consumer_secret', array()),
  );

  $form['surveygizmo_oauth_callback'] = array(
    '#type'          => 'textfield',
    '#title'         => t('SurveyGizmo oAuth callback'),
    '#default_value' => variable_get('surveygizmo_oauth_callback', array()),
  );

  return system_settings_form($form);
}

/**
 * Form, that provides UI to get data from GurveyGizmo.
 */
function surveygizmo_refresh_form($form, &$form_state) {
  $form = array();
  // Ensure this include file is loaded when the form is rebuilt from the cache.
  $form_state['build_info']['files']['form'] = drupal_get_path('module', 'surveygizmo') . '/includes/surveygizmo.admin.inc';

  $form['refresh-markup'] = array(
    '#type'   => 'markup',
    '#markup' => t('Press this button to fetch data form SurveyGizmo!') . '<br/>',
  );

  $form['actions']['refresh'] = array(
    '#type'   => 'submit',
    '#value'  => t('Refresh surveys info'),
    '#submit' => array('surveygizmo_refresh_surveys_submit'),
  );

  return $form;
}

/**
 * Submit callback to refresh Surveys from SurveyGizmo.
 */
function surveygizmo_refresh_surveys_submit($form, &$form_state) {
  $count = surveygizmo_refresh_surveys();
  if ($count > 0) {
    drupal_set_message(t('Got <b>%count</b> surveys form GuveyGizmo. Local data updated.', array('%count' => $count)), 'status');
  }
  else {
    drupal_set_message(t('Nothing was updated!'), 'warning');
  }
}
