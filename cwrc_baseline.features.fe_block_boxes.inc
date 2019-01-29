<?php
/**
 * @file
 * cwrc_baseline.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cwrc_baseline_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CWRC copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'cwrc_copyright';
  $fe_block_boxes->body = '<h3 class="rtecenter">Canadian Writing Research Collaboratory</h3>

<p class="rtecenter"><strong>Email</strong>: <a href="mailto:cwrc@ualberta.ca">cwrc@ualberta.ca</a> - <strong>Twitter</strong>: <a href="https://twitter.com/cwrcproject">@CWRCproject</a></p>

<div class="rtecenter"><span style="font-size:12px">If not otherwise specified, all works are licensed under the Creative Commons Attribution - Noncommercial 4.0 International License.</span></div>

<p class="rtecenter"><strong><a href="/terms-and-conditions"><span style="font-size:12px">Terms and Conditions</span></a></strong></p>
';

  $export['cwrc_copyright'] = $fe_block_boxes;

  return $export;
}
