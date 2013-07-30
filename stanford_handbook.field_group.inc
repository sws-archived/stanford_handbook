<?php
/**
 * @file
 * stanford_handbook.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_handbook_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hbp_content|node|handbook_page|form';
  $field_group->group_name = 'group_hbp_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'handbook_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_hbp_subsection',
      2 => 'field_hbp_suppress_jump_to',
      3 => 'field_hbp_authority',
      4 => 'field_hbp_applicability',
      5 => 'field_hbp_responsibility',
      6 => 'field_hbp_statement',
      7 => 'field_hbp_purpose',
      8 => 'field_hbp_guide_supervisors',
      9 => 'field_hbp_footnote',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_hbp_content|node|handbook_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hbp_essential|node|handbook_page|form';
  $field_group->group_name = 'group_hbp_essential';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'handbook_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Essential Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_hbp_title',
      1 => 'field_hbp_parent_subchapter',
      2 => 'field_parent_chapter',
      3 => 'field_hbp_number',
      4 => 'field_hbp_former_number',
      5 => 'field_hbp_chapter',
      6 => 'field_hbp_subchapter',
      7 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Essential Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hbp_essential|node|handbook_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hbp_metadata|node|handbook_page|form';
  $field_group->group_name = 'group_hbp_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'handbook_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_hbp_current_version',
      1 => 'field_hbp_original_issue',
      2 => 'field_hbp_categories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_hbp_metadata|node|handbook_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hbp_related|node|handbook_page|form';
  $field_group->group_name = 'group_hbp_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'handbook_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_hbp_attachments',
      1 => 'field_hbp_related',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hbp_related|node|handbook_page|form'] = $field_group;

  return $export;
}
