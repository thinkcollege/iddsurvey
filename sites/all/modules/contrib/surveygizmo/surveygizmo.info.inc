<?php
/**
 * @file
 * Provides entity info for SurveyGizmo.
 */

/**
 * Implements hook_entity_property_info().
 */
function surveygizmo_entity_property_info() {
  $info = array();

  $properties = &$info['survey']['properties'];

  $properties['survey_id'] = array(
    'label'        => t('Survey ID'),
    'description'  => t('The internal numeric ID of the survey entity.'),
    'type'         => 'integer',
    'schema field' => 'survey_id',
  );

  $properties['id'] = array(
    'label'        => t('SurveyGizmo survey id'),
    'description'  => t('SurveyGizmo survey id.'),
    'type'         => 'integer',
    'schema field' => 'id',
  );

  $properties['type'] = array(
    'label'             => t('Type'),
    'description'       => t('The type of the product.'),
    'type'              => 'token',
    'setter callback'   => 'entity_property_verbatim_set',
    'setter permission' => 'administer acronis_product entities',
    'options list'      => 'acronis_product_type_options_list',
    'required'          => TRUE,
    'schema field'      => 'type',
  );
  $properties['title'] = array(
    'label'           => t('Title'),
    'description'     => t('The title of survey.'),
    'type'            => 'text',
    'setter callback' => 'entity_property_verbatim_set',
    'required'        => TRUE,
    'schema field'    => 'title',
  );

  return $info;
}
