<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
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
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<div id="preloader">
  <div class="preloader-container">
    <h4 class="preload-logo wow fadeInLeft"><?php print $site_name; ?></h4>
    <h4 class="back-logo wow fadeInRight"><?php print $site_slogan; ?></h4>
    <img alt = "" src="<?php print $base_path . path_to_theme(); ?>/img/preload.gif" class="preload-gif wow fadeInUp" alt = "">
  </div>
</div>
  <!--Start Home-->
<section id="home-demo" data-stellar-background-ratio="0.1" data-stellar-vertical-offset="">
  <div class="demo-overlay"></div> 
  
  <div class="home-container text-center">
      <div class="container demo-container">
        <div class="col-sm-12 demo-title wow flipInX animated" data-wow-delay="0.3s" style="visibility: visible;-webkit-animation-delay: 0.3s; -moz-animation-delay: 0.3s; animation-delay: 0.3s;">
            <h1 class="white" style="letter-spacing:-4px; line-height:0.9;">Wunderkind</h1>
            <h4 class="white" style="letter-spacing:-2px; line-height:0.3;">Demos, Demos, Demos</h4>
            <p class="white small-desc">We have created an awesome theme that will help you<br> create your websites quickly and easily.</p>
        </div>
    
        <div class="col-sm-3 col-xs-6 text-center wow flipInX animated" data-wow-delay="0.3s" style="visibility: visible;-webkit-animation-delay: 0.3s; -moz-animation-delay: 0.3s; animation-delay: 0.3s;">
            <div class="about-row">
                <a class="" href="<?php print $front_page; ?>">
                <img alt = "" class="img-responsive button grow" src="<?php print $base_path . path_to_theme(); ?>/img/demo1.png" style="background-color:transparent;">
                </a>
                <h4 class="white button shrink"><a href="<?php print $front_page; ?>" style="  color:#fff; line-height:0;">Demo #1</a></h4>
                <br>
                <p class="white button shrink"><a href="<?php print $front_page; ?>">Parallax Background</a></p>
            </div>
        </div>
        
        <div class="col-sm-3 col-xs-6 text-center wow flipInY animated" data-wow-delay="0.3s" style="visibility: visible;-webkit-animation-delay: 0.3s; -moz-animation-delay: 0.3s; animation-delay: 0.3s;">
            <div class="about-row">
                <a class="" href="/home/video-background">
                <img alt = "" class="img-responsive button grow" src="<?php print $base_path . path_to_theme(); ?>/img/demo2.png" style="background-color:transparent;">
                </a>
                <h4 class="white button shrink"><a href="/home/video-background" style="  color:#fff; line-height:0;">Demo #2</a></h4>
                <br>
                <p class="white button shrink"><a href="/home/video-background">Video Background</a></p>
            </div>
        </div>
        
        <div class="col-sm-3 col-xs-6 text-center wow flipInY animated" data-wow-delay="0.3s" style="visibility: visible;-webkit-animation-delay: 0.3s; -moz-animation-delay: 0.3s; animation-delay: 0.3s;">
            <div class="about-row">
                <a class="" href="/home/fullscreen-slider">
                <img alt = "" class="img-responsive button grow" src="<?php print $base_path . path_to_theme(); ?>/img/demo3.png" style="background-color:transparent;">
                </a>
                <h4 class="white button shrink"><a href="/home/fullscreen-slider" style="  color:#fff; line-height:0;">Demo #3</a></h4>
                <br>
                <p class="white button shrink"><a href="/home/fullscreen-slider">Fullscreen Slider</a></p>
            </div>
        </div>
        
        <div class="col-sm-3 col-xs-6 text-center wow flipInX animated" data-wow-delay="0.3s" style="visibility: visible;-webkit-animation-delay: 0.3s; -moz-animation-delay: 0.3s; animation-delay: 0.3s;">
            <div class="about-row">
                <a class="" href="/home/image-pattern">
                <img alt = "" class="img-responsive button grow" src="<?php print $base_path . path_to_theme(); ?>/img/demo4.png" style="background-color:transparent;">
                </a>
                <h4 class="white button shrink"><a href="/home/image-pattern" style="  color:#fff; line-height:0;">Demo #4</a></h4>
                <br>
                <p class="white button shrink"><a href="/home/image-pattern" style="">Image Pattern</a></p>
            </div>
        </div>
        
    </div>
      
  </div>
      
</section>