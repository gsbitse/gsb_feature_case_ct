<?php
/**
 * @file
 * gsb_feature_case_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_case_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_topics|node|case|teaser_listing';
  $field_group->group_name = 'group_wrapper_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case';
  $field_group->mode = 'teaser_listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topic',
    'weight' => '7',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_academic_area_unlimited',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Topic',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_topics|node|case|teaser_listing'] = $field_group;

  return $export;
}