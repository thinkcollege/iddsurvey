<?php
/**
 * @file
 * Provides default views for module.
 */

/**
 * Implements hook_views_default_views().
 */
function surveygizmo_views_default_views() {
  $views = array();
  
  $view = new view();
  $view->name = 'surveys';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'surveygizmo_survey';
  $view->human_name = 'Surveys';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Surveys';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Survey: ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'surveygizmo_survey';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'SurveyGizmo ID';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Survey: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'surveygizmo_survey';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_survey'] = 0;
  /* Field: Survey: Team */
  $handler->display->display_options['fields']['team']['id'] = 'team';
  $handler->display->display_options['fields']['team']['table'] = 'surveygizmo_survey';
  $handler->display->display_options['fields']['team']['field'] = 'team';
  $handler->display->display_options['fields']['team']['separator'] = '';
  /* Field: Survey: Created on */
  $handler->display->display_options['fields']['created_on']['id'] = 'created_on';
  $handler->display->display_options['fields']['created_on']['table'] = 'surveygizmo_survey';
  $handler->display->display_options['fields']['created_on']['field'] = 'created_on';
  $handler->display->display_options['fields']['created_on']['date_format'] = 'short';
  $handler->display->display_options['fields']['created_on']['second_date_format'] = 'long';
  /* Field: Survey: Modified on */
  $handler->display->display_options['fields']['modified_on']['id'] = 'modified_on';
  $handler->display->display_options['fields']['modified_on']['table'] = 'surveygizmo_survey';
  $handler->display->display_options['fields']['modified_on']['field'] = 'modified_on';
  $handler->display->display_options['fields']['modified_on']['date_format'] = 'short';
  $handler->display->display_options['fields']['modified_on']['second_date_format'] = 'long';
  /* Field: Survey: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'surveygizmo_survey';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_link']['alter']['text'] = 'link';
  $handler->display->display_options['fields']['edit_link']['element_default_classes'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/surveys';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Surveys';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['surveys'] = array(
    t('Master'),
    t('Surveys'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('SurveyGizmo ID'),
    t('.'),
    t('Title'),
    t('Team'),
    t('Created on'),
    t('Modified on'),
    t('Edit link'),
    t('link'),
    t('Page'),
  );

  $views[$view->name] = $view;
  return $views;
}
