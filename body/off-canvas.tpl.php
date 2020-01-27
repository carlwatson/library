<?php
/**
 * Off Canvas menu structure
 */
?>
<div class="off-canvas position-right" id="offCanvas" data-off-canvas data-transition="overlap">

  <!-- Close button -->
  <button class="close-button" aria-label="Close menu" type="button" data-close>
    <span aria-hidden="true"><i class='fa fa-close'></i></span>
  </button>

  <!-- Menu -->
  <?php if ($primary_nav): ?>
    <?php $nicemenu = module_invoke('nice_menus', 'block_view', '1');
    print render($nicemenu['content']); ?>
    <?php $nicemenu2 = module_invoke('nice_menus', 'block_view', '2');
    print render($nicemenu2['content']); ?>

  <?php endif; ?>


</div>
