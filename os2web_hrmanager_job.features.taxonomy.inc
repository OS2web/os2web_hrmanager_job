<?php
/**
 * @file
 * os2web_hrmanager_job.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_hrmanager_job_taxonomy_default_vocabularies() {
  return array(
    'os2web_hr_manager_job_position_categories' => array(
      'name' => 'OS2web HR-Manager Job - Position categories',
      'machine_name' => 'os2web_hr_manager_job_position_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
