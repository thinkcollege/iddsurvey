<?php
/**
 * @file
 * Impementation of various module helpers.
 */

/**
 * Fetches SurveyGizmo for surveys and update local database.
 *
 * @return int
 *   Number of updated records.
 */
function surveygizmo_refresh_surveys() {
  $surveys_to_update = array();
  $updated = 0;

  $sg = new spacenate\SurveyGizmoApiWrapper(variable_get('surveygizmo_user'), variable_get('surveygizmo_password'));
  $surveys_info = $sg->Survey->getList();
  if (!empty($surveys_info)) {
    $surveys_info = json_decode($surveys_info);
    foreach ($surveys_info->data as $key => $survey_info) {

      $survey_pages = array();

      $survey_data = $sg->Survey->getSurvey((int) $survey_info->id);
      if (!empty($survey_data)) {
        $survey_data = json_decode($survey_data);
        $survey_pages = surveygizmo_parse_survey_pages($survey_data);
      }

      $survey_entity = entity_load('survey', FALSE, array('id' => (int) $survey_info->id));

      $data = array(
        'id'           => $survey_info->id,
        'team'         => $survey_info->team,
        'status'       => $survey_info->status,
        'created_on'   => strtotime($survey_info->created_on),
        'modified_on'  => strtotime($survey_info->modified_on),
        'title'        => $survey_info->title,
        'edit_link'    => $survey_info->links->edit,
        'publish_link' => $survey_info->links->publish,
        'pages'        => $survey_pages,
      );

      // Update entity.
      if (!empty($survey_entity)) {
        $surveys_to_update[key($survey_entity)] = $survey_entity[key($survey_entity)];
      }
      // Add new entity.
      else {
        $survey_entity = entity_create('survey', $data);
        entity_save('survey', $survey_entity);
      }
      $updated++;
    }
    // Update existing surveys.
    if (!empty($surveys_to_update)) {
      foreach ($surveys_to_update as $key => $survey) {
        entity_save('survey', $survey);
      }
    }
  }

  return $updated;
}

/**
 * Helper function - parses survey per page data.
 */
function surveygizmo_parse_survey_pages($survey_data) {
  $survey_pages = array();
  foreach ($survey_data->data->pages as $page => $page_data) {
    foreach ($page_data->questions as $key => $question) {
      $survey_pages[$page]['questions'][$question->id]['type'] = $question->_type;
      $survey_pages[$page]['questions'][$question->id]['subtype'] = $question->_subtype;
      $survey_pages[$page]['questions'][$question->id]['title'] = $question->title;
      // Question shortname.
      if (!empty($question->shortname)) {
        $survey_pages[$page]['questions'][$question->id]['shortname'] = $question->shortname;
      }
      // Question options.
      foreach ($question->options as $option_key => $option_data) {
        $survey_pages[$page]['questions'][$question->id]['options'][$option_data->id] = $option_data->value;
      }
    }
  }
  return $survey_pages;
}
