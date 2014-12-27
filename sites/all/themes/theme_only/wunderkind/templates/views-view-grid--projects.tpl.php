<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
global $projects_categories;
?>

<div id="filters-container" class="cbp-l-filters-button">
  <div data-filter="*" class="cbp-filter-item-active cbp-filter-item"><?php print t('All'); ?><div class="cbp-filter-counter"></div></div>
  <?php foreach($projects_categories as $id => $category): if(!$id) continue; ?>
    <div data-filter=".<?php print $id; ?>" class="cbp-filter-item"><?php print $category; ?><div class="cbp-filter-counter"></div></div>
  <?php endforeach; ?>
</div>

<div id="grid-container" class="cbp-l-grid-projects">
  <ul class="grid cs-style-3">
    <?php foreach ($rows as $row_number => $columns): ?>
      <?php foreach ($columns as $column_number => $item): ?>
        <?php print $item; ?>
      <?php endforeach; ?>
    <?php endforeach; ?>
  </ul>
</div>