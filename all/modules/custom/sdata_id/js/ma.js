(function($) {

  /**
   * Individual employment - if gross wages / hours < $10, then show minimum wage
   * stuff.
   */
  Drupal.behaviors.sdataIdMaIndEmp = {
    attach: function (context, settings) {
      sdataIdMaMinWage('#edit-field-indv-comp-hrs-und-0-value', '#edit-field-indv-comp-gross-wages-und-0-value', '#edit-field-indv-emp-less', '#edit-field-indv-emp-less-other', 'edit-field-indv-emp-less-und-1');
    }
  };

  /**
   * Group supported employment - if gross wages / hours < $10, then show minimum wage
   * stuff.
   */
  Drupal.behaviors.sdataIdMaGroupSupportedEmployment = {
    attach: function (context, settings) {
      sdataIdMaMinWage('#edit-field-grp-integ-hrs-und-0-value', '#edit-field-grp-integ-gross-wages-und-0-value', '#edit-field-grp-sup-less', '#edit-field-grp-sup-less-other', '#edit-field-grp-sup-less-und-1');
    }
  };

  /**
   * Sheltered employment - if gross wages / hours < $10, then show minimum wage
   * stuff.
   */
  Drupal.behaviors.sdataIdMaShelteredEmployment = {
    attach: function (context, settings) {
      sdataIdMaMinWage('#edit-field-shl-hrs-und-0-value', '#edit-field-shl-gross-wages-und-0-value', '#edit-field-shl-less', '#edit-field-shl-less-other', '#edit-field-shl-less-und-1');
    }
  };

  function sdataIdMaMinWage(hours, wages, reasonStuff, otherStuff, otherRadioButton) {
    $(hours + ', ' + wages).change(function() {
      var hourly_rate = $(wages).val() / $(hours).val();
      var hasValues = false;
      if (($(wages).val() != '') && ($(hours).val() != '')) {
        hasValues = true;
      }
      if ((hourly_rate < 10) && (hasValues)) {
        alert('The hourly wage for this individual is less than the state minimum wage of $10/hr. Is this correct? If it is, use the form to explain why.');
      }
      if (((hourly_rate < 10) && (hasValues))) {
        $(reasonStuff).show().prop('required');
        if ($(otherRadioButton).prop('checked')) {
          $(otherStuff).show();
        }
      }
      else {
        $(reasonStuff + ', ' + otherStuff).hide().prop('required', false);
      }
    });
  }

})(jQuery);
