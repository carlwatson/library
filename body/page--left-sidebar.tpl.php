<?php

/**
 * @file
 * SYBase2's theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template normally located in the
 * modules/system directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or profile/schoolyard/theme/custom/sybase2.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $hide_site_name: TRUE if the site name has been toggled off on the theme
 *   settings page. If hidden, the "element-invisible" class is added to make
 *   the site name visually hidden, but still accessible.
 * - $hide_site_slogan: TRUE if the site slogan has been toggled off on the
 *   theme settings page. If hidden, the "element-invisible" class is added to
 *   make the site slogan visually hidden, but still accessible.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['sidebar_first']: Items for the left sidebar region.
 * - $page['sidebar_second']: Items for the left sidebar region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see bartik_process_page()
 * @see html.tpl.php
 */
?>
<div id="page" class="page-left-sidebar">

  <?php include 'off-canvas.tpl.php' ?>

  <div class="off-canvas-content" data-off-canvas-content>

    <?php print render($page['header']); ?>

    <?php if ($node->field_section || $node->field_sectionr): ?>
      <div class="header-image-block section-block">
        <?php print views_embed_view('header_image_display', 'block'); ?>
        <div class="title"><h1 class="title-over-image" id="page-title">
            <?php print $title; ?>
          </h1></div>
      </div>
    <?php endif; ?>
    <?php if (current_path() == 'news' || current_path() == 'calendar' || drupal_match_path(current_path(), 'calendar/*') || current_path() == 'blog'): ?>
      <div class="header-image-block section-block">
        <?php print views_embed_view('header_image_display', 'block_3', arg(0)); ?>
        <div class="title"><h1 class="title-over-image" id="page-title">
            <?php print $title; ?>
          </h1></div>
      </div>
    <?php endif; ?>

    <main id="main">

      <?php if ($messages): ?>
        <div id="messages" class="grid-container">
          <div class="cell small-12">
            <?php print $messages; ?>
          </div>
        </div> <!-- /.section, /#messages -->
      <?php endif; ?>

      <div class="grid-x grid-container grid-padding-x fluid">
        <?php if ($page['sidebar_first']): ?>
          <div id="sidebar-first" class="first-sidebar cell large-3">
            <aside>
              <?php print render($page['sidebar_first']); ?>
            </aside>
          </div> <!-- /aside, /#sidebar-first -->
        <?php endif; ?>

        <?php include 'main-content.tpl.php' ?>

      </div>

    </main><!-- /#main-->
    <?php if ($page['footer']): ?>
      <?php print render($page['footer']); ?>
    <?php endif; ?>

  </div>
</div> <!-- /#page -->
