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

<footer id="footer" class="grid-container fluid footer-3-3-3-3">
  <div id="footer-inner" class="grid-x">

    <div class="footer-top small-12">

      <?php print drupal_render($sy_multidomain_footer_image); ?>

    </div>

    <div class="footer-left footer-block small-12 medium-3">

      <?php print drupal_render($sy_multidomain_footer_left_one); ?>

    </div>

    <div class="footer-center footer-center1 footer-block small-12 medium-3">

      <?php print drupal_render($sy_multidomain_footer_center_one); ?>

    </div>

    <div class="footer-center footer-center2 footer-block small-12 medium-3">

      <?php print drupal_render($sy_multidomain_footer_center_two); ?>

    </div>

    <div class="footer-right footer-block small-12 medium-3">

      <?php print drupal_render($sy_multidomain_footer_right_one); ?>

    </div>
    <div class="footer-bottom footer-block small-12">Site by <a href="http://www.schoolyard.com" target="_blank">Schoolyard</a>
    </div>
  </div>
</footer>
