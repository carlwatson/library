(function ($) {
  Drupal.behaviors.addGrid = {
    attach: function (context, settings) {
      $(".jcarousel-prev").addClass("fa fa-angle-left");
      $(".jcarousel-next").addClass("fa fa-angle-right");
      $(".view-front-grid .view-content").addClass("grid-x");
    }
  };

  Drupal.behaviors.mobileMenuArrow = {
    attach: function (context, settings) {
      $("<i class='fa fa-chevron-right dropdown-icon'></i>").insertAfter(".off-canvas li.menuparent > a");
      $("nav.responsive-menus-simple").show();
      $('.dropdown-icon').siblings("ul").css("cssText", "visibility: hidden !important;display: none !important;");

      $('.dropdown-icon').click(function () {
        var clicks = $(this).data('clicks');
        if (clicks) {
          $(this).siblings("ul").css("cssText", "visibility: hidden !important;display: none !important;");
          $(this).removeClass('fa-close').addClass('fa-chevron-right');
        } else {
          $(".off-canvas ul").find("ul.menuparent").css("cssText", "visibility: hidden !important;display: none !important;");
          $(this).siblings("ul").css("cssText", "visibility: visible !important;display: block !important;");
          $(this).removeClass('fa-chevron-right').addClass('fa-close');
        }
        $(this).data("clicks", !clicks);
      });
    }
  };

  Drupal.behaviors.newsletterGrid = {
    attach: function (context, settings) {
      $('.node-type-newsletter-issue #content').removeClass('large-9');
      $('.view-row-wrap').addClass('grid-x');
    }
  };

  Drupal.behaviors.headerScroll = {
    attach: function (context, settings) {
      $(window).scroll(function() {
        if ($(window).scrollTop() >= 120) {
          $('header.header-chameleon').addClass('header-two').removeClass('header-one');
        } else {
          $('header.header-chameleon').addClass('header-one').removeClass('header-two');
        }
      });
      $(window).scroll(function() {
        if ($(window).scrollTop() >= 20) {
          $('.logged-in header.header-chameleon').addClass('header-down').removeClass('header-admin');
        } else {
          $('.logged-in header.header-chameleon').addClass('header-admin').removeClass('header-down');
        }
      });
    }
  };

  Drupal.behaviors.addAttr = {
    attach: function (context, settings) {

      $('ul#nice-menu-1 li a').each(function () {
        var value = $( this ).text();
        $(this).attr('title', value);
      });
      $(".footer-right h2 a").removeAttr("href");
      $('.footer-right h2 a').replaceWith(function() {
        return $('<div/>', {
          html: this.innerHTML
        });
      });
      $(".footer-right input").focus(function(){
        $(this).parent().removeClass("not-focus");
        $(this).parent().addClass("focus");
      }).blur(function(){
        $(this).parent().removeClass("focus");
        $(this).parent().addClass("not-focus");
        $('.footer-right label').each(function() {
          $(this).insertAfter($(this).parent().find('input'));
        });
      });
      $('.footer-right .form-item input').on('keyup', function()
      {
        var self = $( this ),
          label = self.siblings('label');

        if ( self.val() != '' ) {
          label.addClass('active');
        } else {
          label.removeClass('active');
        }
      });
    }
  };

  Drupal.behaviors.formWindow = {
    attach: function (context, settings) {
      var $formWidth = $('.tabs.primary').width();
      var $form2 = $formWidth - 20;
      $(".node-type-webform .fieldset-wrapper").css({'max-width': $form2 +'px'});
    }
  };

  Drupal.behaviors.wysiywgSidebars = {
    attach: function (context, settings) {
      if(typeof(CKEDITOR) !== 'undefined') {
        if(typeof(Drupal.settings.customStyleSets) == 'undefined') {
          Drupal.settings.customStyleSets = [];
        }
        var styles = [
          { name: 'Dark Gray Block', element: 'div', attributes: { 'class': 'sidebar_dark_gray_background' } },
          { name: 'Light Gray Block', element: 'div', attributes: { 'class': 'sidebar_gray_background' } },
          { name: 'Primary Block', element: 'div', attributes: { 'class': 'sidebar_primary_background' } },
          { name: 'Secondary Button', element: 'p', attributes: { 'class': 'secondary_button' } },
          { name: 'Button', element: 'p', attributes: { 'class': 'button' } },
        ];
        styles = styles.concat(Drupal.settings.customStyleSets);
        CKEDITOR.addStylesSet( 'drupal', styles);
      }
    }
  };

  Drupal.behaviors.accordionArrows = {
    attach: function (context, settings) {
      $('.not-front .ui-accordion .ui-accordion-icons').prepend('<i class="fa fa-caret-right" aria-hidden="true"></i>');
      $('.not-front .ui-accordion .ui-accordion-icons').click(function () {
        var accClicks = $(this).data('clicks');
        if (accClicks) {
          $(this).find('i.fa').removeClass('fa-caret-down').addClass('fa-caret-right');
        } else {
          $(this).find('i.fa').removeClass('fa-caret-right').addClass('fa-caret-down');
        }
        $(this).data("clicks", !accClicks);
      });
    }
  };

  Drupal.behaviors.utilSearch = {
    attach: function (context, settings) {

      $(window).on("resize", function () {
        var position = $('header .top-bar .top-bar-menu ul.menu').width();
        $('header .top-bar .search-block').css('right', position + 20)
      }).resize();
    }
  };

  Drupal.behaviors.hosPopup = {
    attach: function (context, settings) {

      function deselect(e) {
        $('.builder-pop').slideFadeToggle(function() {
          e.removeClass('selected');
        });
      }

      $(function() {
        $('.pop-trigger').on('click', function() {
          if($(this).hasClass('selected')) {
            deselect($(this));
          } else {
            $(this).addClass('selected');
            $('.builder-pop').slideFadeToggle();
          }
          return false;
        });

        $('.pop-close, .builder-overlay').on('click', function() {
          deselect($('.pop-trigger'));
          return false;
        });
      });

      $.fn.slideFadeToggle = function(easing, callback) {
        return this.animate({ opacity: 'toggle', height: 'toggle' }, 'fast', easing, callback);
      };

    }
  };

})(jQuery);