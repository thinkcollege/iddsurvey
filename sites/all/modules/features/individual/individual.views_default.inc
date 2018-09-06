<?php
/**
 * @file
 * individual.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function individual_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'provider_individuals';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'Provider Individuals';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Provider Individuals';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'field_last_name' => 'field_last_name',
    'field_first_name' => 'field_first_name',
    'field_dob' => 'field_dob',
    'field_area_office' => 'field_area_office',
    'edit_node' => 'edit_node',
    'nothing_1' => 'edit_node',
    'delete_membership' => 'edit_node',
    'nothing' => 'edit_node',
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dob' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_area_office' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_data_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There is no content in this group.';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Individual data content from referencing individuals */
  $handler->display->display_options['relationships']['reverse_field_individual_node']['id'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['field'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['ui_name'] = 'Individual data content from referencing individuals';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['label'] = 'Individual Data content from field_individual';
  /* Relationship: Provider node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['label'] = 'Reporting period entity referenced from field_reporting_period';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: DOB */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['label'] = 'Date of birth';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Area office */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit individual';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'individual/delete/[nid_2]/!1?destination=provider/!1/individuals';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: OG membership: Delete link */
  $handler->display->display_options['fields']['delete_membership']['id'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['table'] = 'og_membership';
  $handler->display->display_options['fields']['delete_membership']['field'] = 'delete_membership';
  $handler->display->display_options['fields']['delete_membership']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['delete_membership']['label'] = '';
  $handler->display->display_options['fields']['delete_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_membership']['text'] = 'delete individual';
  /* Field: Edit data link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Edit data link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'edit data';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit?destination=provider/!1/individuals';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_reporting_period';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_current_reporting_period';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_individual_data_type';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'type';

  /* Display: Provider Individuals page */
  $handler = $view->new_display('page', 'Provider Individuals page', 'page_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/individual?p=[nid_1]">Add new individual</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['path'] = 'provider/%/individuals';

  /* Display: Provider Individuals block */
  $handler = $view->new_display('block', 'Provider Individuals block', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;

  /* Display: (MA) Provider Individuals page */
  $handler = $view->new_display('page', '(MA) Provider Individuals page', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'individual_data_ma' => 'individual_data_ma',
  );
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    38 => '38',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'reporting_period';
  $handler->display->display_options['path'] = 'ma/provider/%/individuals';

  /* Display: Metadata attachment */
  $handler = $view->new_display('attachment', 'Metadata attachment', 'attachment_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Provider node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Deadline date */
  $handler->display->display_options['fields']['field_rp_deadline_date']['id'] = 'field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['table'] = 'field_data_field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['field'] = 'field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['relationship'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['fields']['field_rp_deadline_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date range */
  $handler->display->display_options['fields']['field_rp_date_range']['id'] = 'field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['table'] = 'field_data_field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['field'] = 'field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['relationship'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['fields']['field_rp_date_range']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'provider' => 'provider',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'page_2' => 0,
  );
  $export['provider_individuals'] = $view;

  return $export;
}
