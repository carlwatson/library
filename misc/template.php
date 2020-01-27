<?php

/**
 * Implements hook_preprocess_page().
 */
function sybase2_preprocess_page(&$variables) {
  //drupal_add_css('/profiles/schoolyard/modules/custom/sy_builder/sy_builder/vendor/font-awesome/css/font-awesome.min.css', array('every_page' => FALSE,'weight' => -100));
  $block_names = array(
    'sybase2_extras-sy_stats_block',
    'sybase2_extras-sy_video_header_block',
    'sybase2_extras-sy_footer_social_block',
    'sybase2_extras-juicer',
    'sybase2_extras-sy_highlight_block',
    'sybase2_extras-left_video_block',
    'sybase2_extras-full_image_with_overlay',
    'sybase2_extras-sy4_home_videos',
    'sybase2_extras-sy4_second_callout',
    'sybase2_extras-sy4_home_panel_3',
    'sybase2_extras-sy4_home_panel_2',
    'sybase2_extras-sy3_home_top_block',
    'sybase2_extras-sy7_callout_1',
    'sybase2_extras-sy8_callout_1',
    'sybase2_extras-social_menu',
    'sybase2_extras-sy_floating_block',
    'quicktabs-groups',
    'gtranslate-gtranslate',
    'sy_callouts-sy_callouts_block'
  );

  foreach ($block_names as $key => $block_name) {
    $module_delta = explode('-', $block_name);
    $module = $module_delta[0];
    $delta = $module_delta[1];
    $block = block_load($module, $delta);
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($block)));
    $block_name = $module . '_' . $delta;
    $variables[$block_name] = $renderable_array;
  }

  $variables['primary_nav'] = FALSE;
  if ($variables['main_menu']) {

    $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    $variables['primary_nav']['#theme_wrappers'] = ['menu_tree__primary'];
  }
  $main_menu_tree = menu_tree_all_data('main-menu');
  $variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);

  if (isset($variables['node']->field_layout_selector)) {
    $layout = $variables['node']->field_layout_selector[LANGUAGE_NONE][0]['value'];
    switch ($layout) {
      case 'full_width_builder':
        $variables['theme_hook_suggestions'][] = 'page__full_width';
        if ($variables['is_front']) {
          $variables['theme_hook_suggestions'][] = 'page__full_width__front';
        }
        break;
      case 'right_sidebar':
        $variables['theme_hook_suggestions'][] = 'page__right_sidebar';
        break;
      case 'left_sidebar':
        $variables['theme_hook_suggestions'][] = 'page__left_sidebar';
        break;
      case 'left_and_right_sidebar':
        // Default to page.tpl which has both left and right sidebars.
        break;
    }
  }

  if ($variables['node']->type != "") {
    $variables['template_files'][] = "page-node-" . $variables['node']->type;
  }

  if (isset($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
  }

  drupal_add_js('delete Drupal.behaviors.fixTabsOnClick', 'inline');
  // Trigger the resize event on front page to fix a sizing issue with MD slider.
  if (drupal_is_front_page()) {
    drupal_add_js('(function ($) {
$(document).ready(function() {
  window.setTimeout(
    function() {$(document).trigger("resize");   console.log("checkin");},
    500
  );
});

} )(jQuery);', array(
      'type' => 'inline',
      'scope' => 'footer',
      'every_page' => FALSE,
      'weight' => 10,
    ));
  }
  $variables['header_image'] = views_embed_view('header_image_display', 'block');
}

function sybase2_preprocess_region(&$variables)
{
  $variables['logo'] = theme_get_setting('logo');
  $variables['front_page'] = url();

  $block_names = array(
    'sy_multidomain-footer_left_one',
    'sy_multidomain-footer_left_two',
    'sy_multidomain-footer_center_one',
    'sy_multidomain-footer_center_two',
    'sy_multidomain-footer_right_one',
    'sy_multidomain-footer_right_two',
    'sy_multidomain-footer_image',
    'sy_multidomain-header_image',
    'sybase2_extras-social_menu',
  );

  foreach ($block_names as $key => $block_name) {
    $module_delta = explode('-', $block_name);
    $module = $module_delta[0];
    $delta = $module_delta[1];
    $block = block_load($module, $delta);
    $renderable_array = _block_get_renderable_array(_block_render_blocks(array($block)));
    $block_name = $module . '_' . $delta;
    $variables[$block_name] = $renderable_array;
  }
}

function sybase2_breadcrumb($variables) {
  $current_path = current_path();
  if (strpos($current_path, 'alendar/') > 0) {
    $exp = explode('/', $current_path);
    if (count($exp) > 1) {
      $variables['breadcrumb'][] = ucfirst($exp[1]) . ' View';
    }
  } elseif ($current_path == 'calendar') {
    $variables['breadcrumb'][] = 'Calendar';
  } else {
    $variables['breadcrumb'][] = drupal_get_title();
  }
  $breadcrumb = $variables['breadcrumb'];
  $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.

    $output .= '<ul class="breadcrumbs">';
    foreach ($breadcrumb as $item) {
      $output .= '<li>' . $item . '</li>';
    }
    $output .= '</ul>';
  }
  return $output;
}