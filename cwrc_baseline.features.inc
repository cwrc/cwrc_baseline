<?php
/**
 * @file
 * cwrc_baseline.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwrc_baseline_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "borealis_sb" && $api == "borealis_sb_default") {
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
  1 => array(
    'rule_id' => 1,
    'url_pattern' => '*',
    'link_destination' => 'http://cwrc.ca/Documentation/public/',
    'weight' => 1,
    'status' => 1,
  ),
);
}

/**
 * Implements hook_image_default_styles().
 */
function cwrc_baseline_image_default_styles() {
  $styles = array();

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

  return $styles;
}
