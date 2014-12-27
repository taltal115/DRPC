<section id="fixed-navbar">
	<nav class="navbar navbar-default navbar-static-top" role="navigation">
		<div class="container">
			<!-- Brand and toggle get grouped for better mobile display -->
			<div class="navbar-header">
				<button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#main-nav">
					<span class="sr-only"><?php print t('Toggle navigation'); ?></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
		    </button>
        <a class="navbar-brand" rel="home" href="<?php print url('<front>'); ?>" title="<?php print variable_get('site_name', ''); ?>">
          <?php print isset($logo) && $logo ? theme('image', array('path' => $logo)) : '<h3>' . variable_get('site_name', '') . '</h3>'; ?>
        </a>
			</div>

			<!-- Collect the nav links, forms, and other content for toggling -->
      <div class="collapse navbar-collapse" id="main-nav">
        <ul class="nav navbar-nav  navbar-right">
         <?php 
            foreach($rows as $row):
              $path = $homepage ? '#' . $row['attributes']['id'] : url('<front>', array('fragment' => preg_replace('/[^\p{L}\p{N}]/u', '-', $row['name'])));
              if(isset($row['settings']['dropdown_links']) && $row['settings']['dropdown_links']) { ?>
                <li class="dropdown">
                  <span class="dropdown-toggle" data-toggle="dropdown"><a href = "<?php print $path; ?>"><?php print t($row['name']); ?></a> <b class="caret"></b></span>
                  <ul class="dropdown-menu"> 
                  <?php
                    foreach ($row['settings'] as $key => $value):
                      if(strpos($key, 'menu_link_url') !== FALSE) {
                        $i = str_replace('menu_link_url_', '', $key);
                        $path = strpos($row['settings']['menu_link_url_' . $i], '#') === FALSE ? url($row['settings']['menu_link_url_' . $i]) : $row['settings']['menu_link_url_' . $i];
                        if(!$homepage && strpos($path, '#') !== FALSE) {
                          $path = url('<front>', array('fragment' => str_replace('#', '', $path)));
                        }
                        print '<li><a href="' . $path . '">' . t($row['settings']['menu_link_' . $i]) . '</a></li>';
                      }
                    endforeach;
                  ?>
                  </ul>
                </li>
              <?php }
              elseif(!isset($row['settings']['hide_menu']) || !$row['settings']['hide_menu']) {
                $path = $homepage ? '#' . $row['attributes']['id'] : url('<front>', array('fragment' => preg_replace('/[^\p{L}\p{N}]/u', '-', $row['name'])));
                print '<li><a href = "' . $path . '">' . t($row['name']) . '</a></li>';
              }
            endforeach;
          ?>
        </ul>
      </div><!-- /.navbar-collapse -->
		</div><!-- /.container -->
	</nav>
</section>