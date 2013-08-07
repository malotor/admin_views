<?php
/**
 * @file
 * Create views for the default module
 *
 * 
 */ 
 
 function admin_views_views_default_views() {
	 
	 $view = new view();
	 $view->name = 'admin_content';
	 $view->description = 'Administrative view for showing content';
	 $view->tag = 'default';
	 $view->base_table = 'node';
	 $view->human_name = 'Admin - Content';
	 $view->core = 7;
	 $view->api_version = '3.0';
	 $view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

	 /* Display: Master */
	 $handler = $view->new_display('default', 'Master', 'default');
	 $handler->display->display_options['title'] = 'Admin - Content';
	 $handler->display->display_options['use_more_always'] = FALSE;
	 $handler->display->display_options['use_more_text'] = 'más';
	 $handler->display->display_options['access']['type'] = 'perm';
	 $handler->display->display_options['cache']['type'] = 'none';
	 $handler->display->display_options['query']['type'] = 'views_query';
	 $handler->display->display_options['exposed_form']['type'] = 'basic';
	 $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
	 $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
	 $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
	 $handler->display->display_options['pager']['type'] = 'full';
	 $handler->display->display_options['pager']['options']['items_per_page'] = '10';
	 $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
	 $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
	 $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
	 $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
	 $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
	 $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
	 $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
	 $handler->display->display_options['style_plugin'] = 'table';
	 $handler->display->display_options['style_options']['columns'] = array(
	   'nid' => 'nid',
	   'field_image' => 'field_image',
	   'title' => 'title',
	   'created' => 'created',
	   'published_at' => 'published_at',
	   'comment_count' => 'comment_count',
	   'language' => 'language',
	   'edit_node' => 'edit_node',
	   'delete_node' => 'delete_node',
	 );
	 $handler->display->display_options['style_options']['default'] = '-1';
	 $handler->display->display_options['style_options']['info'] = array(
	   'nid' => array(
	     'sortable' => 0,
	     'default_sort_order' => 'asc',
	     'align' => '',
	     'separator' => '',
	     'empty_column' => 0,
	   ),
	   'field_image' => array(
	     'sortable' => 1,
	     'default_sort_order' => 'asc',
	     'align' => '',
	     'separator' => '',
	     'empty_column' => 0,
	   ),
	   'title' => array(
	     'sortable' => 1,
	     'default_sort_order' => 'asc',
	     'align' => '',
	     'separator' => '',
	     'empty_column' => 0,
	   ),
	   'created' => array(
	     'sortable' => 0,
	     'default_sort_order' => 'asc',
	     'align' => '',
	     'separator' => '',
	     'empty_column' => 0,
	   ),
	   'published_at' => array(
	     'sortable' => 1,
	     'default_sort_order' => 'asc',
	     'align' => '',
	     'separator' => '',
	     'empty_column' => 0,
	   ),
	   'comment_count' => array(
	     'sortable' => 0,
	     'default_sort_order' => 'asc',
	     'align' => '',
	     'separator' => '',
	     'empty_column' => 0,
	   ),
	   'language' => array(
	     'sortable' => 0,
	     'default_sort_order' => 'asc',
	     'align' => '',
	     'separator' => '',
	     'empty_column' => 0,
	   ),
	   'edit_node' => array(
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
	 /* Encabezado: Global: Enlace */
	 $handler->display->display_options['header']['link']['id'] = 'link';
	 $handler->display->display_options['header']['link']['table'] = 'views';
	 $handler->display->display_options['header']['link']['field'] = 'link';
	 $handler->display->display_options['header']['link']['text'] = 'Add new content';
	 $handler->display->display_options['header']['link']['path'] = '/node/add';
	 /* Campo: Operaciones en masa: Revisión del contenido */
	 $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
	 $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_revision';
	 $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
	 $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
	 $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
	 $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
	 $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
	 $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
	 $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
	 $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
	   'action::pathauto_node_update_action' => array(
	     'selected' => 1,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::nodequeue_add_action' => array(
	     'selected' => 1,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_assign_owner_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::views_bulk_operations_delete_item' => array(
	     'selected' => 1,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::system_send_email_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::views_bulk_operations_script_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_save_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_make_unsticky_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_make_sticky_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_promote_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::views_bulk_operations_modify_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	     'settings' => array(
	       'show_all_tokens' => 1,
	       'display_values' => array(
	         '_all_' => '_all_',
	       ),
	     ),
	   ),
	   'action::views_bulk_operations_argument_selector_action' => array(
	     'selected' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	     'settings' => array(
	       'url' => '',
	     ),
	   ),
	   'action::twitter_actions_set_status_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_publish_action' => array(
	     'selected' => 1,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_unpromote_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::nodequeue_remove_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_unpublish_action' => array(
	     'selected' => 1,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	   'action::node_unpublish_by_keyword_action' => array(
	     'selected' => 0,
	     'postpone_processing' => 0,
	     'skip_confirmation' => 0,
	     'override_label' => 0,
	     'label' => '',
	   ),
	 );
	 /* Campo: Contenido: Nid */
	 $handler->display->display_options['fields']['nid']['id'] = 'nid';
	 $handler->display->display_options['fields']['nid']['table'] = 'node';
	 $handler->display->display_options['fields']['nid']['field'] = 'nid';
	 /* Campo: Contenido: Image */
	 $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
	 $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
	 $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
	 $handler->display->display_options['fields']['field_image']['label'] = 'Imagen';
	 $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
	 $handler->display->display_options['fields']['field_image']['type'] = 'lightbox2__lightbox__thumbnail__original';
	 $handler->display->display_options['fields']['field_image']['settings'] = array(
	   'image_style' => 'thumbnail',
	   'image_link' => '',
	 );
	 /* Campo: Contenido: Título */
	 $handler->display->display_options['fields']['title']['id'] = 'title';
	 $handler->display->display_options['fields']['title']['table'] = 'node';
	 $handler->display->display_options['fields']['title']['field'] = 'title';
	 $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
	 $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
	 /* Campo: Contenido: Fecha del envío */
	 $handler->display->display_options['fields']['created']['id'] = 'created';
	 $handler->display->display_options['fields']['created']['table'] = 'node';
	 $handler->display->display_options['fields']['created']['field'] = 'created';
	 $handler->display->display_options['fields']['created']['date_format'] = 'short';
	 /* Campo: Nodo: Published at */
	 $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
	 $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
	 $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
	 $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
	 $handler->display->display_options['fields']['published_at']['date_format'] = 'short';
	 /* Campo: Contenido: Cuenta de comentarios */
	 $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
	 $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
	 $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
	 $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
	 $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
	 $handler->display->display_options['fields']['comment_count']['separator'] = '';
	 /* Campo: Contenido: Idioma */
	 $handler->display->display_options['fields']['language']['id'] = 'language';
	 $handler->display->display_options['fields']['language']['table'] = 'node';
	 $handler->display->display_options['fields']['language']['field'] = 'language';
	 /* Campo: Contenido: Enlace de edición */
	 $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
	 $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
	 $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
	 $handler->display->display_options['fields']['edit_node']['label'] = '';
	 $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
	 $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
	 /* Campo: Contenido: Enlace de borrado */
	 $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
	 $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
	 $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
	 $handler->display->display_options['fields']['delete_node']['label'] = '';
	 $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
	 $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
	 /* Criterio de ordenación: Contenido: Fecha del envío */
	 $handler->display->display_options['sorts']['created']['id'] = 'created';
	 $handler->display->display_options['sorts']['created']['table'] = 'node';
	 $handler->display->display_options['sorts']['created']['field'] = 'created';
	 $handler->display->display_options['sorts']['created']['order'] = 'DESC';
	 /* Criterios de filtrado: Contenido: Publicado */
	 $handler->display->display_options['filters']['status']['id'] = 'status';
	 $handler->display->display_options['filters']['status']['table'] = 'node';
	 $handler->display->display_options['filters']['status']['field'] = 'status';
	 $handler->display->display_options['filters']['status']['value'] = '1';
	 $handler->display->display_options['filters']['status']['group'] = 1;
	 $handler->display->display_options['filters']['status']['exposed'] = TRUE;
	 $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
	 $handler->display->display_options['filters']['status']['expose']['label'] = 'Publicado';
	 $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
	 $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
	 $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
	 $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
	   2 => '2',
	   1 => 0,
	   3 => 0,
	   4 => 0,
	 );
	 /* Criterios de filtrado: Contenido: Tipo */
	 $handler->display->display_options['filters']['type']['id'] = 'type';
	 $handler->display->display_options['filters']['type']['table'] = 'node';
	 $handler->display->display_options['filters']['type']['field'] = 'type';
	 $handler->display->display_options['filters']['type']['value'] = array(
	   'blog' => 'blog',
	   'page' => 'page',
	 );
	 $handler->display->display_options['filters']['type']['exposed'] = TRUE;
	 $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
	 $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo';
	 $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
	 $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
	 $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
	 $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
	   2 => '2',
	   3 => '3',
	   4 => '4',
	   1 => 0,
	 );
	 $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
	 /* Criterios de filtrado: Contenido: Título */
	 $handler->display->display_options['filters']['title']['id'] = 'title';
	 $handler->display->display_options['filters']['title']['table'] = 'node';
	 $handler->display->display_options['filters']['title']['field'] = 'title';
	 $handler->display->display_options['filters']['title']['operator'] = 'contains';
	 $handler->display->display_options['filters']['title']['exposed'] = TRUE;
	 $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
	 $handler->display->display_options['filters']['title']['expose']['label'] = 'Título';
	 $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
	 $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
	 $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
	 $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
	   2 => '2',
	   3 => '3',
	   4 => '4',
	   1 => 0,
	 );
	 /* Criterios de filtrado: Contenido: Idioma */
	 $handler->display->display_options['filters']['language']['id'] = 'language';
	 $handler->display->display_options['filters']['language']['table'] = 'node';
	 $handler->display->display_options['filters']['language']['field'] = 'language';
	 $handler->display->display_options['filters']['language']['value'] = array(
	   '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
	   '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
	   'und' => 'und',
	   'en' => 'en',
	   'es' => 'es',
	 );
	 $handler->display->display_options['filters']['language']['exposed'] = TRUE;
	 $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
	 $handler->display->display_options['filters']['language']['expose']['label'] = 'Idioma';
	 $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
	 $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
	 $handler->display->display_options['filters']['language']['expose']['remember'] = TRUE;
	 $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
	   2 => '2',
	   1 => 0,
	   3 => 0,
	   4 => 0,
	 );

	 /* Display: Page */
	 $handler = $view->new_display('page', 'Page', 'page');
	 $handler->display->display_options['path'] = 'admin/admin-content';
	 $handler->display->display_options['menu']['type'] = 'normal';
	 $handler->display->display_options['menu']['title'] = 'Listado contenidos';
	 $handler->display->display_options['menu']['weight'] = '0';
	 $handler->display->display_options['menu']['name'] = 'management';
	 $handler->display->display_options['menu']['context'] = 0;
	 $handler->display->display_options['menu']['context_only_inline'] = 0;
	 $translatables['admin_content'] = array(
	   t('Master'),
	   t('Admin - Content'),
	   t('más'),
	   t('Aplicar'),
	   t('Reiniciar'),
	   t('Ordenar por'),
	   t('Asc'),
	   t('Desc'),
	   t('Elementos por página'),
	   t('- Todos -'),
	   t('Desplazamiento'),
	   t('« primera'),
	   t('‹ anterior'),
	   t('siguiente ›'),
	   t('última »'),
	   t('Add new content'),
	   t('Nid'),
	   t('Imagen'),
	   t('Título'),
	   t('Fecha del envío'),
	   t('Published at'),
	   t('Comments'),
	   t('.'),
	   t('Idioma'),
	   t('Edit'),
	   t('Delete'),
	   t('Publicado'),
	   t('Tipo'),
	   t('Page'),
	 );
	 

   	$views[$view->name] = $view;

  

   return $views;
 }