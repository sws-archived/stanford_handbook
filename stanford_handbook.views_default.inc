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

  $view = new view();
  $view->name = 'handbook_page_manage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Handbook Page: Manage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Handbook Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_hbp_parent_subchapter' => 'field_hbp_parent_subchapter',
    'field_s_parent_chapter' => 'field_s_parent_chapter',
    'timestamp' => 'title',
    'status' => 'status',
    'changed' => 'changed',
    'name' => 'name',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'view_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_hbp_parent_subchapter' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_parent_chapter' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'stanford_handbook_page::field_hbp_parent_subchapter' => 'stanford_handbook_page::field_hbp_parent_subchapter',
          'stanford_handbook_page::field_s_parent_chapter' => 'stanford_handbook_page::field_s_parent_chapter',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Parent Subchapter */
  $handler->display->display_options['fields']['field_hbp_parent_subchapter']['id'] = 'field_hbp_parent_subchapter';
  $handler->display->display_options['fields']['field_hbp_parent_subchapter']['table'] = 'field_data_field_hbp_parent_subchapter';
  $handler->display->display_options['fields']['field_hbp_parent_subchapter']['field'] = 'field_hbp_parent_subchapter';
  $handler->display->display_options['fields']['field_hbp_parent_subchapter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Parent Chapter */
  $handler->display->display_options['fields']['field_s_parent_chapter']['id'] = 'field_s_parent_chapter';
  $handler->display->display_options['fields']['field_s_parent_chapter']['table'] = 'field_data_field_s_parent_chapter';
  $handler->display->display_options['fields']['field_s_parent_chapter']['field'] = 'field_s_parent_chapter';
  $handler->display->display_options['fields']['field_s_parent_chapter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_handbook_page' => 'stanford_handbook_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/manage/handbook-page';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Handbook Pages';
  $handler->display->display_options['menu']['weight'] = '';
  $handler->display->display_options['menu']['name'] = 'menu-manage-content-by-type';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['handbook_page_manage'] = $view;

  $view = new view();
  $view->name = 'stanford_handbook_chapters';
  $view->description = 'List View of Chapter nodes in numerical order';
  $view->tag = 'stanford_handbook';
  $view->base_table = 'node';
  $view->human_name = 'Chapters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Chapters';
  $handler->display->display_options['css_class'] = 'views-row-lines';
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
  $handler->display->display_options['relationships']['field_s_chapter_handbook_target_id']['id'] = 'field_s_chapter_handbook_target_id';
  $handler->display->display_options['relationships']['field_s_chapter_handbook_target_id']['table'] = 'field_data_field_s_chapter_handbook';
  $handler->display->display_options['relationships']['field_s_chapter_handbook_target_id']['field'] = 'field_s_chapter_handbook_target_id';
  $handler->display->display_options['relationships']['field_s_chapter_handbook_target_id']['required'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_chapter_image']['id'] = 'field_s_chapter_image';
  $handler->display->display_options['fields']['field_s_chapter_image']['table'] = 'field_data_field_s_chapter_image';
  $handler->display->display_options['fields']['field_s_chapter_image']['field'] = 'field_s_chapter_image';
  $handler->display->display_options['fields']['field_s_chapter_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_chapter_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_chapter_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_chapter_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s_chapter_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_chapter_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'stanford_handbook_subchapters';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
        <div>[field_s_chapter_image]</div>
        <div>
            <h2>[title]</h2>
            [body]

            <div class="accordion" id="collapse-subchapters-[nid]">
                <div class="accordion-group">
                    <div class="accordion-heading hidden">
                        <a class="btn collapsed" data-toggle="collapse" data-parent="#collapse-subchapters-[nid]" href="#my-subchapters-[nid]">
                        Subchapters
                        </a>
                    </div>
                    <div id="my-subchapters-[nid]" class="accordion-body collapse in">
                        <div class="accordion-inner">
                        [view]
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Chapter Number (field_s_chapter_number) */
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['id'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['table'] = 'field_data_field_s_chapter_number';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['field'] = 'field_s_chapter_number_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_s_chapter_handbook_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'stanford_handbook' => 'stanford_handbook',
  );
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
    'stanford_chapter' => 'stanford_chapter',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'chapters_block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['stanford_handbook_chapters'] = $view;

  $view = new view();
  $view->name = 'stanford_handbook_field_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Handbook Field Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'stanford_handbook_page' => 'stanford_handbook_page',
  );

  /* Display: Authority */
  $handler = $view->new_display('block', 'Authority', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Authority';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Authority */
  $handler->display->display_options['fields']['field_hbp_authority']['id'] = 'field_hbp_authority';
  $handler->display->display_options['fields']['field_hbp_authority']['table'] = 'field_data_field_hbp_authority';
  $handler->display->display_options['fields']['field_hbp_authority']['field'] = 'field_hbp_authority';
  $handler->display->display_options['fields']['field_hbp_authority']['label'] = '';
  $handler->display->display_options['fields']['field_hbp_authority']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'stanford_handbook_page' => 'stanford_handbook_page',
  );
  /* Filter criterion: Content: Authority (field_hbp_authority) */
  $handler->display->display_options['filters']['field_hbp_authority_value']['id'] = 'field_hbp_authority_value';
  $handler->display->display_options['filters']['field_hbp_authority_value']['table'] = 'field_data_field_hbp_authority';
  $handler->display->display_options['filters']['field_hbp_authority_value']['field'] = 'field_hbp_authority_value';
  $handler->display->display_options['filters']['field_hbp_authority_value']['operator'] = 'not empty';

  /* Display: Related Pages */
  $handler = $view->new_display('block', 'Related Pages', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Pages';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related Pages */
  $handler->display->display_options['fields']['field_hbp_related']['id'] = 'field_hbp_related';
  $handler->display->display_options['fields']['field_hbp_related']['table'] = 'field_data_field_hbp_related';
  $handler->display->display_options['fields']['field_hbp_related']['field'] = 'field_hbp_related';
  $handler->display->display_options['fields']['field_hbp_related']['label'] = '';
  $handler->display->display_options['fields']['field_hbp_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hbp_related']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_hbp_related']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hbp_related']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'stanford_handbook_page' => 'stanford_handbook_page',
  );
  /* Filter criterion: Content: Related Pages (field_hbp_related) */
  $handler->display->display_options['filters']['field_hbp_related_target_id']['id'] = 'field_hbp_related_target_id';
  $handler->display->display_options['filters']['field_hbp_related_target_id']['table'] = 'field_data_field_hbp_related';
  $handler->display->display_options['filters']['field_hbp_related_target_id']['field'] = 'field_hbp_related_target_id';
  $handler->display->display_options['filters']['field_hbp_related_target_id']['operator'] = 'not empty';

  /* Display: Categories */
  $handler = $view->new_display('block', 'Categories', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category(ies) */
  $handler->display->display_options['fields']['field_hbp_categories']['id'] = 'field_hbp_categories';
  $handler->display->display_options['fields']['field_hbp_categories']['table'] = 'field_data_field_hbp_categories';
  $handler->display->display_options['fields']['field_hbp_categories']['field'] = 'field_hbp_categories';
  $handler->display->display_options['fields']['field_hbp_categories']['label'] = '';
  $handler->display->display_options['fields']['field_hbp_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hbp_categories']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hbp_categories']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hbp_categories']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'stanford_handbook_page' => 'stanford_handbook_page',
  );
  /* Filter criterion: Content: Category(ies) (field_hbp_categories) */
  $handler->display->display_options['filters']['field_hbp_categories_tid']['id'] = 'field_hbp_categories_tid';
  $handler->display->display_options['filters']['field_hbp_categories_tid']['table'] = 'field_data_field_hbp_categories';
  $handler->display->display_options['filters']['field_hbp_categories_tid']['field'] = 'field_hbp_categories_tid';
  $handler->display->display_options['filters']['field_hbp_categories_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_hbp_categories_tid']['value'] = '';
  $handler->display->display_options['filters']['field_hbp_categories_tid']['vocabulary'] = 'category';
  $export['stanford_handbook_field_blocks'] = $view;

  $view = new view();
  $view->name = 'stanford_handbook_page_previous_next';
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
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['id'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['table'] = 'field_data_field_s_parent_chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['field'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['label'] = 'Parent chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['required'] = TRUE;
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
  /* Sort criterion: Content: Chapter Number (field_s_chapter_number) */
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['id'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['table'] = 'field_data_field_s_chapter_number';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['field'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['relationship'] = 'field_s_parent_chapter_target_id';
  /* Sort criterion: Content: Subchapter Number (field_s_subchapter_number) */
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['id'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['table'] = 'field_data_field_s_subchapter_number';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['field'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['relationship'] = 'field_hbp_parent_subchapter_target_id';
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
    'stanford_handbook_page' => 'stanford_handbook_page',
  );
  $export['stanford_handbook_page_previous_next'] = $view;

  $view = new view();
  $view->name = 'stanford_handbook_pages';
  $view->description = 'List View of Handbook Page nodes in numerical order';
  $view->tag = 'stanford_handbook';
  $view->base_table = 'node';
  $view->human_name = 'Handbook Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Handbook Pages';
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
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['id'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['table'] = 'field_data_field_hbp_parent_subchapter';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['field'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['label'] = 'Parent Subchapter';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['id'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['table'] = 'field_data_field_s_parent_chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['field'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['label'] = 'Parent chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'more-link';
  $handler->display->display_options['fields']['view_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Handbook Page';
  /* Sort criterion: Content: Chapter Number (field_s_chapter_number) */
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['id'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['table'] = 'field_data_field_s_chapter_number';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['field'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['relationship'] = 'field_s_parent_chapter_target_id';
  /* Sort criterion: Content: Subchapter Number (field_s_subchapter_number) */
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['id'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['table'] = 'field_data_field_s_subchapter_number';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['field'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['relationship'] = 'field_hbp_parent_subchapter_target_id';
  /* Sort criterion: Content: Page Number (field_hbp_number) */
  $handler->display->display_options['sorts']['field_hbp_number_value']['id'] = 'field_hbp_number_value';
  $handler->display->display_options['sorts']['field_hbp_number_value']['table'] = 'field_data_field_hbp_number';
  $handler->display->display_options['sorts']['field_hbp_number_value']['field'] = 'field_hbp_number_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'stanford_handbook_page' => 'stanford_handbook_page',
  );

  /* Display: Master Block */
  $handler = $view->new_display('block', 'Master Block', 'handbook_pages_block');
  $handler->display->display_options['display_description'] = 'Same settings as Master display';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'stanford_subchapter' => 'stanford_subchapter',
  );

  /* Display: Titles Only */
  $handler = $view->new_display('block', 'Titles Only', 'handbook_pages_titles_only_block');
  $handler->display->display_options['display_description'] = 'Only display Title field';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Chapter Image Block */
  $handler = $view->new_display('block', 'Chapter Image Block', 'chp_img');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chapter Image';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['id'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['table'] = 'field_data_field_s_parent_chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['field'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['label'] = 'Parent chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_chapter_image']['id'] = 'field_s_chapter_image';
  $handler->display->display_options['fields']['field_s_chapter_image']['table'] = 'field_data_field_s_chapter_image';
  $handler->display->display_options['fields']['field_s_chapter_image']['field'] = 'field_s_chapter_image';
  $handler->display->display_options['fields']['field_s_chapter_image']['relationship'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['fields']['field_s_chapter_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_chapter_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_chapter_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_chapter_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'stanford_handbook_page' => 'stanford_handbook_page',
    'stanford_subchapter' => 'stanford_subchapter',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'stanford_handbook_page' => 'stanford_handbook_page',
    'stanford_subchapter' => 'stanford_subchapter',
  );
  $export['stanford_handbook_pages'] = $view;

  $view = new view();
  $view->name = 'stanford_handbook_print_handbook_pages';
  $view->description = 'Print View of handbook page nodes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Print Handbook Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Print Handbook Pages';
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['id'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['table'] = 'field_data_field_s_parent_chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['field'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['label'] = 'Parent chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['id'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['table'] = 'field_data_field_hbp_parent_subchapter';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['field'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['label'] = 'Parent subchapter';
  $handler->display->display_options['relationships']['field_hbp_parent_subchapter_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Chapter Number (field_s_chapter_number) */
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['id'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['table'] = 'field_data_field_s_chapter_number';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['field'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['relationship'] = 'field_s_parent_chapter_target_id';
  /* Sort criterion: Content: Subchapter Number (field_s_subchapter_number) */
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['id'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['table'] = 'field_data_field_s_subchapter_number';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['field'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['relationship'] = 'field_hbp_parent_subchapter_target_id';
  /* Sort criterion: Content: Page Number (field_hbp_number) */
  $handler->display->display_options['sorts']['field_hbp_number_value']['id'] = 'field_hbp_number_value';
  $handler->display->display_options['sorts']['field_hbp_number_value']['table'] = 'field_data_field_hbp_number';
  $handler->display->display_options['sorts']['field_hbp_number_value']['field'] = 'field_hbp_number_value';
  /* Contextual filter: Content: Chapter Number (field_s_chapter_number) */
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['id'] = 'field_s_chapter_number_value';
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['table'] = 'field_data_field_s_chapter_number';
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['field'] = 'field_s_chapter_number_value';
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['relationship'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_chapter_number_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Subchapter Number (field_s_subchapter_number) */
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['id'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['table'] = 'field_data_field_s_subchapter_number';
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['field'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['relationship'] = 'field_hbp_parent_subchapter_target_id';
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_subchapter_number_value']['summary_options']['items_per_page'] = '25';
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
    'stanford_handbook_page' => 'stanford_handbook_page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'print-handbook-pages';
  $export['stanford_handbook_print_handbook_pages'] = $view;

  $view = new view();
  $view->name = 'stanford_handbook_subchapters';
  $view->description = 'List View of Subchapter nodes in numerical order';
  $view->tag = 'stanford_handbook';
  $view->base_table = 'node';
  $view->human_name = 'Subchapters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subchapters';
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
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['id'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['table'] = 'field_data_field_s_parent_chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['field'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['label'] = 'Parent chapter';
  $handler->display->display_options['relationships']['field_s_parent_chapter_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '225';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'stanford_handbook_pages';
  $handler->display->display_options['fields']['view']['display'] = 'handbook_pages_titles_only_block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div><h2>[title]</h2>
    [body]
           <div class="accordion" id="collapse-policies-[nid]">
                <div class="accordion-group">
                    <div class="accordion-heading hidden">
                        <a class="btn collapsed" data-toggle="collapse" data-parent="#collapse-policies-[nid]" href="#my-policies-[nid]">
                        Pages
                        </a>
                    </div>
                    <div id="my-policies-[nid]" class="accordion-body collapse">
                        <div class="accordion-inner">
                        [view]
                        </div>
                    </div>
                </div>
            </div>
        </div>
    ';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Chapter Number (field_s_chapter_number) */
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['id'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['table'] = 'field_data_field_s_chapter_number';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['field'] = 'field_s_chapter_number_value';
  $handler->display->display_options['sorts']['field_s_chapter_number_value']['relationship'] = 'field_s_parent_chapter_target_id';
  /* Sort criterion: Content: Subchapter Number (field_s_subchapter_number) */
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['id'] = 'field_s_subchapter_number_value';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['table'] = 'field_data_field_s_subchapter_number';
  $handler->display->display_options['sorts']['field_s_subchapter_number_value']['field'] = 'field_s_subchapter_number_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_s_parent_chapter_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'stanford_subchapter' => 'stanford_subchapter',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'subchapters_block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['stanford_handbook_subchapters'] = $view;

  return $export;
}
