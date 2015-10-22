<?php
/**
 * @file
 * stanford_handbook_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_handbook_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'handbook_page';
  $context->description = 'Blocks on the Handbook Page node';
  $context->tag = 'Handbook';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_handbook_page' => 'stanford_handbook_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'custom_pagers-1' => array(
          'module' => 'custom_pagers',
          'delta' => '1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-stanford_handbook_pages-chp_img' => array(
          'module' => 'views',
          'delta' => 'stanford_handbook_pages-chp_img',
          'region' => 'content',
          'weight' => '-10',
        ),
        'print_ui-print-links' => array(
          'module' => 'print_ui',
          'delta' => 'print-links',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'ds_extras-authority_and_related' => array(
          'module' => 'ds_extras',
          'delta' => 'authority_and_related',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks on the Handbook Page node');
  t('Handbook');
  $export['handbook_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'handbook_subchapter';
  $context->description = 'Block(s) on the Handbook Subchapter node';
  $context->tag = 'Handbook';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_subchapter' => 'stanford_subchapter',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_handbook_pages-chp_img' => array(
          'module' => 'views',
          'delta' => 'stanford_handbook_pages-chp_img',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
  t('Block(s) on the Handbook Subchapter node');
  t('Handbook');
  $export['handbook_subchapter'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'handbook_chapter';
  $context->description = 'Block(s) on the Handbook Chapter node';
  $context->tag = 'Handbook';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_chapter' => 'stanford_chapter',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b0666971d2f61970bab7cd33ec319269' => array(
          'module' => 'views',
          'delta' => 'b0666971d2f61970bab7cd33ec319269',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
  t('Block(s) on the Handbook Chapter node');
  t('Handbook');
  $export['handbook_chapter'] = $context;

  return $export;
}
