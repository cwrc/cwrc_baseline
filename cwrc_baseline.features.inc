<?php
/**
 * @file
 * cwrc_baseline.features.inc
 */

/**
 * Implements hook_block_islandora_options_config_features_default_settings().
 */
function cwrc_baseline_block_islandora_options_config_features_default_settings() {
  return array(
  0 => array(
    'cmodel' => 'islandora:sp-audioCModel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  1 => array(
    'cmodel' => 'islandora:sp_basic_image',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  2 => array(
    'cmodel' => 'islandora:pageCModel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  3 => array(
    'cmodel' => 'cwrc:documentCModel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  4 => array(
    'cmodel' => 'cwrc:schemaCModel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  5 => array(
    'cmodel' => 'islandora:sp_large_image_cmodel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  6 => array(
    'cmodel' => 'islandora:markupeditorschemaCModel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  7 => array(
    'cmodel' => 'islandora:sp_pdf',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  8 => array(
    'cmodel' => 'islandora:sp_videoCModel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
  9 => array(
    'cmodel' => 'islandora:sp-audioCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  10 => array(
    'cmodel' => 'islandora:sp_basic_image',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  11 => array(
    'cmodel' => 'islandora:pageCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  12 => array(
    'cmodel' => 'cwrc:documentCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  13 => array(
    'cmodel' => 'cwrc:schemaCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  14 => array(
    'cmodel' => 'cwrc:person-entityCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  15 => array(
    'cmodel' => 'cwrc:organization-entityCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  16 => array(
    'cmodel' => 'cwrc:title-entityCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  17 => array(
    'cmodel' => 'cwrc:place-entityCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  18 => array(
    'cmodel' => 'islandora:OACCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  19 => array(
    'cmodel' => 'islandora:sp_large_image_cmodel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  20 => array(
    'cmodel' => 'islandora:markupeditorschemaCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  21 => array(
    'cmodel' => 'islandora:sp_pdf',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  22 => array(
    'cmodel' => 'islandora:sp_videoCModel',
    'delta' => 'recent_stamps',
    'module' => 'cwrc_workflow',
  ),
  23 => array(
    'cmodel' => 'islandora:pageCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  24 => array(
    'cmodel' => 'islandora:sp_basic_image',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  25 => array(
    'cmodel' => 'islandora:sp_videoCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  26 => array(
    'cmodel' => 'islandora:bookCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  27 => array(
    'cmodel' => 'islandora:sp-audioCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  28 => array(
    'cmodel' => 'islandora:sp_large_image_cmodel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  29 => array(
    'cmodel' => 'islandora:criticalEditionCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  30 => array(
    'cmodel' => 'islandora:criticalEditionCModelPage',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  31 => array(
    'cmodel' => 'cwrc:citationCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  32 => array(
    'cmodel' => 'islandora:sp_pdf',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  33 => array(
    'cmodel' => 'ir:citationCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  34 => array(
    'cmodel' => 'ir:thesisCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  35 => array(
    'cmodel' => 'islandora:compoundCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  36 => array(
    'cmodel' => 'islandora:criticalEditionContainerCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  37 => array(
    'cmodel' => 'islandora:transcriptionCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  38 => array(
    'cmodel' => 'cwrc:schemaCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  39 => array(
    'cmodel' => 'cwrc:person-entityCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  40 => array(
    'cmodel' => 'cwrc:organization-entityCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  41 => array(
    'cmodel' => 'cwrc:title-entityCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  42 => array(
    'cmodel' => 'cwrc:place-entityCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
  43 => array(
    'cmodel' => 'cwrc:documentCModel',
    'delta' => 'citation',
    'module' => 'islandora_blocks',
  ),
);
}

/**
 * Implements hook_ctools_plugin_api().
 */
function cwrc_baseline_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "borealis_sb" && $api == "borealis_sb_default") {
    return array("version" => "1");
  }
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_de_contextual_help_config_features_default_settings().
 */
function cwrc_baseline_de_contextual_help_config_features_default_settings() {
  return array(
  0 => array(
    'url_pattern' => '*',
    'link_destination' => 'http://cwrc.ca/Documentation/[cwrc:group-role]',
    'weight' => -10,
    'status' => 1,
  ),
  1 => array(
    'url_pattern' => 'node/*/dashboard',
    'link_destination' => 'http://cwrc.ca/Documentation/[cwrc:group-role]/#project-dashboard',
    'weight' => -9,
    'status' => 1,
  ),
);
}

/**
 * Implements hook_image_default_styles().
 */
function cwrc_baseline_image_default_styles() {
  $styles = array();

  // Exported image style: 185px_by_185px.
  $styles['185px_by_185px'] = array(
    'label' => '185px by 185px',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 185,
          'height' => 185,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: default_img_small.
  $styles['default_img_small'] = array(
    'label' => 'default img small',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 82,
          'height' => 82,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_img.
  $styles['event_img'] = array(
    'label' => 'Event Img',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 325,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon.
  $styles['icon'] = array(
    'label' => 'Icon (64x64)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 64,
          'height' => 64,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: view_rectangle_img.
  $styles['view_rectangle_img'] = array(
    'label' => 'view rectangle img',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 645,
          'height' => 345,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
