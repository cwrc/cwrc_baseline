<?php
/**
 * @file
 * cwrc_baseline.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cwrc_baseline_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_person_entity'
  $field_bases['field_person_entity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_person_entity',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'pid' => array(
        0 => 'pid',
      ),
    ),
    'locked' => 0,
    'module' => 'islandora_object_field',
    'settings' => array(
      'content_models' => array(
        'cwrc:documentCModel' => 0,
        'cwrc:organization-entityCModel' => 0,
        'cwrc:person-entityCModel' => 'cwrc:person-entityCModel',
        'cwrc:place-entityCModel' => 0,
        'cwrc:schemaCModel' => 0,
        'cwrc:title-entityCModel' => 0,
        'ir:citationCModel' => 0,
        'ir:thesisCModel' => 0,
        'islandora:OACCModel' => 0,
        'islandora:bookCModel' => 0,
        'islandora:collectionCModel' => 0,
        'islandora:compoundCModel' => 0,
        'islandora:criticalApparatusCModel' => 0,
        'islandora:criticalEditionCModel' => 0,
        'islandora:criticalEditionCModelPage' => 0,
        'islandora:criticalEditionContainerCModel' => 0,
        'islandora:criticaleditionschemaCModel' => 0,
        'islandora:entityCModel' => 0,
        'islandora:eventCModel' => 0,
        'islandora:markupEditorCModel' => 0,
        'islandora:markupeditorschemaCModel' => 0,
        'islandora:organizationCModel' => 0,
        'islandora:pageCModel' => 0,
        'islandora:personCModel' => 0,
        'islandora:placeCModel' => 0,
        'islandora:sp-audioCModel' => 0,
        'islandora:sp_basic_image' => 0,
        'islandora:sp_large_image_cmodel' => 0,
        'islandora:sp_pdf' => 0,
        'islandora:sp_videoCModel' => 0,
        'islandora:transcriptionCModel' => 0,
        'islandora:versionableObjectCModel' => 0,
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'islandora_object_field',
  );

  return $field_bases;
}
