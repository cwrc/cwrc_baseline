<?php
/**
 * @file
 * cwrc_baseline.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cwrc_baseline_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_person_entity'
  $field_instances['user-user-field_person_entity'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This provides a link to your person page if it exists within CWRC.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'islandora_object_field',
        'settings' => array(),
        'type' => 'islandora_object_field_label_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_person_entity',
    'label' => 'My CWRC Page',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'islandora_object_field',
      'settings' => array(),
      'type' => 'islandora_object_field_autocomplete',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('My CWRC Page');
  t('This provides a link to your person page if it exists within CWRC.');

  return $field_instances;
}
