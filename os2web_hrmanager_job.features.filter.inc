<?php
/**
 * @file
 * os2web_hrmanager_job.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2web_hrmanager_job_filter_default_formats() {
  $formats = array();

  // Exported format: HR-Manager Job HTML.
  $formats['hr_manager_job_html'] = array(
    'format' => 'hr_manager_job_html',
    'name' => 'HR-Manager Job HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <b> <div>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
