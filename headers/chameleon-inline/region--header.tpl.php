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
<header class="header-one header-chameleon-inline header-chameleon">
  <div class="title-bar" data-responsive-toggle="main-menu" data-hide-for="medium"></div>

  <div class="top-bar grid-x">

    <div class="logo-row small-12 large-2">
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
          <img class="logo" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
        </a>
      <?php endif; ?>
    </div>

    <div class="utility-row small-12 large-10">

      <span class="toggler" data-toggle="offCanvas">☰</span>

      <div class="search-block top-bar-menu">
        <?php $searchblock = module_invoke('search', 'block_view', 'search_form');
        print render($searchblock['content']); ?>
        <i class="fa fa-search" aria-hidden="true"></i>
      </div>

      <nav id="main-menu">
        <?php $nicemenu = module_invoke('nice_menus', 'block_view', '1');
        print render($nicemenu['content']); ?>
      </nav> <!-- /#main-menu -->

    </div>

  </div>
</header>
