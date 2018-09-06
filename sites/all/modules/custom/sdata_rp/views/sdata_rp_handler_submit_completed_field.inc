<?php

/**
 * @file
 * Definition of sdata_rp_handler_submit_completed_field
 */

/**
 * Provides a custom views field.
 */
class sdata_rp_handler_submit_completed_field extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
    // do nothing -- to override the parent query.
  }

  function render($data) {
    // Get the provider, state, and reporting period node ids so we can build an entity
    // field query to get the list of individual data nodes that need to be checked
    // for completeness.
    $provider_nid = $data->_field_data['node_og_membership_nid']['entity']->nid;
    $provider = node_load($provider_nid);
    if ($provider->type != 'provider') {
      return;
    }
    $state_nid = $provider->og_group_provider_state_ref[LANGUAGE_NONE][0]['target_id'];
    $state = node_load($state_nid);
    if ($state->type != 'state') {
      return;
    }
    $state_individual_data_content_type = $state->field_individual_data_type[LANGUAGE_NONE][0]['value'];
    $reporting_period_nid = $state->field_current_reporting_period[LANGUAGE_NONE][0]['target_id'];

    // Entity field query that gets a list of individual data nodes for the given provider
    // for the current reporting period for the provider's state.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
		  ->fieldCondition('og_group_ref', 'target_id', $provider_nid)
			->propertyCondition('status', 1)
			->propertyCondition('type', $state_individual_data_content_type)
			->fieldCondition('field_reporting_period', 'target_id', $reporting_period_nid);
    $result = $query->execute();

    // Assume the best.
    $valid = TRUE;

    // If any individual data nodes are returned, loop around each one and validate.
    if (isset($result['node'])) {
      foreach ($result['node'] as $key => $value) {
        $node = node_load($key);
        // Validate node is complete here. Code will probably have to be unique for each
        // Individual data node type (individual_data, individual_data_ma, etc...)
        switch ($state_individual_data_content_type) {
          case 'individual_data':
            $valid = _sdata_rp_validate_md($node);
            break;
          case 'individual_data_ma':
            $valid = _sdata_rp_validate_ma($node);
            break;
        }
        if (!$valid) break;
      }
    }

    // If any of the individual data nodes fail validation, then the form isn't ready to
    // submit.
    if ($valid) {
      $output = l("Data complete - ready to submit", 'sdata_rp/submit_data/' . $provider_nid);
    }
    else {
      $output = t("There are some consumers that are not complete. Please complete them before submitting your data.");
    }
    return $output;
  }
}

/*
 * Custom validation function for individual_data (MD) nodes.
 */
function _sdata_rp_validate_md($node) {
  // Individual competitive job
  if ((!$node->field_indv_comp_partic['und'][0]['value']) &&
      (!isset($node->field_indv_comp_hrs['und'][0]['value'])) &&
      (!isset($node->field_indv_comp_gross_wages['und'][0]['value']))
     ) {
    return FALSE;
  }

  $fields = field_info_instances('node', $node->type);
  if (isset($node->field_indv_comp_hrs['und'][0]['value'])) {
    if (($node->field_indv_comp_hrs['und'][0]['value'] < $fields['field_indv_comp_hrs']['settings']['min']) ||
        ($node->field_indv_comp_hrs['und'][0]['value'] > $fields['field_indv_comp_hrs']['settings']['max'])) {
      return FALSE;
    }
  }

  if (isset($node->field_indv_comp_gross_wages['und'][0]['value'])) {
    if (($node->field_indv_comp_gross_wages['und'][0]['value'] < $fields['field_indv_comp_gross_wages']['settings']['min']) ||
        ($node->field_indv_comp_gross_wages['und'][0]['value'] > $fields['field_indv_comp_gross_wages']['settings']['max'])) {
      return FALSE;
    }
  }

  // Individual contracted job
  // TODO: Add validation for this (and the other) section(s).

  // Group integrated job

  // Self employment

  // Facility based / sheltered work

  // Community based non work

  // Facility based non work


  return TRUE;
}


/*
 * Custom validation function for individual_data_ma nodes.
 */
function _sdata_rp_validate_ma($node) {
  // TODO: this needs to be completed just like _sdata_rp_validate_md(), but with MA
  // specific validation.
  return TRUE;
}

