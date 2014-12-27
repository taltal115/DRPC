jQuery(function($){
    
  if(!Modernizr.touch && !navigator.userAgent.match(/iPad|iPhone|Android/i)) { 
    $.stellar();
  }

  $(document).ready(function(){
    
    full_height();

    $( ".login-links .panel-btn" ).click(function(){
      $( ".login-links" ).toggleClass( "panel-close", "panel-open", 800 );
      $( ".login-links" ).toggleClass( "panel-open", "panel-close", 400 );
      return false;
    });

  });

  window.onresize = function(event) {
    full_height();
  }

  function full_height() {
    $('.full-height').css({'height': $(window).height()});
  }

  /* ==============================================
  Liquid Slider - Home Text Slider
  =============================================== */
  $('#slider-home').liquidSlider({
      autoSlide:          true,
      autoSlideInterval:  4000,
      autoSlideControls:  true,
      forceAutoSlide: true,
      dynamicArrows: false,
      
    slideEaseFunction:'animate.css',
    slideEaseDuration:900,
    heightEaseDuration:900,
    animateIn:"bounceIn",
    animateOut:"bounceOut",
    callback: function() {
      var self = this;
      $('.slider-6-panel').each(function() {
        $(this).removeClass('animated ' + self.options.animateIn);
      });
    }
  });

  /* ==============================================
  Liquid Slider - Quotes Slider
  =============================================== */
  $('.liquid-slider:not(.processed)').liquidSlider({
    autoSlide:          true,
    autoSlideDirection: 'right',
    autoSlideInterval:  4000,
    autoSlideControls:  true,
    forceAutoSlide: true,
    autoHeight: false,
    dynamicArrows: true,
    slideEaseFunction:'animate.css',
    slideEaseDuration:500,
    heightEaseDuration:500,
    animateIn:"flipInX",
    animateOut:"fadeOut",
    callback: function() {
      var self = this;
      $('.slider-6-panel').each(function() {
        $(this).removeClass('animated ' + self.options.animateIn);
      });
    }
  });

  /* ==============================================
  Sticky Navbar
  =============================================== */

  $(document).ready(function(){
    $(".navbar").sticky({topSpacing:0});
    var $header = $('.header-top');
    $(window).scroll(function () {
       if(scrollY <= 0){
           $header.animate({
                opacity: 0
           }, 300);
       }
       if(scrollY > 0 && $header.is(':not(:animated)')){
           $header.animate({
                opacity: 0.9999
           }, 300);
        }
     });
  });
    
  /* ==============================================
  Navbar "hovernav" dropdown menu
  =============================================== */

  $(document).ready(function() {
    /*
  	"Hovernav" navbar dropdown on hover
  	Delete this segment if you don't want it, and delete the corresponding CSS in style.css
  	*/
  	var mq = window.matchMedia('(min-width: 768px)');
    if (mq.matches) {
      $('ul.navbar-nav li').addClass('hovernav');
    } else {
    	$('ul.navbar-nav li').removeClass('hovernav');
    };
  	/*
  	The addClass/removeClass also needs to be triggered
    on page resize <=> 768px
  	*/
    if (matchMedia) {
      var mq = window.matchMedia('(min-width: 768px)');
      mq.addListener(WidthChange);
      WidthChange(mq);
    }
  	function WidthChange(mq) {
      if (mq.matches) {
        $('ul.navbar-nav li').addClass('hovernav');
      } else {
        $('ul.navbar-nav li').removeClass('hovernav');
      }
    };
    
  });

  /* ==============================================
  Auto Close Responsive Navbar on Click
  =============================================== */

  function close_toggle() {
  if ($(window).width() <= 768) {
    $('.navbar-collapse a').on('click', function(){
        $('.navbar-collapse').collapse('hide');
    });
  }
  else {
   $('.navbar .navbar-default a').off('click');
  }
  }
  close_toggle();

  $(window).resize(close_toggle); 
   
  /* ==============================================
  WOW plugin triggers animation.css on scroll
  =============================================== */

  $(document).ready(function() {
    var isMobile = /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent);
    if (isMobile == false && !$("html").hasClass("no-csstransitions") && $(window).width() > 767) {
        
      $("[data-animation]").each(function() {
        $(this).addClass('wow ' + $(this).attr('data-animation'));
        if($(this).attr('data-animation-delay')) {
          $(this).attr('data-wow-delay', $(this).attr('data-animation-delay'));
        }
        $(this).removeAttr('data-animation').removeAttr('data-animation-delay');
      });

      var wow = new WOW(
        {
          boxClass:     'wow',      // animated element css class (default is wow)
          animateClass: 'animated', // animation css class (default is animated)
          offset:       150,          // distance to the element when triggering the animation (default is 0)
          mobile:       false        // trigger animations on mobile devices (true is default)
        }
      );
      wow.init();
    }
  });


  /* ==============================================
  Skill Bars
  =============================================== */

  $('.skill-col').waypoint(function() {
     jQuery('.skillbar').each(function(){
  		jQuery(this).find('.skillbar-bar').animate({
  			width:jQuery(this).attr('data-percent')
  		},2000);
  	});
  	
  	}, { offset: '100%' 
  });

  /* ==============================================
  Preloader
  =============================================== */

  jQuery(window).load(function(){
      jQuery("#preloader").delay(500).fadeOut(1000);
      jQuery(".preload-logo").addClass('fadeOutLeft');
  		jQuery(".back-logo").addClass('fadeOutRight');
  		jQuery(".preload-gif").addClass('fadeOutUp');
      
  });

  /* ==============================================
  Counter Up
  =============================================== */
   jQuery(document).ready(function($) {
              $('.counter').counterUp({
                  delay: 10,
                  time: 800
              });
          });
   
   
  jQuery(document).ready(function($){

  var height_video = $(window).width();
  var height_responsive = (height_video / 1.78011) + 1;
  $('.video_slide').css("height",height_responsive);



  $(window).resize(function() {
    var height_video = $(window).width();
    var height_responsive = (height_video / 1.78011) + 1;
    $('.video_slide').css("height",height_responsive);
    });
  });

  /* ==============================================
  Smooth scrolling to anchor 
  with offsetting an anchor to adjust for fixed header
  =============================================== */

  $(function() {
    $('a[href*=#]:not([href=#])').click(function() {
      if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') 
  && location.hostname == this.hostname) {

        var target = $(this.hash);
        target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
        if (target.length) {
          $('html,body').animate({
            scrollTop: target.offset().top - 70 //offsets for fixed header
          }, 1000);
          return false;
        }
      }
    });
    //Executed on page load with URL containing an anchor tag.
    if($(location.href.split("#")[1])) {
        var target = $('#'+location.href.split("#")[1]);
        if (target.length) {
          $('html,body').animate({
            scrollTop: target.offset().top - 70 //offset height of header here too.
          }, 1000);
          return false;
        }
      }
  });

    
  /* ==============================================
  Parallax
  =============================================== */
  $(document).ready(function(){
  	if (!navigator.userAgent.match(/iPad|iPhone|Android/i)) {
      $(window).stellar({ 
    	  horizontalScrolling: false,
    	  responsive: true
  	  });
  	}
  });

  	
  /* ==============================================
  Bootstrap Tooltip.js and Alert.js
  =============================================== */

  $(function () {
    $("[data-toggle='tooltip']").tooltip();  
    $(".alert").alert()

    var active = true;
    $('#collapse-init').click(function () {
        if (active) {
            active = false;
            $('.panel-collapse').collapse('show');
            $('.panel-title').attr('data-toggle', '');
            $(this).text('Close All');
        } else {
            active = true;
            $('.panel-collapse').collapse('hide');
            $('.panel-title').attr('data-toggle', 'collapse');
            $(this).text('Open All');
        }
    });
    $('#accordion').on('show.bs.collapse', function () {
        if (active) $('#accordion .in').collapse('hide');
    });
  });

  /* ==============================================
  Back to Top
  =============================================== */

  $(window).scroll(function(){
  	if($(window).scrollTop() > 300){
  			$("#back-to-top").fadeIn(600);
  		} else{
  			$("#back-to-top").fadeOut(600);
  		}
  	});
  	
  	$('#back-to-top, .back-to-top').click(function() {
  		  $('html, body').animate({ scrollTop:0 }, '1000');
  		  return false;
  	});


  /* ==============================================
  SmoothScroll (for Mouse Wheel) v1.2.1 
  =============================================== */
  (function () {
      var defaultOptions = {
          frameRate: 150,
          animationTime: 1200,
          stepSize: 120,
          pulseAlgorithm: !0,
          pulseScale: 8,
          pulseNormalize: 1,
          accelerationDelta: 20,
          accelerationMax: 1
      }, options = defaultOptions,
          direction = {
              x: 0,
              y: 0
          }, root = 0 <= document.compatMode.indexOf("CSS") || !document.body ? document.documentElement : document.body,
          que = [],
          pending = !1,
          lastScroll = +new Date;

      function scrollArray(a, b, c, d) {
          d || (d = 1E3);
          directionCheck(b, c);
          if (1 != options.accelerationMax) {
              var e = +new Date - lastScroll;
              e < options.accelerationDelta && (e = (1 + 30 / e) / 2, 1 < e && (e = Math.min(e, options.accelerationMax), b *= e, c *= e));
              lastScroll = +new Date
          }
          que.push({
              x: b,
              y: c,
              lastX: 0 > b ? 0.99 : -0.99,
              lastY: 0 > c ? 0.99 : -0.99,
              start: +new Date
          });
          if (!pending) {
              var q = a === document.body,
                  p = function (e) {
                      e = +new Date;
                      for (var h = 0, k = 0, l = 0; l < que.length; l++) {
                          var f = que[l],
                              m = e - f.start,
                              n = m >= options.animationTime,
                              g = n ? 1 : m / options.animationTime;
                          options.pulseAlgorithm && (g = pulse(g));
                          m = f.x * g - f.lastX >> 0;
                          g = f.y * g - f.lastY >> 0;
                          h += m;
                          k += g;
                          f.lastX += m;
                          f.lastY += g;
                          n && (que.splice(l, 1), l--)
                      }
                      q ? window.scrollBy(h, k) : (h && (a.scrollLeft += h), k && (a.scrollTop += k));
                      b || c || (que = []);
                      que.length ? requestFrame(p, a, d / options.frameRate + 1) : pending = !1
                  };
              requestFrame(p, a, 0);
              pending = !0
          }
      }

      function wheel(a) {
          var b = overflowingAncestor(a.target);
          if (!b || a.defaultPrevented) return !0;
          var c = a.wheelDeltaX || 0,
              d = a.wheelDeltaY || 0;
          c || d || (d = a.wheelDelta || 0);
          1.2 < Math.abs(c) && (c *= options.stepSize / 120);
          1.2 < Math.abs(d) && (d *= options.stepSize / 120);
          scrollArray(b, -c, -d);
          a.preventDefault()
      }
      var cache = {};
      setInterval(function () {
          cache = {}
      }, 1E4);
      var uniqueID = function () {
          var a = 0;
          return function (b) {
              return b.uniqueID || (b.uniqueID = a++)
          }
      }();

      function setCache(a, b) {
          for (var c = a.length; c--;) cache[uniqueID(a[c])] = b;
          return b
      }

      function overflowingAncestor(a) {
          var b = [],
              c = root.scrollHeight;
          do {
              var d = cache[uniqueID(a)];
              if (d) return setCache(b, d);
              b.push(a);
              if (c === a.scrollHeight) {
                  if (root.clientHeight + 10 < c) return setCache(b, document.body)
              } else if (a.clientHeight + 10 < a.scrollHeight && (overflow = getComputedStyle(a, "").getPropertyValue("overflow-y"), "scroll" === overflow || "auto" === overflow)) return setCache(b, a)
          } while (a = a.parentNode)
      }

      function directionCheck(a, b) {
          a = 0 < a ? 1 : -1;
          b = 0 < b ? 1 : -1;
          if (direction.x !== a || direction.y !== b) direction.x = a, direction.y = b, que = [], lastScroll = 0
      }
      var requestFrame = function () {
          return window.requestAnimationFrame || window.webkitRequestAnimationFrame || function (a, b, c) {
              window.setTimeout(a, c || 1E3 / 60)
          }
      }();

      function pulse_(a) {
          var b;
          a *= options.pulseScale;
          1 > a ? b = a - (1 - Math.exp(-a)) : (b = Math.exp(-1), a = 1 - Math.exp(-(a - 1)), b += a * (1 - b));
          return b * options.pulseNormalize
      }

      function pulse(a) {
          if (1 <= a) return 1;
          if (0 >= a) return 0;
          1 == options.pulseNormalize && (options.pulseNormalize /= pulse_(1));
          return pulse_(a)
      }
      if(Drupal.settings.wunderkind.smooth_scroll) {
        window.addEventListener("mousewheel", wheel, !1);
      }
  })();
      
});

