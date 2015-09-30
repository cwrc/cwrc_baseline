<?php
/**
 * @file
 * cwrc_baseline.borealis_sb_default.inc
 */

/**
 * Implements hook_default_semantic_wrapper().
 */
function cwrc_baseline_default_semantic_wrapper() {
  $export = array();

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'block_1';
  $semantic_wrapper->module = 'block';
  $semantic_wrapper->delta = '1';
  $semantic_wrapper->semantics = 'div';
  $export['block_1'] = $semantic_wrapper;

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'de_contextual_help_help_drop_down';
  $semantic_wrapper->module = 'de_contextual_help';
  $semantic_wrapper->delta = 'help_drop_down';
  $semantic_wrapper->semantics = 'none';
  $export['de_contextual_help_help_drop_down'] = $semantic_wrapper;

  return $export;
}
