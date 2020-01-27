<?php

function site_specific_sy_builder_blocks_alter(&$builder_blocks) {
  $blocks = array_keys(sybase2_extras_block_info());
  foreach ($blocks as $block) {
    $builder_blocks[] = 'sybase2_extras-' . $block;
  }
  $builder_blocks[] = 'md_slider-homeslider';
  unset($builder_blocks['schoolyard_portal-my_portal_athletics']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_1']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_2']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_3']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_4']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_5']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_6']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_7']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_8']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_9']);
  unset($builder_blocks['schoolyard_sidebar-sidebar_region_0']);
  unset($builder_blocks['menu-main-menu']);
  unset($builder_blocks['menu-user-menu']);
  unset($builder_blocks['menu-utility-menu']);
}

function site_specific_menu_local_tasks_alter(&$data, $router_item, $root_path) {
  /*drupal_set_message('<pre>'.print_r($data).'</pre>');
  drupal_set_message('<pre>'.print_r($router_item).'</pre>');
  drupal_set_message('<pre>'.print_r($root_path).'</pre>');*/
  $calendar_paths = array('calendar','calendar/week','calendar/day','calendar/year');
  if(in_array($root_path, $calendar_paths)){
    $tabs = $data['tabs'][0]['output'];
    $new_order = array();
    $new_order[] = $tabs[2];
    $new_order[] = $tabs[1];
    $new_order[] = $tabs[0];
    $new_order[] = $tabs[3];
    $data['tabs'][0]['output'] = $new_order;
  }
}

/**
 * Implements hook_theme_registry_alter().
 */
function site_specific_theme_registry_alter(&$theme_registry) {
  global $theme;

  if (in_array($theme, array('adminimal'))) {
    if (array_search('file_aliases_preprocess_image',$theme_registry['image']['preprocess functions']) !== FALSE){
      $index = array_search('file_aliases_preprocess_image',$theme_registry['image']['preprocess functions']);
      unset($theme_registry['image']['preprocess functions'][$index]);
    }
  }
}