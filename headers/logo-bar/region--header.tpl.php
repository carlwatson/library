<?php

/**
 * @file
 * Default theme implementation to display a region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - region: The current template type, i.e., "theming hook".
 *   - region-[name]: The name of the region with underscores replaced with
 *     dashes. For example, the page_top region would have a region-page-top
 *     class.
 * - $region: The name of the region variable as defined in the theme's .info
 *     file.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<header class="header-logo-bar">

  <div class="top-bar align-right">

    <div class="search-block top-bar-menu">
      <?php $searchblock = module_invoke('search', 'block_view', 'search_form');
      print render($searchblock['content']); ?>
      <i class="fa fa-search" aria-hidden="true"></i>
    </div>
    <span class="toggler hide-for-large" data-toggle="offCanvas">☰</span>
    <div class="utility-menu top-bar-menu">
      <?php $util = module_invoke('nice_menus', 'block_view', '2');
      print render($util['content']); ?>
    </div>
    <div class="social-menu-block top-bar-menu clearfix">
      <?php print drupal_render($sybase2_extras_social_menu); ?>
    </div>
    <div class="translate-block clearfix">
      <?php print drupal_render($gtranslate_gtranslate); ?>
    </div>
  </div>

  <div class="second-top-bar">
    <div class="grid-x">
      <div class="logo-row cell small-12">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
          </a>
        <?php endif; ?>
      </div>
      <div class="nav-row cell align-center small-12">
        <nav id="main-menu">
          <?php
          $main = module_invoke('nice_menus', 'block_view', '1');
          print render($main['content']);
          ?>
        </nav> <!-- /#main-menu -->
      </div>
    </div>
  </div>
</header>

