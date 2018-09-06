<?php
/**
 * @file
 * Contains form definitions and callbacks for module.
 */

/**
 * Basic survey form.
 */
function survey_form($form, &$form_state, $survey) {
  return entity_view('survey', array($survey));
}
