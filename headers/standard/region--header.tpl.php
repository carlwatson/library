<header class="header-standard">
  <div class="top-bar grid-x">
    <div class="top-bar-1 top-bar-sub small-12 align-right">
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
    </div>
    <div class="top-bar-2 top-bar-sub small-12 align-right">
      <div class="social-menu-block top-bar-menu clearfix">
        <?php print drupal_render($sybase2_extras_social_menu); ?>
      </div>
    </div>
    <div class="top-bar-3 top-bar-sub small-12 align-right">
      <div class="translate-block clearfix">
        <?php print drupal_render($gtranslate_gtranslate); ?>
      </div>
    </div>
  </div>

  <div class="second-top-bar">
    <div class="grid-x">
      <div class="logo-row cell small-12 medium-12">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
          </a>
        <?php endif; ?>
      </div>
    </div>
    <div class="grid-x align-center">
      <div class="nav-row cell align-center small-6 large-12">
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

