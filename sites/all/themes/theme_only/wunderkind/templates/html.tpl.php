<!DOCTYPE html>
<!--[if IE 7]>                  <html class="ie7 no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>     <![endif]-->
<!--[if lte IE 8]>              <html class="ie8 no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>     <![endif]-->
<!--[if (gte IE 9)|!(IE)]><!--> <html class="not-ie no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>  <!--<![endif]-->
<head>

  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width,initial-scale=1.0,maximum-scale=1.0,user-scalable=0">

  <?php print $styles; ?>

  <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
  <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
  <!--[if lt IE 9]>
    <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
    <script src="https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js"></script>
  <![endif]-->
  <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE): ?>
    <link rel="stylesheet" href="<?php print base_path() . path_to_theme(); ?>/theme_panel/theme_panel.css" type = "text/css">
    <link rel="stylesheet" href="<?php print base_path() . path_to_theme(); ?>/css/colors/blue.css" type = "text/css">
  <?php endif;?>
</head>
<body class="<?php print $classes; ?>"<?php print $attributes; ?> data-spy="scroll" data-target="#main-nav">

  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

  <?php print $scripts; ?>

  <?php print $login_account_links; ?>
  
  <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE): ?>
    <!-- Start Theme Panel Style Switcher -->
    <section id="theme-panel" class="panel-close">
        <a class="panel-btn"><i class="ion-gear-a icon-spin"></i></a>
        <div class="theme-panel-title">
            <h4>Style Switcher</h4>
        </div>
        <div class="colors-container">
            <p class="" style="line-height:0;">15 Color Skins</p>
            <a title="pink" class="color-switch pink"></a>
            <a title="blue-2" class="color-switch blue-2"></a>
            <a title="blue" class="color-switch blue"></a>
            <a title="purple" class="color-switch purple"></a>
            <a title="green" class="color-switch green"></a>
            <a title="yellow" class="color-switch yellow"></a>
            <a title="orange" class="color-switch orange"></a>
            <a title="red" class="color-switch red"></a>
            <a title="red-2" class="color-switch red-2"></a>
            <a title="red-3" class="color-switch red-3"></a>
            <a title="pink-2" class="color-switch pink-2"></a>
            <a title="midnight" class="color-switch midnight"></a>
            <a title="green-2" class="color-switch green-2"></a>
            <a title="beige" class="color-switch beige"></a>
            <a title="black" class="color-switch black"></a>
        </div>
        <div class="colors-container">
          <p class="" style="color:#999;font-size:11px;">These Color Skins are included inside the theme, and also you can easily create your own one! There are unlimited possibilities!</p>
        </div>
    </section>

    <script src="<?php print base_path() . path_to_theme(); ?>/theme_panel/theme_panel.js"></script>
  <?php endif;?>

</body>
</html>