<?php

/**
 * @file
 * Views definitions for 'sdata_rp'
 */

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function sdata_rp_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'sdata_rp'),
    ),
    'handlers' => array(
      // The name of my handler
      'sdata_rp_handler_submit_completed_field' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

/**
 * Implements hook_views_data().
 */
function sdata_rp_views_data() {
  $data = array();
  // Add Example group
  $data['sdata_rp']['table']['group'] = t('SData');
  $data['sdata_rp']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Add custom field
  $data['sdata_rp']['submit_completed'] = array(
    'title' => t('Submit completed data'),
    'help' => t('Provides a custom field for sdata to display a "Submit completed data" link if possible.'),
    'field' => array(
      'handler' => 'sdata_rp_handler_submit_completed_field',
    ),
  );
  return $data;
}
