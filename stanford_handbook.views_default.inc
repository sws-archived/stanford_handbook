<?php
/**
 * @file
 * stanford_handbook.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_handbook_views_default_views() {
  $export = array();

  
  // Paste export code here
  // $export['view_machine_name'] = $view;
  
  $view = new view();
  $view->name = 'handbook_page_previous_next';
  $view->description = 'Sequential list of all handbook pages, for populating the Prev/Next buttons used by the Custom Pagers module';
  $view->tag = 'stanford_handbook';
  $view->base_table = 'node';
  $view->human_name = 'Handbook Page Previous Next';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Handbook Page Previous Next';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['id'] = 'field_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['table'] = 'field_data_field_parent_chapter';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['field'] = 'field_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['label'] = 'Parent Chapter';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['id'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['table'] = 'field_data_field_hbp_parent_subchapter';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['field'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['label'] = 'Parent Subchapter';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Chapter Number (field_chapter_number) */
  $handler->display->display_options['sorts']['field_chapter_number_value']['id'] = 'field_chapter_number_value';
  $handler->display->display_options['sorts']['field_chapter_number_value']['table'] = 'field_data_field_chapter_number';
  $handler->display->display_options['sorts']['field_chapter_number_value']['field'] = 'field_chapter_number_value';
  $handler->display->display_options['sorts']['field_chapter_number_value']['relationship'] = 'field_parent_chapter_target_id';
  /* Sort criterion: Content: Subchapter Number (field_subchapter_number) */
  $handler->display->display_options['sorts']['field_subchapter_number_value']['id'] = 'field_subchapter_number_value';
  $handler->display->display_options['sorts']['field_subchapter_number_value']['table'] = 'field_data_field_subchapter_number';
  $handler->display->display_options['sorts']['field_subchapter_number_value']['field'] = 'field_subchapter_number_value';
  $handler->display->display_options['sorts']['field_subchapter_number_value']['relationship'] = 'field_hbp_parent_subchapter_target_id';
  /* Sort criterion: Content: Page Number (field_hbp_number) */
  $handler->display->display_options['sorts']['field_hbp_number_value']['id'] = 'field_hbp_number_value';
  $handler->display->display_options['sorts']['field_hbp_number_value']['table'] = 'field_data_field_hbp_number';
  $handler->display->display_options['sorts']['field_hbp_number_value']['field'] = 'field_hbp_number_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'handbook_page' => 'handbook_page',
  );

  $export['handbook_page_previous_next'] = $view;
  
  return $export;
}
