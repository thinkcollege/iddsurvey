<?php
/**
 * @file
 * Views data for promos.
 */

/**
 * Implements hook_views_data().
 */
function surveygizmo_views_data() {
  $data = array();

  // Acronis replacement job.
  $data['surveygizmo_survey']['table']['group'] = 'Survey';

  $data['surveygizmo_survey']['table']['entity type'] = 'survey';

  $data['surveygizmo_survey']['table']['base'] = array(
    'field' => 'survey_id',
    'title' => t('Surveys'),
    'help'  => t('SurveyGizmo surveys table.'),
  );

  $data['surveygizmo_survey']['id'] = array(
    'title'    => t('ID'),
    'help'     => t('Survey id.'),
    'field'    => array(
      'handler'        => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort'     => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['surveygizmo_survey']['title'] = array(
    'title'    => t('Title'),
    'help'     => t('Survey title.'),
    'field'    => array(
      'handler'        => 'SurveygizmoHandlerFieldSurvey',
      'click sortable' => TRUE,
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort'     => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['surveygizmo_survey']['created_on'] = array(
    'title'    => t('Created on'),
    'help'     => t('Time when replacement survey was created.'),
    'field'    => array(
      'handler'        => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort'     => array(
      'handler' => 'views_sort_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  $data['surveygizmo_survey']['modified_on'] = array(
    'title'    => t('Modified on'),
    'help'     => t('Time when replacement survey was modified.'),
    'field'    => array(
      'handler'        => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort'     => array(
      'handler' => 'views_sort_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  $data['surveygizmo_survey']['status'] = array(
    'title'    => t('Status'),
    'help'     => t('Survey status.'),
    'field'    => array(
      'handler'        => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort'     => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['surveygizmo_survey']['team'] = array(
    'title'    => t('Team'),
    'help'     => t('Survey team.'),
    'field'    => array(
      'handler'        => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort'     => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['surveygizmo_survey']['edit_link'] = array(
    'title'    => t('Edit link'),
    'help'     => t('SurveyGizmo edit link.'),
    'field'    => array(
      'handler'        => 'views_handler_field_url',
      'click sortable' => TRUE,
    ),
    'filter'   => array(
      'handler' => 'views_handler_filter',
    ),
    'sort'     => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument',
    ),
  );

  return $data;
}
