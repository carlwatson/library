<?php

$view = new view();
$view->name = 'calendar';
$view->description = '';
$view->tag = 'Calendar';
$view->base_table = 'node';
$view->human_name = 'Calendar';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'upcoming-events-sidebar';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'event_type_tid' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 1,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          1 => 'vocabulary',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'group_filter' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 1,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'team_filter' => array(
    'bef_format' => 'bef',
    'more_options' => array(
      'bef_select_all_none' => 0,
      'bef_collapsible' => 1,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'secondary_label' => NULL,
  'collapsible_label' => NULL,
  'combine_rewrite' => NULL,
  'reset_label' => NULL,
  'bef_filter_description' => NULL,
  'any_label' => NULL,
  'filter_rewrite_values' => NULL,
);
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['date_id'] = 'month';
$handler->display->display_options['style_plugin'] = 'calendar_style';
$handler->display->display_options['style_options']['name_size'] = '3';
$handler->display->display_options['style_options']['with_weekno'] = '0';
$handler->display->display_options['style_options']['multiday_theme'] = '1';
$handler->display->display_options['style_options']['theme_style'] = '1';
$handler->display->display_options['style_options']['max_items'] = '0';
$handler->display->display_options['row_plugin'] = 'calendar_entity';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['event_date']['id'] = 'event_date';
$handler->display->display_options['fields']['event_date']['table'] = 'field_data_event_date';
$handler->display->display_options['fields']['event_date']['field'] = 'event_date';
$handler->display->display_options['fields']['event_date']['label'] = '';
$handler->display->display_options['fields']['event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_date']['settings'] = array(
  'format_type' => 'time_only',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['event_date']['group_rows'] = FALSE;
$handler->display->display_options['fields']['event_date']['delta_offset'] = '0';
/* Sort criterion: Content: Date -  start date (event_date) */
$handler->display->display_options['sorts']['event_date_value']['id'] = 'event_date_value';
$handler->display->display_options['sorts']['event_date_value']['table'] = 'field_data_event_date';
$handler->display->display_options['sorts']['event_date_value']['field'] = 'event_date_value';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
/* Filter criterion: Content: Event Type (event_type) */
$handler->display->display_options['filters']['event_type_tid']['id'] = 'event_type_tid';
$handler->display->display_options['filters']['event_type_tid']['table'] = 'field_data_event_type';
$handler->display->display_options['filters']['event_type_tid']['field'] = 'event_type_tid';
$handler->display->display_options['filters']['event_type_tid']['group'] = 2;
$handler->display->display_options['filters']['event_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['event_type_tid']['expose']['operator_id'] = 'event_type_tid_op';
$handler->display->display_options['filters']['event_type_tid']['expose']['label'] = 'Event Type';
$handler->display->display_options['filters']['event_type_tid']['expose']['operator'] = 'event_type_tid_op';
$handler->display->display_options['filters']['event_type_tid']['expose']['identifier'] = 'event_type';
$handler->display->display_options['filters']['event_type_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['event_type_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  8 => 0,
  11 => 0,
  9 => 0,
  10 => 0,
  6 => 0,
  7 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['event_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['event_type_tid']['vocabulary'] = 'event-type';
/* Filter criterion: Schoolyard: Groups */
$handler->display->display_options['filters']['group_filter']['id'] = 'group_filter';
$handler->display->display_options['filters']['group_filter']['table'] = 'og_membership';
$handler->display->display_options['filters']['group_filter']['field'] = 'group_filter';
$handler->display->display_options['filters']['group_filter']['group'] = 2;
$handler->display->display_options['filters']['group_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['group_filter']['expose']['operator_id'] = 'group_filter_op';
$handler->display->display_options['filters']['group_filter']['expose']['label'] = 'Groups';
$handler->display->display_options['filters']['group_filter']['expose']['operator'] = 'group_filter_op';
$handler->display->display_options['filters']['group_filter']['expose']['identifier'] = 'group_filter';
$handler->display->display_options['filters']['group_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['group_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  8 => 0,
  11 => 0,
  9 => 0,
  10 => 0,
  6 => 0,
  7 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
/* Filter criterion: Schoolyard: Teams */
$handler->display->display_options['filters']['team_filter']['id'] = 'team_filter';
$handler->display->display_options['filters']['team_filter']['table'] = 'og_membership';
$handler->display->display_options['filters']['team_filter']['field'] = 'team_filter';
$handler->display->display_options['filters']['team_filter']['group'] = 2;
$handler->display->display_options['filters']['team_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['team_filter']['expose']['operator_id'] = 'team_filter_op';
$handler->display->display_options['filters']['team_filter']['expose']['label'] = 'Teams';
$handler->display->display_options['filters']['team_filter']['expose']['operator'] = 'team_filter_op';
$handler->display->display_options['filters']['team_filter']['expose']['identifier'] = 'team_filter';
$handler->display->display_options['filters']['team_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['team_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  8 => 0,
  11 => 0,
  9 => 0,
  10 => 0,
  6 => 0,
  7 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;

/* Display: Month */
$handler = $view->new_display('page', 'Month', 'month');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['date_id'] = 'month';
$handler->display->display_options['pager']['options']['link_format'] = 'clean';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'calendar_style';
$handler->display->display_options['style_options']['name_size'] = '3';
$handler->display->display_options['style_options']['mini'] = '0';
$handler->display->display_options['style_options']['with_weekno'] = '0';
$handler->display->display_options['style_options']['multiday_theme'] = '1';
$handler->display->display_options['style_options']['theme_style'] = '1';
$handler->display->display_options['style_options']['max_items'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'calendar_entity';
$handler->display->display_options['row_options']['colors']['legend'] = 'type';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
$handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_event_date.event_date_value' => 'field_data_event_date.event_date_value',
  'field_data_event_date.event_date_value2' => 'field_data_event_date.event_date_value2',
);
$handler->display->display_options['path'] = 'calendar/month';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Month';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Calendar';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Week */
$handler = $view->new_display('page', 'Week', 'week');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['date_id'] = 'week';
$handler->display->display_options['pager']['options']['link_format'] = 'clean';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'calendar_style';
$handler->display->display_options['style_options']['calendar_type'] = 'week';
$handler->display->display_options['style_options']['name_size'] = '3';
$handler->display->display_options['style_options']['mini'] = '0';
$handler->display->display_options['style_options']['with_weekno'] = '0';
$handler->display->display_options['style_options']['multiday_theme'] = '1';
$handler->display->display_options['style_options']['theme_style'] = '1';
$handler->display->display_options['style_options']['max_items'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'calendar_entity';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
$handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
$handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_event_date.event_date_value' => 'field_data_event_date.event_date_value',
  'field_data_event_date.event_date_value2' => 'field_data_event_date.event_date_value2',
);
$handler->display->display_options['path'] = 'calendar/week';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Week';
$handler->display->display_options['menu']['weight'] = '2';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Day */
$handler = $view->new_display('page', 'Day', 'day');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['date_id'] = 'day';
$handler->display->display_options['pager']['options']['link_format'] = 'clean';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'calendar_style';
$handler->display->display_options['style_options']['calendar_type'] = 'day';
$handler->display->display_options['style_options']['name_size'] = '3';
$handler->display->display_options['style_options']['mini'] = '0';
$handler->display->display_options['style_options']['with_weekno'] = '0';
$handler->display->display_options['style_options']['multiday_theme'] = '1';
$handler->display->display_options['style_options']['theme_style'] = '1';
$handler->display->display_options['style_options']['max_items'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'calendar_entity';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
$handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_event_date.event_date_value' => 'field_data_event_date.event_date_value',
  'field_data_event_date.event_date_value2' => 'field_data_event_date.event_date_value2',
);
$handler->display->display_options['path'] = 'calendar/day';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Day';
$handler->display->display_options['menu']['weight'] = '3';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Year */
$handler = $view->new_display('page', 'Year', 'year');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['date_id'] = 'year';
$handler->display->display_options['pager']['options']['link_format'] = 'clean';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'calendar_style';
$handler->display->display_options['style_options']['calendar_type'] = 'year';
$handler->display->display_options['style_options']['name_size'] = '1';
$handler->display->display_options['style_options']['mini'] = '0';
$handler->display->display_options['style_options']['with_weekno'] = '0';
$handler->display->display_options['style_options']['multiday_theme'] = '1';
$handler->display->display_options['style_options']['theme_style'] = '1';
$handler->display->display_options['style_options']['max_items'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'calendar_entity';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['event_date']['id'] = 'event_date';
$handler->display->display_options['fields']['event_date']['table'] = 'field_data_event_date';
$handler->display->display_options['fields']['event_date']['field'] = 'event_date';
$handler->display->display_options['fields']['event_date']['label'] = '';
$handler->display->display_options['fields']['event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_date']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['event_date']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_repeat_rule' => '',
);
$handler->display->display_options['fields']['event_date']['group_rows'] = FALSE;
$handler->display->display_options['fields']['event_date']['delta_offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
$handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_event_date.event_date_value' => 'field_data_event_date.event_date_value',
);
$handler->display->display_options['path'] = 'calendar/year';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Year';
$handler->display->display_options['menu']['weight'] = '4';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['date_id'] = 'mini';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'calendar_style';
$handler->display->display_options['style_options']['name_size'] = '1';
$handler->display->display_options['style_options']['mini'] = '1';
$handler->display->display_options['style_options']['with_weekno'] = '0';
$handler->display->display_options['style_options']['multiday_theme'] = '1';
$handler->display->display_options['style_options']['theme_style'] = '1';
$handler->display->display_options['style_options']['max_items'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'calendar_entity';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_event_date.event_date_value' => 'field_data_event_date.event_date_value',
  'field_data_event_date.event_date_value2' => 'field_data_event_date.event_date_value2',
);

/* Display: iCal */
$handler = $view->new_display('feed', 'iCal', 'feed_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'date_ical';
$handler->display->display_options['row_plugin'] = 'date_ical';
$handler->display->display_options['row_options']['date_field'] = 'field_data_event_date.event_date_value';
$handler->display->display_options['row_options']['summary_field'] = 'default_title';
$handler->display->display_options['row_options']['location_field'] = 'none';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Event Type (event_type) */
$handler->display->display_options['arguments']['event_type_tid']['id'] = 'event_type_tid';
$handler->display->display_options['arguments']['event_type_tid']['table'] = 'field_data_event_type';
$handler->display->display_options['arguments']['event_type_tid']['field'] = 'event_type_tid';
$handler->display->display_options['arguments']['event_type_tid']['default_action'] = 'access denied';
$handler->display->display_options['arguments']['event_type_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['event_type_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['event_type_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['event_type_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['event_type_tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['event_type_tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['event_type_tid']['validate_options']['vocabularies'] = array(
  'event-type' => 'event-type',
);
$handler->display->display_options['arguments']['event_type_tid']['validate_options']['type'] = 'tids';
$handler->display->display_options['arguments']['event_type_tid']['break_phrase'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Date -  start date (event_date) */
$handler->display->display_options['filters']['event_date_value']['id'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value']['table'] = 'field_data_event_date';
$handler->display->display_options['filters']['event_date_value']['field'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value']['operator'] = '>=';
$handler->display->display_options['filters']['event_date_value']['group'] = 1;
$handler->display->display_options['filters']['event_date_value']['granularity'] = 'second';
$handler->display->display_options['filters']['event_date_value']['default_date'] = 'now';
/* Filter criterion: Content: Date -  start date (event_date) */
$handler->display->display_options['filters']['event_date_value_1']['id'] = 'event_date_value_1';
$handler->display->display_options['filters']['event_date_value_1']['table'] = 'field_data_event_date';
$handler->display->display_options['filters']['event_date_value_1']['field'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value_1']['operator'] = '<=';
$handler->display->display_options['filters']['event_date_value_1']['group'] = 2;
$handler->display->display_options['filters']['event_date_value_1']['granularity'] = 'second';
$handler->display->display_options['filters']['event_date_value_1']['default_date'] = 'now';
/* Filter criterion: Content: Date - end date (event_date:value2) */
$handler->display->display_options['filters']['event_date_value2']['id'] = 'event_date_value2';
$handler->display->display_options['filters']['event_date_value2']['table'] = 'field_data_event_date';
$handler->display->display_options['filters']['event_date_value2']['field'] = 'event_date_value2';
$handler->display->display_options['filters']['event_date_value2']['operator'] = '>=';
$handler->display->display_options['filters']['event_date_value2']['group'] = 2;
$handler->display->display_options['filters']['event_date_value2']['default_date'] = 'now';
$handler->display->display_options['path'] = 'calendar/%/ical.ics';
$handler->display->display_options['displays'] = array(
  'default' => 0,
  'page_1' => 0,
  'page_2' => 0,
  'page_3' => 0,
  'page' => 0,
  'block_1' => 0,
  'block_2' => 0,
);

/* Display: Upcoming */
$handler = $view->new_display('block', 'Upcoming', 'block_2');
$handler->display->display_options['display_description'] = 'Upcoming events block';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 0;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'event_date_2' => array(
    'element_type' => 'div',
    'class' => 'views-field-event-date-2',
  ),
  'title' => array(
    'element_type' => 'div',
    'class' => 'views-field-title',
  ),
  'event_date_1' => array(
    'element_type' => 'div',
    'class' => 'views-field-event-date-1',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<a class="view-calendarlink" href="/calendar">View Full Calendar</a>';
$handler->display->display_options['footer']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['event_date']['id'] = 'event_date';
$handler->display->display_options['fields']['event_date']['table'] = 'field_data_event_date';
$handler->display->display_options['fields']['event_date']['field'] = 'event_date';
$handler->display->display_options['fields']['event_date']['label'] = '';
$handler->display->display_options['fields']['event_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_date']['settings'] = array(
  'format_type' => 'just_three_letter_month',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['event_date']['group_rows'] = FALSE;
$handler->display->display_options['fields']['event_date']['delta_offset'] = '0';
/* Field: Content: Date */
$handler->display->display_options['fields']['event_date_2']['id'] = 'event_date_2';
$handler->display->display_options['fields']['event_date_2']['table'] = 'field_data_event_date';
$handler->display->display_options['fields']['event_date_2']['field'] = 'event_date';
$handler->display->display_options['fields']['event_date_2']['label'] = '';
$handler->display->display_options['fields']['event_date_2']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['event_date_2']['alter']['text'] = '<div class="field-content"><div class=\'upcoming-event-month\'>[event_date]</div><div class=\'upcoming-event-day\'>[event_date_2]</div></div>';
$handler->display->display_options['fields']['event_date_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_date_2']['settings'] = array(
  'format_type' => 'just_day',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['event_date_2']['group_rows'] = FALSE;
$handler->display->display_options['fields']['event_date_2']['delta_offset'] = '0';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['event_date_1']['id'] = 'event_date_1';
$handler->display->display_options['fields']['event_date_1']['table'] = 'field_data_event_date';
$handler->display->display_options['fields']['event_date_1']['field'] = 'event_date';
$handler->display->display_options['fields']['event_date_1']['label'] = '';
$handler->display->display_options['fields']['event_date_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_date_1']['settings'] = array(
  'format_type' => 'time_only',
  'custom_date_format' => '',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['event_date_1']['group_rows'] = FALSE;
$handler->display->display_options['fields']['event_date_1']['delta_offset'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Date -  start date (event_date) */
$handler->display->display_options['filters']['event_date_value']['id'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value']['table'] = 'field_data_event_date';
$handler->display->display_options['filters']['event_date_value']['field'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value']['operator'] = '>=';
$handler->display->display_options['filters']['event_date_value']['granularity'] = 'second';
$handler->display->display_options['filters']['event_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['event_date_value']['add_delta'] = 'yes';

/* Display: Upcoming Homepage */
$handler = $view->new_display('block', 'Upcoming Homepage', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Upcoming Events';
$handler->display->display_options['display_description'] = 'Upcoming homepage events block';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jcarousel';
$handler->display->display_options['style_options']['wrap'] = '0';
$handler->display->display_options['style_options']['visible'] = '';
$handler->display->display_options['style_options']['responsive'] = 1;
$handler->display->display_options['style_options']['auto'] = '0';
$handler->display->display_options['style_options']['autoPause'] = 1;
$handler->display->display_options['style_options']['easing'] = '';
$handler->display->display_options['style_options']['vertical'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 0;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'event_date_1' => array(
    'element_type' => 'div',
    'class' => 'views-field-event-date-2',
  ),
  'title_1' => array(
    'element_type' => 'div',
    'class' => 'views-field-title',
  ),
  'event_location' => array(
    'element_type' => 'div',
    'class' => 'field--name-event-location',
  ),
  'body' => array(
    'element_type' => 'div',
    'class' => 'field--name-body',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<h2 class="pane-title">events
            <a href="/calendar" class="see-all">see all
              <div class="arrow-all">
                <div class="arrow">&gt;</div>
              </div>
            </a>
          </h2>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['event_date']['id'] = 'event_date';
$handler->display->display_options['fields']['event_date']['table'] = 'field_data_event_date';
$handler->display->display_options['fields']['event_date']['field'] = 'event_date';
$handler->display->display_options['fields']['event_date']['label'] = '';
$handler->display->display_options['fields']['event_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_date']['settings'] = array(
  'format_type' => 'just_three_letter_month',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['event_date']['group_rows'] = FALSE;
$handler->display->display_options['fields']['event_date']['delta_offset'] = '0';
/* Field: Content: Date */
$handler->display->display_options['fields']['event_date_1']['id'] = 'event_date_1';
$handler->display->display_options['fields']['event_date_1']['table'] = 'field_data_event_date';
$handler->display->display_options['fields']['event_date_1']['field'] = 'event_date';
$handler->display->display_options['fields']['event_date_1']['label'] = '';
$handler->display->display_options['fields']['event_date_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['event_date_1']['alter']['text'] = '<div class="field-content"><div class=\'upcoming-event-month\'>[event_date]</div><div class=\'upcoming-event-day\'>[event_date_1]</div></div>';
$handler->display->display_options['fields']['event_date_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_date_1']['settings'] = array(
  'format_type' => 'just_day',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'hide',
);
$handler->display->display_options['fields']['event_date_1']['group_rows'] = FALSE;
$handler->display->display_options['fields']['event_date_1']['delta_offset'] = '0';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['title_1']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
/* Field: Content: Event Location */
$handler->display->display_options['fields']['event_location']['id'] = 'event_location';
$handler->display->display_options['fields']['event_location']['table'] = 'field_data_event_location';
$handler->display->display_options['fields']['event_location']['field'] = 'event_location';
$handler->display->display_options['fields']['event_location']['label'] = '';
$handler->display->display_options['fields']['event_location']['element_label_colon'] = FALSE;
/* Field: Field: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Date -  start date (event_date) */
$handler->display->display_options['filters']['event_date_value']['id'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value']['table'] = 'field_data_event_date';
$handler->display->display_options['filters']['event_date_value']['field'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value']['operator'] = '>=';
$handler->display->display_options['filters']['event_date_value']['group'] = 1;
$handler->display->display_options['filters']['event_date_value']['granularity'] = 'second';
$handler->display->display_options['filters']['event_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['event_date_value']['add_delta'] = 'yes';
/* Filter criterion: Content: Date -  start date (event_date) */
$handler->display->display_options['filters']['event_date_value_1']['id'] = 'event_date_value_1';
$handler->display->display_options['filters']['event_date_value_1']['table'] = 'field_data_event_date';
$handler->display->display_options['filters']['event_date_value_1']['field'] = 'event_date_value';
$handler->display->display_options['filters']['event_date_value_1']['operator'] = '<=';
$handler->display->display_options['filters']['event_date_value_1']['group'] = 2;
$handler->display->display_options['filters']['event_date_value_1']['granularity'] = 'second';
$handler->display->display_options['filters']['event_date_value_1']['default_date'] = 'now';
$handler->display->display_options['filters']['event_date_value_1']['add_delta'] = 'yes';
/* Filter criterion: Content: Date - end date (event_date:value2) */
$handler->display->display_options['filters']['event_date_value2']['id'] = 'event_date_value2';
$handler->display->display_options['filters']['event_date_value2']['table'] = 'field_data_event_date';
$handler->display->display_options['filters']['event_date_value2']['field'] = 'event_date_value2';
$handler->display->display_options['filters']['event_date_value2']['operator'] = '>=';
$handler->display->display_options['filters']['event_date_value2']['group'] = 2;
$handler->display->display_options['filters']['event_date_value2']['granularity'] = 'second';
$handler->display->display_options['filters']['event_date_value2']['default_date'] = 'now';
$handler->display->display_options['filters']['event_date_value2']['add_delta'] = 'yes';
$handler->display->display_options['block_description'] = 'Upcoming Events';