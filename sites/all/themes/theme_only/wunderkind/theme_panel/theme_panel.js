
/* ==============================================
Theme Panel Style Switcher
=============================================== */
jQuery(function($){
	$(document).ready(function() {
		$( "#theme-panel .panel-btn" ).click(function(){
			$( "#theme-panel" ).toggleClass( "panel-close", "panel-open", 800 );
			$( "#theme-panel" ).toggleClass( "panel-open", "panel-close", 400 );
			return false;
		});

		$('.color-switch').click(function(){
			var title = jQuery(this).attr('title');
      jQuery("link[href^='/sites/all/themes/wunderkind/css/colors/']").attr("href", "/sites/all/themes/wunderkind/css/colors/" + title + ".css");
		  return false;
	  });		
	});
});