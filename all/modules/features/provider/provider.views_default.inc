<?php
/**
 * @file
 * provider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function provider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_page_reporting_period_info';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'Home page reporting period info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id_1']['id'] = 'og_group_provider_state_ref_target_id_1';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id_1']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id_1']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id_1']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Field: Date range */
  $handler->display->display_options['fields']['field_rp_date_range']['id'] = 'field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['table'] = 'field_data_field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['field'] = 'field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['relationship'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['fields']['field_rp_date_range']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rp_date_range']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rp_date_range']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_rp_date_range']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rp_date_range']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rp_date_range']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Deadline date */
  $handler->display->display_options['fields']['field_rp_deadline_date']['id'] = 'field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['table'] = 'field_data_field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['field'] = 'field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['relationship'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['fields']['field_rp_deadline_date']['label'] = 'Reporting DUE DATE';
  $handler->display->display_options['fields']['field_rp_deadline_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rp_deadline_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rp_deadline_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rp_deadline_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rp_deadline_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'INSTITUTE FOR COMMUNITY INCLUSION - [title_1] - [title] - Reporting period: [field_rp_date_range] - Reporting DUE DATE: [field_rp_deadline_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* Display: User Group (Provider) block */
  $handler = $view->new_display('block', 'User Group (Provider) block', 'block_1');
  $export['home_page_reporting_period_info'] = $view;

  $view = new view();
  $view->name = 'user_groups_providers';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'User groups (providers)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Area office */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Your provider';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor name */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: Enter individual data */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Enter individual data';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/provider/[nid]/individuals">Enter individual data</a>
<p>Navigate to the list of individuals we have on file for your program. From this page, you will have the ability to add and delete consumers, Edit Individuals\' information and employment data, and view summary tables of each individual\'s data.</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: View program summary */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'View program summary';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="#">View program summary</a>
<p>View a summary table of your program\'s data.</p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Download data */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Download data';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<a href="#">Download data</a>
<p>Click here to download consumer data to an excel spreadsheet.</p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: SData: Submit completed data */
  $handler->display->display_options['fields']['submit_completed']['id'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed']['field'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['label'] = 'Submit data';
  $handler->display->display_options['fields']['submit_completed']['element_type'] = 'p';
  /* Field: PDF instructions */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'PDF instructions';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<a href="#\'>Download this document for further instructions on entering data (PDF).</a>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* Display: User Group (Provider) block */
  $handler = $view->new_display('block', 'User Group (Provider) block', 'block_1');
  $export['user_groups_providers'] = $view;

  return $export;
}
