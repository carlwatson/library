<?php
/**
 * Main content section shared across page templates.
 */
?>
<section id="content" class="cell auto">

  <?php if ($breadcrumb): ?>
  <div id="breadcrumb"><div class="cell small-12"><?php print $breadcrumb; ?></div></div>
  <?php endif; ?>

  <a id="main-content"></a>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h1 class="title" id="page-title">
      <?php print $title; ?>
    </h1>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($tabs): ?>
    <div class="tabs">
      <?php print render($tabs); ?>
    </div>
  <?php endif; ?>

  <?php if ($action_links): ?>
    <ul class="action-links">
      <?php print render($action_links); ?>
    </ul>
  <?php endif; ?>

  <?php print render($page['content']); ?>
  <?php print $feed_icons; ?>

</section> <!-- /#content -->