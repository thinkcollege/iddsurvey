<?php
/**
 * @file
 * Drush integration for SurveyGizmo.
 */

/**
 * SurveyGizmo library URI.
 */
define('SURVEYGIZMO_API_PHP_VERSION', '0.5');
define('SURVEYGIZMO_API_PHP_DOWNLOAD_URI', 'https://github.com/profak/surveygizmo-api-php/archive/' . SURVEYGIZMO_API_PHP_VERSION . '.zip');
define('SURVEYGIZMO_PHP_DIRNAME', 'surveygizmo-api-php');

/**
 * Implements hook_drush_command().
 */
function surveygizmo_drush_command() {
  $items = array();

  $items['surveygizmo-library'] = array(
    'callback'    => 'drush_surveygizmo_library_download',
    'description' => dt('Download and install the SurveyGizmo PHP library.'),
    'bootstrap'   => DRUSH_BOOTSTRAP_DRUSH,
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function surveygizmo_drush_help($section) {
  switch ($section) {
    case 'drush:surveygizmo-library':
      return dt('Download and install the SurveyGizmo PHP Library');
  }
}

/**
 * Implements drush_MODULE_post_COMMAND().
 */
function drush_surveygizmo_post_pm_enable() {
  $modules = func_get_args();
  if (in_array('surveygizmo', $modules)) {
    drush_surveygizmo_library_download();
  }
}

/**
 * Command to download SurveyGizmo PHP Library.
 */
function drush_surveygizmo_library_download() {
  $path = 'sites/all/libraries';

  // Create the path if it does not exist.
  if (!is_dir($path)) {
    drush_op('mkdir', $path);
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }

  // Set the directory to the download location.
  $olddir = getcwd();
  chdir($path);

  // Download the zip archive.
  if ($filepath = drush_download_file(SURVEYGIZMO_API_PHP_DOWNLOAD_URI, SURVEYGIZMO_API_PHP_VERSION . '.zip')) {
    $filename = basename($filepath);
    $dirname = basename($filepath, '.zip');

    if (is_dir($dirname) || is_dir(SURVEYGIZMO_PHP_DIRNAME)) {
      drush_delete_dir($dirname, TRUE);
      drush_delete_dir(SURVEYGIZMO_PHP_DIRNAME, TRUE);
      drush_log(dt('A existing SurveyGizmo PHP library was deleted from @path', array('@path' => $path)), 'notice');
    }

    // Decompress the zip archive.
    drush_tarball_extract($filename);
    drush_move_dir(SURVEYGIZMO_PHP_DIRNAME . '-' . SURVEYGIZMO_API_PHP_VERSION, SURVEYGIZMO_PHP_DIRNAME, TRUE);
    drush_delete_dir(SURVEYGIZMO_API_PHP_VERSION);

    // Delete the zip archive.
    @chmod($filename, 0777);
    unlink($filename);
  }

  if (is_dir(SURVEYGIZMO_PHP_DIRNAME)) {
    drush_log(dt('SurveyGizmo PHP library has been installed in @path', array('@path' => $path)), 'success');
    chdir(SURVEYGIZMO_PHP_DIRNAME);
    drush_shell_exec('composer install');
  }
  else {
    drush_log(dt('Drush was unable to install the SurveyGizmo PHP library to @path', array('@path' => $path)), 'error');
  }

  // Set working directory back to the previous working directory.
  chdir($olddir);
}
