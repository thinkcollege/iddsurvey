(function($) {

  /**
   * Individual competitive job - if gross wages / hours < $8.25, then show minimum wage
   * stuff.
   */
  Drupal.behaviors.sdataIdMdIndComJob = {
    attach: function (context, settings) {
      sdataIdMdMinWage('#edit-field-indv-comp-hrs-und-0-value', '#edit-field-indv-comp-gross-wages-und-0-value');
    }
  };

  /**
   * Individual contracted job - if gross wages / hours < $8.25, then show minimum wage
   * stuff.
   */
  Drupal.behaviors.sdataIdMdIndConJob = {
    attach: function (context, settings) {
      sdataIdMdMinWage('#edit-field-indv-cont-hrs-und-0-value', '#edit-field-indv-cont-gross-wages-und-0-value');
    }
  };

  /**
   * Group integrated job - if gross wages / hours < $8.25, then show minimum wage
   * stuff.
   */
  Drupal.behaviors.sdataIdMdGrpIntJob = {
    attach: function (context, settings) {
      sdataIdMdMinWage('#edit-field-grp-integ-hrs-und-0-value', '#edit-field-grp-integ-gross-wages-und-0-value');
    }
  };

  function sdataIdMdMinWage(hours, wages) {
    $(hours + ', ' + wages).change(function() {
      var hourly_rate = $(wages).val() / $(hours).val();
      var hasValues = false;
      if (($(wages).val() != '') && ($(hours).val() != '')) {
        hasValues = true;
      }
      if ((hourly_rate < 10) && (hasValues)) {
        $(wages).val('');
        alert('The hourly wage for this individual is less than the state minimum wage of $8.25/hr.');
      }
    });
  }

})(jQuery);
