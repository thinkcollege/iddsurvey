<?php

/**
 * @file
 * provider.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function provider_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:provider:add user'
  $permissions['node:provider:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:administer group'
  $permissions['node:provider:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:approve and deny subscription'
  $permissions['node:provider:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:create individual content'
  $permissions['node:provider:create individual content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:create individual_data content'
  $permissions['node:provider:create individual_data content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:create individual_data_ma content'
  $permissions['node:provider:create individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:create provider content'
  $permissions['node:provider:create provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:create reporting_period content'
  $permissions['node:provider:create reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete any individual content'
  $permissions['node:provider:delete any individual content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete any individual_data content'
  $permissions['node:provider:delete any individual_data content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:delete any individual_data_ma content'
  $permissions['node:provider:delete any individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete any provider content'
  $permissions['node:provider:delete any provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete any reporting_period content'
  $permissions['node:provider:delete any reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete own individual content'
  $permissions['node:provider:delete own individual content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete own individual_data content'
  $permissions['node:provider:delete own individual_data content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:delete own individual_data_ma content'
  $permissions['node:provider:delete own individual_data_ma content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete own provider content'
  $permissions['node:provider:delete own provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete own reporting_period content'
  $permissions['node:provider:delete own reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:manage members'
  $permissions['node:provider:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:manage permissions'
  $permissions['node:provider:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:manage roles'
  $permissions['node:provider:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:subscribe'
  $permissions['node:provider:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:subscribe without approval'
  $permissions['node:provider:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:unsubscribe'
  $permissions['node:provider:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:update any individual content'
  $permissions['node:provider:update any individual content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:update any individual_data content'
  $permissions['node:provider:update any individual_data content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:update any individual_data_ma content'
  $permissions['node:provider:update any individual_data_ma content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:update any provider content'
  $permissions['node:provider:update any provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:update any reporting_period content'
  $permissions['node:provider:update any reporting_period content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:update group'
  $permissions['node:provider:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:provider:update own individual content'
  $permissions['node:provider:update own individual content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:update own individual_data content'
  $permissions['node:provider:update own individual_data content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:update own individual_data_ma content'
  $permissions['node:provider:update own individual_data_ma content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:update own provider content'
  $permissions['node:provider:update own provider content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:update own reporting_period content'
  $permissions['node:provider:update own reporting_period content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
