<?php
/**
 * @file
 * os2web_hrmanager_job.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function os2web_hrmanager_job_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'os2web_hr_manager_job_list_page';
  $page->task = 'page';
  $page->admin_title = 'Job List Page';
  $page->admin_description = '';
  $page->path = 'job';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jobslist_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'os2web_hr_manager_job_list_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'job-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'robots' => array(
          'value' => array(
            'noindex' => 'noindex',
            'index' => 0,
            'follow' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
          ),
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'blogs-list' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'top-full-section' => NULL,
      'table-list' => NULL,
      'middle-full-section' => NULL,
      'bottom-full-section' => NULL,
      'middle' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'blogs-list' => array(
      'style' => 'naked',
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
    'top-full-section' => array(
      'style' => 'naked',
    ),
    'table-list' => array(
      'style' => 'naked',
    ),
    'middle-full-section' => array(
      'style' => 'naked',
    ),
    'bottom-full-section' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Vacancies';
  $display->uuid = '4ddd96a5-4af7-4e9a-9737-288324b61cfd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc910962-b2b3-4dcf-a3c8-289f8aeecda8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_hr_manager_job_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc910962-b2b3-4dcf-a3c8-289f8aeecda8';
    $display->content['new-dc910962-b2b3-4dcf-a3c8-289f8aeecda8'] = $pane;
    $display->panels['middle'][0] = 'new-dc910962-b2b3-4dcf-a3c8-289f8aeecda8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['os2web_hr_manager_job_list_page'] = $page;

  return $pages;

}
