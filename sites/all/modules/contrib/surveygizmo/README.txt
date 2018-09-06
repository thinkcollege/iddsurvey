CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Recommended modules
 * Installation
 * Configuration
 * Troubleshooting
 * FAQ
 * Maintainers

INTRODUCTION
------------
This module provides embedding and basic administration of SurveyGizmo surveys
within a Drupal site.
The initial relase of this module was written by Growing Venture Solutions, LLC
with the support of SurveyGizmo.
Drupal 7 version was written with the support of Acronis International GmbH.

REQUIREMENTS
------------
This module requires the following modules:
 * Views (https://drupal.org/project/views)
 * Entity API (https://drupal.org/project/entity)

This module also requires:
 * Drush
 * Composer

This module requires SurveyGizmo account. You can grab your at surveygizmo.com.

INSTALLATION
------------
 * Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.

 * Recomendation is to use Drush for installation - this will
 provide you with additional library and composer install.

 * In case of manual install, please download library from:
 https://github.com/profak/surveygizmo-api-php/releases and unpack it as
 'surveygizmo-api-php' as 'sites/all/libraries'.

CONFIGURATION
-------------
 * Add you credentialsin Administration » Content management » SurveyGizmo

 * Continue with Administration » Content management » Surveys

MAINTAINERS
-----------
Current maintainers:
 * Andrey Khromyshev (profak) - https://drupal.org/u/profak
