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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'handbook_chapters';
  $context->description = 'Blocks on the Handbook node';
  $context->tag = 'Handbook';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_handbook' => 'stanford_handbook',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-891cc1e640303a3f615ae268e6142d10' => array(
          'module' => 'views',
          'delta' => '891cc1e640303a3f615ae268e6142d10',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['handbook_chapters'] = $context;

// Translatables
// Included for use with string extractors like potx.
  t('Blocks on the Handbook node');
  t('Handbook');

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
        'views-e8c4bb8666dd78e1d2caa66beb0f3b4a' => array(
          'module' => 'views',
          'delta' => 'e8c4bb8666dd78e1d2caa66beb0f3b4a',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-a53a97f898b2d9f49f71889a500c7075' => array(
          'module' => 'views',
          'delta' => 'a53a97f898b2d9f49f71889a500c7075',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-c609fed5c622b814d8cd74fb156c25e3' => array(
          'module' => 'views',
          'delta' => 'c609fed5c622b814d8cd74fb156c25e3',
          'region' => 'sidebar_second',
          'weight' => '-7',
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
  $context->name = 'handbook_print';
  $context->description = 'Print block on the Print Views';
  $context->tag = 'Handbook';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'stanford_handbook_print_handbook_pages:page' => 'stanford_handbook_print_handbook_pages:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'print_ui-print-links' => array(
          'module' => 'print_ui',
          'delta' => 'print-links',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
  t('Handbook');
  t('Print block on the Print Views');
  $export['handbook_print'] = $context;


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
        'views-3c3d97561898d0f3e878b60216841788' => array(
          'module' => 'views',
          'delta' => '3c3d97561898d0f3e878b60216841788',
          'region' => 'content_lower',
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
  $context->name = 'sitewide_handbook';
  $context->description = 'Sitewide Handbook context';
  $context->tag = 'Handbook';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'stanford-handbook',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Handbook');
  t('Sitewide Handbook context');
  $export['sitewide_handbook'] = $context;

  return $export;
}
