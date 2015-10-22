<?php
/**
 * @file
 * stanford_handbook.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_handbook_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_handbook_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_handbook_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_hbp_subsection',
        3 => 'field_hbp_applicability',
        4 => 'field_hbp_original_issue',
        5 => 'field_hbp_attachments',
        6 => 'field_hbp_footnote',
      ),
      'authority_and_related' => array(
        2 => 'field_hbp_authority',
        7 => 'field_hbp_related',
        8 => 'field_hbp_categories',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_hbp_subsection' => 'ds_content',
      'field_hbp_authority' => 'authority_and_related',
      'field_hbp_applicability' => 'ds_content',
      'field_hbp_original_issue' => 'ds_content',
      'field_hbp_attachments' => 'ds_content',
      'field_hbp_footnote' => 'ds_content',
      'field_hbp_related' => 'authority_and_related',
      'field_hbp_categories' => 'authority_and_related',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_handbook_page|full'] = $ds_layout;

  return $export;
}
