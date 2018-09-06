<?php
/**
 * @file
 * Contains callback to manipulate surveys.
 */

/**
 * Callback to read survey and submit them.
 */
function surveygizmo_submit_survey($surveyid) {
  $return = array(
    'status' => 'false',
  );
  if (isset($surveyid) && is_numeric($surveyid) && $_SERVER['REQUEST_METHOD'] == "POST") {
    $output = array();
    $received_json = file_get_contents("php://input", TRUE);
    $survey = drupal_json_decode($received_json);
    if (!empty($survey['survey'])) {
      foreach ($survey['survey'] as $item => $answer) {
        $output['data[' . $item . '][' . key($answer) . ']'] = $answer[key($answer)];
      }
    }
    if (!empty($output)) {
      $sg = new spacenate\SurveyGizmoApiWrapper(variable_get('surveygizmo_user'), variable_get('surveygizmo_password'));
      $sr = new spacenate\SurveyGizmo\SurveyResponse($sg);
      $response = $sr->createResponse($surveyid, $output);
      $response = drupal_json_decode($response);
      if ($response['result_ok']) {
        $return = array(
          'status' => $response['data']['status'],
          'id'     => $response['data']['id'],
        );
      }
    }
  }
  return $return;
}

/**
 * Callback returns Survey JSON.
 */
function surveygizmo_get_survey($surveyid) {
  $return['survey'] = 'null';

  if (is_numeric($surveyid)) {
    // Fallback to fetch survey info from SurveyGizmo directly.
    if (!$survey_entity = entity_load('survey', FALSE, array('id' => (int) $surveyid))) {
      $sg = new spacenate\SurveyGizmoApiWrapper(variable_get('surveygizmo_user'), variable_get('surveygizmo_password'));
      $survey = $sg->Survey->getSurvey((int) $surveyid);
      $survey_array = drupal_json_decode($survey);

      if (!empty($survey_array)) {
        if (!empty($survey_array->data->id)) {
          $return_survey['id'] = $survey_array->data->id;
          $return_survey['title'] = $survey_array->data->title;
          $return_survey['pages'] = surveygizmo_parse_survey_pages($survey_array);
        }
      }
    }
    // Get survey from database.
    else {
      $survey_entity = $survey_entity[key($survey_entity)];
      $return_survey['id'] = $survey_entity->id;
      $return_survey['title'] = $survey_entity->title;
      $return_survey['pages'] = $survey_entity->pages;
    }
    if (!empty($return_survey)) {
      $return['survey'] = $return_survey;
    }
  }

  return $return;
}
