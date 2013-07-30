<?php
/**
 * @file
 * stanford_handbook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_handbook_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_handbook_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_handbook_node_info() {
  $items = array(
    'handbook' => array(
      'name' => t('Handbook'),
      'base' => 'node_content',
      'description' => t('A Handbook is a parent collection of information, and may include chapters, subchapters, and/or pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'policy_document' => array(
      'name' => t('Policy Document'),
      'base' => 'node_content',
      'description' => t('A <b>Policy Document</b> is an individual unit of policy within a Policy Chapter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'policy_section' => array(
      'name' => t('Policy Chapter'),
      'base' => 'node_content',
      'description' => t('A <b>Policy Chapter</b> is a group of Policy Documents within a Policy Manual.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
