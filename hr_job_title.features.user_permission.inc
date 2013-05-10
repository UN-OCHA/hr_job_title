<?php
/**
 * @file
 * hr_job_title.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_job_title_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer job_title vocabulary terms.
  $permissions['administer job_title vocabulary terms'] = array(
    'name' => 'administer job_title vocabulary terms',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
