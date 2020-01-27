jQuery(function ($) {

  var stickyNav = function () {
    var scrollTop = $(window).scrollTop();
    if (scrollTop > 170) {
      $('body .floating-block').addClass('scrolled');
    } else {
      $('body .floating-block').removeClass('scrolled');
    }
  };


  stickyNav();

  $(window).scroll(function () {
    stickyNav();
  });

  $(".off-canvas ul.nice-menu li").removeClass('expanded').addClass('collapsed');

  $(".off-canvas ul.nice-menu li").each(function() {
    if ($(this).children('ul').length > 0) {
      $(this).addClass('submenu-parent');
    }
  });

  $("<i class='fa fa-chevron-right dropdown-icon'></i>").insertAfter("li.submenu-parent > a");
  $('.dropdown-icon').click(function () {
    var clicks = $(this).data('clicks');
    if (clicks) {
      $(this).closest("li").removeClass('expanded').addClass('collapsed');
      $(this).removeClass('fa-close').addClass('fa-chevron-right');
      //$("li :not(:has(this))").find(".submenu-parent").removeClass('expanded').addClass('collapsed');
    } else {
      $(this).closest("li").removeClass('collapsed').addClass('expanded');
      $(this).removeClass('fa-chevron-right').addClass('fa-close');
    }
    $(this).data("clicks", !clicks);
  });


  $('img, figure.image').addClass(
    function () {
      var floated = $(this).css('float');
      return floated ? 'img-' + floated : '';
    });


  $(".theme4 .front-grid-block .sy4-second-callout .sy4-second-callout-single").hover(function () {
    if ($(window).width() <= 900 && $(window).width() > 480) {
      $(this).find(".sy4-second-callout-title").animate({bottom: "188px"}, 300);
      $(this).find(".sy4-second-callout-overlay-text").animate({bottom: "160px"}, 300);
      $(this).find(".sy4-second-callout-bg-overlay").animate({bottom: "200px", height: "200px"}, 300);
      $(this).find(".sy4-second-callout-hover-text").animate({opacity: 1}, 300);
    } else {
      $(this).find(".sy4-second-callout-title").animate({bottom: "288px"}, 300);
      $(this).find(".sy4-second-callout-overlay-text").animate({bottom: "260px"}, 300);
      $(this).find(".sy4-second-callout-bg-overlay").animate({bottom: "300px", height: "300px"}, 300);
      $(this).find(".sy4-second-callout-hover-text").animate({opacity: 1}, 300);
    }
  }, function () {
    if ($(window).width() <= 900 && $(window).width() > 480) {
      $(this).find(".sy4-second-callout-title").animate({bottom: "84px"}, 300);
      $(this).find(".sy4-second-callout-overlay-text").animate({bottom: "56px"}, 300);
      $(this).find(".sy4-second-callout-bg-overlay").animate({bottom: "95px", height: "95px"}, 300);
      $(this).find(".sy4-second-callout-hover-text").animate({opacity: 0}, 300);
    } else {
      $(this).find(".sy4-second-callout-title").animate({bottom: "100px"}, 300);
      $(this).find(".sy4-second-callout-overlay-text").animate({bottom: "73px"}, 300);
      $(this).find(".sy4-second-callout-bg-overlay").animate({bottom: "115px", height: "115px"}, 300);
      $(this).find(".sy4-second-callout-hover-text").animate({opacity: 0}, 300);
    }
  });

  /*$('.bef-select-as-checkboxes-fieldset').each(function(){
   if($(this).find('label').length == 0){
   $('.views-exposed-form').hide();
   }
   });*/

  var winHeight = $(window).height();
  var headHeight = $('header').height();
  var footHeight = $('footer').height();
  $('.image-overlay').height(winHeight - headHeight);
  $('.image-section').height(winHeight - headHeight);
  $('.section-overlay').height(winHeight);
  var overlayHeight = $('.section-overlay').height();
  var gridHeight = overlayHeight / 12;
  $('#news-events-section').height(gridHeight * 11);
  $('#social-section').height(gridHeight * 11);


  $(".jcarousel-prev").addClass("fa fa-chevron-left");
  $(".jcarousel-next").addClass("fa fa-chevron-right");
  $(".theme2 .left-video-video > .video-filter").addClass("responsive-embed widescreen");
  $(".date-prev a").addClass("fa fa-chevron-left").html("&nbsp;");
  $(".date-next a").addClass("fa fa-chevron-right").html("&nbsp;");

  $("#news-event-toggle").click(function () {
    $(".section-overlay").toggle("slow");
  });

  $(".news-button").click(function () {
    $("#news-events-section").show("slow");
    $("#social-section").hide("slow");
    $(".social-button").removeClass("news-social-active");
    $(this).addClass("news-social-active");
  });

  $(".social-button").click(function () {
    $("#news-events-section").hide("slow");
    $("#social-section").show("slow");
    $(".news-button").removeClass("news-social-active");
    $(this).addClass("news-social-active");
  });

  $(".callouts-homepage-sy7").hover(function () {
    $(this).find(".callout-bg-image").css('background-color', '#004a91');
  }, function () {
    $(this).find(".callout-bg-image").css('background-color', 'black');
  });

  $(".callouts-homepage-sy8").hover(function () {
    $(this).find(".callout-bg-image img").animate({opacity: .5}, 300);
    $(this).find(".callout-text").animate({opacity: 1}, 300);
  }, function () {
    $(this).find(".callout-bg-image img").animate({opacity: 1}, 300);
    $(this).find(".callout-text").animate({opacity: 0}, 300);
  });

  var counter = 1;
  $('.entityform-sidebar-content .content').each(function (i, obj) {
    $(this).children('p').attr('data-open', 'box-' + counter);
    $(this).children('.field-name-insert-image').attr("id", 'box-' + counter);
    $(this).children('.field-name-insert-image').addClass("reveal");
    counter++;
  });

  // for phones
  if ($(window).width() < 1024) {
    $("html.theme7 .front .callout-row .callouts-homepage-sy7").click(function (e) {
      if ($(this).find(".callout-text").css("opacity") == 0) {
        e.preventDefault();
      }
    });
  }

  $('.page-my-portal #haiku-login-form').children('input[type="submit"]').addClass("button");

  if (typeof(CKEDITOR) !== 'undefined') {
    if (typeof(Drupal.settings.customStyleSets) == 'undefined') {
      Drupal.settings.customStyleSets = [];
    }
    var styles = [
      {name: 'Dark Gray Block', element: 'div', attributes: {'class': 'sidebar_dark_gray_background'}},
      {name: 'Light Gray Block', element: 'div', attributes: {'class': 'sidebar_gray_background'}},
      {name: 'Gold Block', element: 'div', attributes: {'class': 'sidebar_primary_background'}},
      {name: 'Secondary Button', element: 'p', attributes: {'class': 'secondary_button'}},
      {name: 'Button', element: 'p', attributes: {'class': 'button'}},
    ];
    styles = styles.concat(Drupal.settings.customStyleSets);
    CKEDITOR.addStylesSet('drupal', styles);
  }

  var newHeight = $(".top-bar-right .md-slide-wrap").height();
  $(".top-bar-left, .top-bar-right").height(newHeight);

  Drupal.behaviors.fixTabsOnClick = {
    attach: function (context, settings) {
      $('.quicktabs-tab', context).bind('switchtab', function (e) {
        // Fix video quicktabs.
        $(this).resize();
        $(this).parents().find('.quicktabs-tabpage.quicktabs-hide').each(function () {
          $(this).find('iframe').attr('src', $(this).find('iframe').attr('src'));
        });

        // The switchtab Event is triggered at the end of the quicktab click handler. This then triggers the masonry
        // layout with visible masonry elements.
        if (jQuery().masonry && $.isFunction(masonry)) {
          $('.masonry-processed', context).masonry(settings.masonry);
        }
      });
    }
  };


});