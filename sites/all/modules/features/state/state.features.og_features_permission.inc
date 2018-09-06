<?php
/**
 * @file
 * state.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function state_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:state:add user'
  $permissions['node:state:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:administer group'
  $permissions['node:state:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:approve and deny subscription'
  $permissions['node:state:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:create individual content'
  $permissions['node:state:create individual content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:create individual_data content'
  $permissions['node:state:create individual_data content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:create individual_data_ma content'
  $permissions['node:state:create individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:create provider content'
  $permissions['node:state:create provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:create reporting_period content'
  $permissions['node:state:create reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete any individual content'
  $permissions['node:state:delete any individual content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete any individual_data content'
  $permissions['node:state:delete any individual_data content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete any individual_data_ma content'
  $permissions['node:state:delete any individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete any provider content'
  $permissions['node:state:delete any provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete any reporting_period content'
  $permissions['node:state:delete any reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete own individual content'
  $permissions['node:state:delete own individual content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete own individual_data content'
  $permissions['node:state:delete own individual_data content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete own individual_data_ma content'
  $permissions['node:state:delete own individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete own provider content'
  $permissions['node:state:delete own provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:delete own reporting_period content'
  $permissions['node:state:delete own reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:manage members'
  $permissions['node:state:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:manage permissions'
  $permissions['node:state:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:manage roles'
  $permissions['node:state:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:subscribe'
  $permissions['node:state:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:subscribe without approval'
  $permissions['node:state:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:unsubscribe'
  $permissions['node:state:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update any individual content'
  $permissions['node:state:update any individual content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update any individual_data content'
  $permissions['node:state:update any individual_data content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update any individual_data_ma content'
  $permissions['node:state:update any individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update any provider content'
  $permissions['node:state:update any provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update any reporting_period content'
  $permissions['node:state:update any reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update group'
  $permissions['node:state:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:update own individual content'
  $permissions['node:state:update own individual content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update own individual_data content'
  $permissions['node:state:update own individual_data content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update own individual_data_ma content'
  $permissions['node:state:update own individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update own provider content'
  $permissions['node:state:update own provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:state:update own reporting_period content'
  $permissions['node:state:update own reporting_period content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
