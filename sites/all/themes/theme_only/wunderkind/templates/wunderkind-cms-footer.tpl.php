<div id="back-to-top"><a href="#"><i class="ion-arrow-up-b ion-3x"></i></a></div>    
<!-- Start Footer -->
<footer id="footer">
  <div class="col-lg-12 text-center">
    <div class="back-to-top">
      <i class="fa fa-angle-double-up"></i>
    </div>
  </div>
  <div class="container text-center">
    <div class="row">
      <div class="col-md-12 footer-logo text-white">
          <?php if($title): ?>
            <?php print $title; ?>
          <?php else: ?>
            <a href="<?php print url('<front>'); ?>"><h4 class="white"><?php print variable_get('site_name', ''); ?></h4></a>
          <?php endif;?>
      </div>
      <div class="footer-info">
        <p class="footer-copyright white">
          <?php if($content): ?>
            <?php print $content; ?>
          <?php else: ?>
            <?php print t('Copyright'); ?> © <?php print date('Y'); ?> <a href="<?php print url('<front>'); ?>"><?php print variable_get('site_name', ''); ?></a>. <?php print t('All Rights Reserved.'); ?>
          <?php endif;?>
        </p>
      </div>
    </div>
  </div>
</footer>