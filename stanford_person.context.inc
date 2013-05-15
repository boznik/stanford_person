<?php
/**
 * @file
 * stanford_person.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_person_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_all_pages';
  $context->description = 'Context for all people pages';
  $context->tag = 'People';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people/all' => 'people/all',
        'people/all/*' => 'people/all/*',
        'stanford/people/all' => 'stanford/people/all',
        'stanford/people/all/*' => 'stanford/people/all/*',
        'stanford/people' => 'stanford/people',
        'stanford/people/*' => 'stanford/people/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-97b659f23ede1dba5aac22528491d2f9' => array(
          'module' => 'views',
          'delta' => '97b659f23ede1dba5aac22528491d2f9',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all people pages');
  t('People');
  $export['stanford_people_all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_faculty_pages';
  $context->description = 'Context for all faculty pages';
  $context->tag = 'People';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people/faculty' => 'people/faculty',
        'people/faculty/*' => 'people/faculty/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b38da907588eed2d09c10bdb381e5aaf' => array(
          'module' => 'views',
          'delta' => 'b38da907588eed2d09c10bdb381e5aaf',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all faculty pages');
  t('People');
  $export['stanford_people_faculty_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_staff_pages';
  $context->description = 'Context for all staff pages';
  $context->tag = 'People';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people/staff' => 'people/staff',
        'people/staff/*' => 'people/staff/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-stanford_person_staff-page' => array(
          'module' => 'views',
          'delta' => '-exp-stanford_person_staff-page',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all staff pages');
  t('People');
  $export['stanford_people_staff_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_people_student_pages';
  $context->description = 'Context for all student pages';
  $context->tag = 'People';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people/student' => 'people/student',
        'people/student/*' => 'people/student/*',
        'people/students' => 'people/students',
        'people/students/*' => 'people/students/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-442e92af913370af5bffd333a036ceaa' => array(
          'module' => 'views',
          'delta' => '442e92af913370af5bffd333a036ceaa',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for all student pages');
  t('People');
  $export['stanford_people_student_pages'] = $context;

  return $export;
}