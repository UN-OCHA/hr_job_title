<?php
/**
 * @file
 * hr_job_title.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_job_title_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