/* ==============================================
Portfolio
=============================================== */

(function ($, window, document, undefined) {

    var gridContainer = $('#grid-container'),
        filtersContainer = $('#filters-container');

  // init cubeportfolio
    gridContainer.cubeportfolio({

        defaultFilter: '*',

        animationType: 'flipOut',

        gapHorizontal: 25,

        gapVertical: 25,

        gridAdjustment: 'responsive',

        caption: 'overlayBottomReveal',

        displayType: 'lazyLoading',

        displayTypeSpeed: 100,

        // lightbox
        lightboxDelegate: '.cbp-lightbox',
        lightboxGallery: true,
        lightboxTitleSrc: 'data-title',
        lightboxShowCounter: true,

        // singlePage popup
        singlePageDelegate: '.cbp-singlePage',
        singlePageDeeplinking: true,
        singlePageStickyNavigation: true,
        singlePageShowCounter: true,
        singlePageCallback: function (url, element) {

            // to update singlePage content use the following method: this.updateSinglePage(yourContent)
            var t = this;

            $.ajax({
                url: url,
                type: 'GET',
                dataType: 'html',
                timeout: 5000
            })
            .done(function(result) {
                t.updateSinglePage($(result).find('.project-node').parents('.nd-region').html());
                Drupal.attachBehaviors($(document));
            })
            .fail(function() {
                t.updateSinglePage("Error! Please refresh the page!");
            });

        },

        // single page inline
        singlePageInlineDelegate: '.cbp-singlePageInline',
        singlePageInlinePosition: 'above',
        singlePageInlineShowCounter: true,
        singlePageInlineInFocus: true,
        singlePageInlineCallback: function(url, element) {
            // to update singlePage Inline content use the following method: this.updateSinglePageInline(yourContent)
        }
    });

    // add listener for filters click
    filtersContainer.on('click', '.cbp-filter-item', function (e) {

        var me = $(this), wrap;

        // get cubeportfolio data and check if is still animating (reposition) the items.
        if ( !$.data(gridContainer[0], 'cubeportfolio').isAnimating ) {

            if ( filtersContainer.hasClass('cbp-l-filters-dropdown') ) {
                wrap = $('.cbp-l-filters-dropdownWrap');

                wrap.find('.cbp-filter-item').removeClass('cbp-filter-item-active');

                wrap.find('.cbp-l-filters-dropdownHeader').text(me.text());

                me.addClass('cbp-filter-item-active');
            } else {
                me.addClass('cbp-filter-item-active').siblings().removeClass('cbp-filter-item-active');
            }

        }

        // filter the items
        gridContainer.cubeportfolio('filter', me.data('filter'), function () {});

    });

    // activate counters
    gridContainer.cubeportfolio('showCounter', filtersContainer.find('.cbp-filter-item'));

})(jQuery, window, document);

(function ($) {

  /* ==============================================
  FlexSlider v2.2.2
  =============================================== */
  Drupal.behaviors.flex_slider = {
    attach: function (context, settings) {
      $('.flexslider:not(.flexslider-processed)', context).once('flexslider').flexslider({
        animation: "slide"
      });
    }
  };

  /* ==============================================
  Fit Vids
  =============================================== */
  Drupal.behaviors.video_fit = {
    attach: function (context, settings) {
      $(".video-holder", context).fitVids();
    }
  };

})(jQuery);