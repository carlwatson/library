jQuery(function ($) {
    $(document).ready(function () {

        $('.sy-promoter-close').bind('click', function (c) {
            $('.sy-promoter').hide();
        });

        if (!$(".view-header-image-display img").length) {

            $(".not-front").addClass("no-header-image");

        }

        $('.off-canvas-content .toggler').click(function () {
            if (!$(this).hasClass('style-applied')) {
                $('.is-drilldown .drilldown li a.parent_menu_item').each(function () {
                    var if_link = $(this).attr('data-href');
                    if (if_link != '') {
                        $(this).unbind('click');
                        $(this).attr('href', if_link);
                    }
                });
            }
        });
        $('.parent_menu_icon').each(function () {
            $(this).click(function () {

                if ($(this).siblings('ul').hasClass('is-active')) {
                    $(this).siblings('ul').find('.js-drilldown-back a').trigger('click');
                }
            });
        });

        $('.off-canvas .menu li.expanded').click(function () {
            $(this).toggleClass("custom-expanded");
        });

    });
    $(document).ready(function () {
        slider();
    });

    $(window).scroll(function () {
        slider();
    });

    function slider() {
        if (document.body.scrollTop < 500)
            $('.sy-promoter').stop().animate({right: '0'}, 1000);
        else
            $('.sy-promoter').stop().animate({right: '-150%'}, 1000);
    }
    
    $(".front .left-video-video > .video-filter").addClass("responsive-embed widescreen");
    $('.is-drilldown-submenu-parent').click(function () {
        $(this).children('.is-drilldown-submenu').slideToggle('slow');
    }).children('.is-drilldown-submenu').click(function (event) {
        event.stopPropagation();
    });
});