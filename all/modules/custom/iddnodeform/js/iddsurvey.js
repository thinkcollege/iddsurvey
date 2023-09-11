(function($) {

  /**
   * Individual employment - if gross wages / hours < $10, then show minimum wage
   * stuff.
   */
 Drupal.behaviors.startScan = {
    attach: function (context, settings) {
      $( document ).one('ready',scanFieldsets);
      $('th').text('Order').hide();
      var nwScan = showHideNonwork();
      if (!$('#edit-group_contact_info p.nextSec').length)$('#edit-group_contact_info').append('<p class="nextSec"><a class="openTab" href="#edit-group_number_served">>> Next: Section I FY totals for all day and employment services >></a></p>');
      if (!$('#edit-group_number_served p.nextSec').length)$('#edit-group_number_served').append('<p class="nextSec"><a class="openTab" href="#edit-group_integ_employ_svces">>> Next: Section II Integrated employment services >></a></p>');
      if (!$('#edit-group_integ_employ_svces p.nextSec').length) $('#edit-group_integ_employ_svces').append('<p class="nextSec"><a class="openTab" href="#edit-group_facility_based">>> Next: Section III Facility-based work services >></a></p>');
      if (!$('#edit-group_facility_based p.nextSec').length) $('#edit-group_facility_based').append('<p class="nextSec"><a class="openTab" href="#edit-group_comm_bsd_non_work">>> Next: Section IV Non-work services >></a></p>');
      if (!$('#edit-group_comm_bsd_non_work p.nextSec').length) $('#edit-group_comm_bsd_non_work').append('<p class="nextSec"><a class="openTab" href="#edit-group_oth_emp_day_svcs">>> Next: Section V Other employment and day services >></a></p>');

      if (!$('#edit-group_fac_based p.nextSec').length) $('#edit-group_fac_based').append('<p class="nextSec"><a class="openTab" href="#edit-group_oth_emp_day_svcs">>> Next: Section VI Other employment and day services >></a></p>');
      if (!$('#edit-group_oth_emp_day_svcs p.nextSec').length) $('#edit-group_oth_emp_day_svcs').append('<p class="nextSec"><a class="openTab" href="#edit-group_final_step">>> Next: Section VII Final step >></a></p>');

      if (!$('#secIAutoFundTtl').length) $('.group-emp-day-svc-amount').append('<p id="secIAutoFundTtl" class="fundingTotal group-emp-day"></p>');

      if (!$('#integFundTtl').length) $('.group-integ-fund-amt').append('<p id="integFundTtl" class="fundingTotal group-integ-fund"></p>');
      if (!$('#fbWorkAutoFundTtl').length)  $('.group-fac-amt').append('<p id="fbWorkAutoFundTtl" class="fundingTotal group-fac"></p>');
      if (!$('#cbNworkAutoFundTtl').length) $('.group-comm-fund-amt').append('<p id="cbNworkAutoFundTtl" class="fundingTotal group-comm-fund"></p>');
      if (!$('#fBNworkAutoFundTtl').length) $('.group_fac_non_w_fund_amt').append('<p id="fBNworkAutoFundTtl" class="fundingTotal group_fac_non"></p>');
      if (!$('#allNWorkAutoFundTtl').length) $('.group-all-non-wk-fund-amt').append('<p id="allNWorkAutoFundTtl" class="fundingTotal group-all-fund"></p>');
      if (!$('#othEmSvcAutoFundTtl').length) $('.group-oth-emp-day-fund-amt').append('<p id="othEmSvcAutoFundTtl" class="fundingTotal group-oth-emp"></p>');
      if(!$('#finalTotals').length) $('#edit-field-save-and-return').append('<p id="finalTotals" class="fundingTotal"></p><p id="indivTotals" class="fundingTotal"></p>');
      if(!$('#saveWarn').length ) $('#edit-submit').after('<p id="saveWarn">Be sure to Save before exiting this page or you will lose your work.  You can log out and return later to continue your work.</p><a id="logOutbut" href="/user/logout">Log out</a><p><strong>When you are completely finished editing your data go to the "Final Step" page and follow the final submit instructions</strong></p>');
      $( document ).one('ready',addNumFields);
      $(".vertical-tabs-list").attr('id','save_target');
      $(window).scroll(function(){
        $("#edit-actions").css("top", Math.max(20, 810 - $(this).scrollTop()));
      });
      $(".vertical-tabs-list").attr('id','save_target');
      $(window).scroll(function(){
          $(".admin-menu #edit-actions").css("top", Math.max(20, 1400 - $(this).scrollTop()));
      });
      $('.currentYear').each(function(i, elem) {
        curyearText = $('#currentYear').text();
        if($('#currentYear').text().length > 0) {$(elem).text(curyearText); } else { $(elem).text(''); }
        });
      $('h1.page-header em').hide();

      $('a.saveLeave').bind("click tap", saveAndLeave);

    }

  }

 Drupal.behaviors.hideHeds = {
    attach: function (context, settings) {
        $(".form-radios input").bind("click focus", hideSecHeds);

    }
  }

 Drupal.behaviors.toggleNW = {
    attach: function (context, settings) {


      $('#nonchecks input[type="radio"]').bind("click focus", showHideNonwork );

    }
  }

 Drupal.behaviors.checkSaved = {
    attach: function (context, settings) {
      var unsaved = false;

      $(":input").change(function(){
          unsaved = true;
      });
      $("select").change(function(){
        unsaved = true;
      });
      $('#edit-submit').on("click focus",function(){
          unsaved = false;
      });
      $(window).on('beforeunload', function(){
        if(unsaved) {
          return "You have unsaved changes on this page. Do you want to leave this page and discard your changes or stay on this page?";
          }
      });
    }
  }

  Drupal.behaviors.finalSubmit = {
    attach: function (context, settings) {
      var x=0;
      $(":input#edit-field-save-and-return-und").change(function(){

        if( $(this).is(':checked') ) {
          x = x + 1; console.log("It's checked ");
         if($('.saveLeave.form-submit').hasClass('btn-success')) $('.saveLeave.form-submit').removeClass('btn-success').addClass('btn-danger');
         if($('#edit-submit').hasClass('btn-success')) $('#edit-submit').removeClass('btn-success').addClass('btn-danger');
         $('.saveLeave.form-submit').html('<span class="icon glyphicon glyphicon-ok" aria-hidden="true"></span> FINAL SUBMIT');
         $('#edit-submit').html('<span class="icon glyphicon glyphicon-ok" aria-hidden="true"></span> FINAL SUBMIT');

        } else
        {   if($('.saveLeave.form-submit').hasClass('btn-danger')) $('.saveLeave.form-submit').removeClass      ('btn-danger').addClass('btn-success');
         if($('#edit-submit').hasClass('btn-danger')) $('#edit-submit').removeClass('btn-danger').addClass('btn-success');
          $('.saveLeave.form-submit').html('<span class="icon glyphicon glyphicon-ok" aria-hidden="true"></span> SAVE');
          $('#edit-submit').html('<span class="icon glyphicon glyphicon-ok" aria-hidden="true"></span> SAVE');
         }

      });


    }
  }

 Drupal.behaviors.alternateTab = {
     attach: function (context, settings) {
       $(document).on('click', 'a.openTab', function (event) {


        setTimeout(function(){
          linkToTab();
        }, 1500);


       });
     }
   }

  Drupal.behaviors.iddsurveyChMoreBut = {
    attach: function (context, settings) {
      changeMoreButton();
    }
  };
  Drupal.behaviors.iddsurveyEnforceNumeric = {
    attach: function (context, settings) {

    $('.field-type-number-bigint input').keydown(isNumber);


    }

} ;

Drupal.behaviors.iddsurveyTextCheck = {
  attach: function (context, settings) {
$('.form-type-textfield input').keydown(checkText);
}
};

Drupal.behaviors.iddsurveyremoveIntWarn = {
  attach: function (context, settings) {

  $('.field-type-number-bigint input').bind("blur",removeNumWarn);

  }

} ;

Drupal.behaviors.iddsurveyValidEmail = {
  attach: function (context, settings) {

  $('#edit-field-surv-coord-contact-und-0-field-surv-co-email input').bind("blur",checkEmailValidation);

  }

} ;

Drupal.behaviors.iddsurveyMakeActive = {

  attach: function (context, settings) {



  $('.vertical-tabs-panes > fieldset').bind("mouseenter touchstart",makeActiveTab);


  }

} ;



Drupal.behaviors.iddsurveyNotReq = {

  attach: function (context, settings) {
$('#edit-field-contact-survey-coordinator-und-0-premise').addClass('notReq');

}
};
Drupal.behaviors.iddsurveyIsReq = {

  attach: function (context, settings) {

// if(!$('#edit-field-desc-response-ques-1-und').hasClass('fieldReq')) { $('#edit-field-desc-response-ques-1-und').addClass('fieldReq'); }
if(!$('#edit-field-total-integ-y-n').hasClass('fieldReq')) { $('#edit-field-total-integ-y-n').addClass('fieldReq'); }
// if(!$('#edit-field-integ-emp-svc-y-n-und').hasClass('fieldReq')) { $('#edit-field-integ-emp-svc-y-n-und').addClass('fieldReq'); }
if(!$('#edit-field-fac-y-n').hasClass('fieldReq')) { $('#edit-field-fac-y-n').addClass('fieldReq'); }
if(!$('#edit-field-comm-does-state-offer').hasClass('fieldReq')) { $('#edit-field-comm-does-state-offer').addClass('fieldReq'); }
// if(!$('#edit-field-fac-bas-y-n-und').hasClass('fieldReq')) { $('#edit-field-fac-bas-y-n-und').addClass('fieldReq'); }
if(!$('#edit-field-oth-emp-day-y-n').hasClass('fieldReq')) { $('#edit-field-oth-emp-day-y-n').addClass('fieldReq'); }
}
};

Drupal.behaviors.iddsurveyCheckEmptyFields = {

  attach: function (context, settings) {


  $('ul.vertical-tabs-list li a').bind("click",emptyFieldWarn);



  }

} ;



Drupal.behaviors.iddsurveyStripCommas  = {
  attach: function (context, settings) {
$('#idd-survey-node-form').submit(removeCommas);
  }
}

function hideSecHeds () {


if ($('input[id="edit-field-integ-emp-svc-y-n-und-no"]').is(':checked') || (!$('input[id="edit-field-integ-emp-svc-y-n-und-no"]').is(':checked') && !$('input[id="edit-field-integ-emp-svc-y-n-und-yes"]').is(':checked')) ) {
$('.group-integ-other-agc-subgroup h3').hide();
  $('.group-integ-fund-amt h3').hide();
$('.group-integ-fund-amt').removeClass('jumbotron');
$('.group-integ-other-agc-subgroup').removeClass('jumbotron');
} else  {
$('.group-integ-other-agc-subgroup h3').show();
  $('.group-integ-fund-amt h3').show();
if(!$('.group-integ-fund-amt').hasClass('jumbotron')) { $('.group-integ-fund-amt').addClass('jumbotron');
if(!$('.group-integ-other-agc-subgroup').hasClass('jumbotron')) { $('.group-integ-other-agc-subgroup').addClass('jumbotron'); }
 }
  if($('input[id="edit-field-integ-other-agencies-und-no"]').is(':checked') || (!$('input[id="edit-field-integ-other-agencies-und-no"]').is(':checked') && !$('input[id="edit-field-integ-other-agencies-und-yes"]').is(':checked'))) {
  $('.group-integ-other-agc-subgroup h3').hide();
  $('.group-integ-other-agc-subgroup').removeClass('jumbotron');
} else {if(!$('.group-integ-other-agc-subgroup').hasClass('jumbotron')) { $('.group-integ-other-agc-subgroup').addClass('jumbotron'); }}
}

if($('input[id="edit-field-integ-other-agencies-und-no"]').is(':checked')) {
$('.group-integ-other-agc-subgroup h3').hide();
}


if ($('input[id="edit-field-fac-y-n-und-no"]').is(':checked') || (!$('input[id="edit-field-fac-y-n-und-no"]').is(':checked') && !$('input[id="edit-field-fac-y-n-und-yes"]').is(':checked'))) {
$('.group-fac-amt h3').hide();
$('.group-fac-amt').removeClass('jumbotron');
$('.group-fac-other-entities h3').hide();
$('.group-fac-other-entities').removeClass('jumbotron');

} else { $('.group-fac-amt h3').show();
if(!$('.group-fac-amt').hasClass('jumbotron')) { $('.group-fac-amt').addClass('jumbotron');}
}



if($('input[id="edit-field-fac-other-entity-y-n-und-no"]').is(':checked') || (!$('input[id="edit-field-fac-other-entity-y-n-und-no"]').is(':checked') && !$('input[id="edit-field-fac-other-entity-y-n-und-yes"]').is(':checked')) ) {
$('.group-fac-other-entities h3').hide();
$('.group-fac-other-entities').removeClass('jumbotron');
} else { $('.group-fac-other-entities h3').show();

if(!$('.group-fac-other-entities').hasClass('jumbotron')) { $('.group-fac-other-entities').addClass('jumbotron');}
 }

if($('input[id="edit-field-comm-does-state-offer-und-no"]').is(':checked') || (!$('input[id="edit-field-comm-does-state-offer-und-no"]').is(':checked') && !$('input[id="edit-field-comm-does-state-offer-und-yes"]').is(':checked'))) {
$('.group-comm-fund-amt h3').hide();
$('.group-comm-fund-amt').removeClass('jumbotron');
} else {
$('.group-comm-fund-amt h3').show();
if(!$('.group-comm-fund-amt').hasClass('jumbotron')) { $('.group-comm-fund-amt').addClass('jumbotron');}
}
if($('input[id="edit-field-fac-bas-y-n-und-no"]').is(':checked') || (!$('input[id="edit-field-fac-bas-y-n-und-no"]').is(':checked') && !$('input[id="edit-field-fac-bas-y-n-und-yes"]').is(':checked')) ) {
$('.group_fac_non_w_fund_amt h3').hide();
$('.group_fac_non_w_fund_amt').removeClass('jumbotron');
} else { $('.group_fac_non_w_fund_amt h3').show();
if(!$('.group_fac_non_w_fund_amt').hasClass('jumbotron')) { $('.group_fac_non_w_fund_amt').addClass('jumbotron');}
 }

if($('input[id="edit-field-oth-emp-day-y-n-und-yes"]').is(':checked')) {
$('.group-oth-emp-day-fund-amt h3').show();
if(!$('.group-oth-emp-day-fund-amt').hasClass('jumbotron')) { $('.group-oth-emp-day-fund-amt').addClass('jumbotron');}

} else { $('.group-oth-emp-day-fund-amt h3').hide();
if($('.group-oth-emp-day-fund-amt').hasClass('jumbotron')) $('.group-oth-emp-day-fund-amt').removeClass('jumbotron');

}


}

function removeCommas() {

  $('.field-type-number-bigint input').each(function(i, el) {
    if($(el).val() != "" ) {
        $(el).val($(el).val().replace(/,/g, ''));
    }
  });

}

function checkEmailValidation() {
  var email = $('#edit-field-surv-coord-contact-und-0-field-surv-co-email input').val();
  var regex = /^([a-zA-Z0-9_.+-])+\@(([a-zA-Z0-9-])+\.)+([a-zA-Z0-9]{2,4})+$/;
  if  (!regex.test(email)) {

  $('#edit-field-surv-coord-contact-und-0-field-surv-co-email input').before('<p class="reqNumwarn"><strong>That is not a valid email address.</strong></p>');
  $('#edit-field-surv-coord-contact-und-0-field-surv-co-email input').val("not.valid@please.change"); }
  else {
  if ($('#edit-field-surv-coord-contact-und-0-field-surv-co-email input').val() != "not.valid@please.change") {
    $('#edit-field-surv-coord-contact-und-0-field-surv-co-email p.reqNumwarn').remove();}
   }

}

function saveAndLeave(event) {
    // Remember the link href
    var href = this.href;

    // Don't follow the link
    event.preventDefault();
      $('#edit-submit').click();

}

  function changeMoreButton() {
// $('#field-contact-other-staff-add-more-wrapper input').val('Add a staff member');
$('button.field-add-more-submit').val('Add a staff member');
$('button.field-add-more-submit').text('Add a staff member');
}
function isNumber(evt) {

if (evt.which != 9 && evt.which != 188 && evt.which != 37 && evt.which != 39 && evt.which != 190 && evt.which != 17 && evt.which != 86 && evt.which != 91 && evt.which != 67 && evt.which != 110) {
          var theEvent = evt || window.event;
          var key = theEvent.keyCode || theEvent.which;
          key = String.fromCharCode(key);
          if (key.length == 0) return;
          var regex = /^[0-9\b]+$/;

          if (!regex.test(key)) {
            if(!(theEvent.keyCode >= 96 && theEvent.keyCode <= 105)  && !(theEvent.keyCode >= 48 && theEvent.keyCode <= 57)) {
            if (!$(this).prev('p').hasClass('reqNumwarn')) {
            $(this).before('<p class="reqNumwarn">Numbers and commas only in this field.</p>') }
              theEvent.returnValue = false;
              if (theEvent.preventDefault) theEvent.preventDefault();

            }
          } else { if($(this).hasClass('redLine'))  $(this).removeClass('redLine'); }
        }
}


function checkText(evt) {
  var theEvent = evt || window.event;
  var key = theEvent.keyCode || theEvent.which;
  key = String.fromCharCode(key);
  if (key.length == 0) return;
          var theEvent = evt || window.event;
          var key = theEvent.keyCode || theEvent.which;
          key = String.fromCharCode(key);

      if($(this).hasClass('redLine'))  $(this).removeClass('redLine');


}


function removeNumWarn() {
if ($(this).prev('p').hasClass('reqNumwarn')) {
var warnP = $(this).prev('p');
  setTimeout(function(){
    $(warnP).remove();
  }, 500);
}
return addNumFields();

}

function popNumSpans(spanclass,numvar) {
$('.' + spanclass).each(function(i, elem) { if(numvar) {$(elem).html(numvar); } else { $(elem).html(''); } });
}

function linkToTab(evt) {
linkURL = $(location).attr('href');
 hashLink = window.location.hash;

 // alert(linkURL);
$('.vertical-tabs-panes fieldset').each(function(i, el) {



if($(el).hasClass('active')) { $(el).removeClass('active');
    $(el).find('> div').removeClass('in');
 } });
  $('.vertical-tabs-list li a').each(function(i, elm) {
$(elm).attr( 'aria-expanded', 'false').parent('li').removeClass('active selected');
  });


$('.vertical-tabs-panes fieldset' + hashLink).addClass('active').find('> div').addClass('in');
$('a[href="' + hashLink + '"]').attr( 'aria-expanded', 'true').parent('li').addClass('active selected');



}

function commifyNum(rawnum){
    var x = rawnum;
  rawnum = x.toString().replace(/,/g, "").replace(/\B(?=(\d{3})+(?!\d))/g, ",");
  return rawnum;
}

function processNumVars(idstring, typeint) {

 returnvar = $('#' + idstring).val() ? (typeint == false ? commifyNum(parseInt($('#'+ idstring).val().replace(/,/g, ''),10)) : parseInt($('#'+ idstring).val().replace(/,/g, ''),10)) : '';
 return returnvar;
}

function addNumFields() {
  var secIoneTot = null;
  var secIEntrFundTtl = null;
  var secIXix= null;
  var secIState = null;
  var secIOthSelf = null;
  var secIAutoFundTtl = null;

  var integTotServed = null;
  var integPaidTot = null;
var integEntrFundTtl = null;
var integXix= null;
var integState = null;
var integOthSelf = null;
var integAutoFundTtl = null;

var fbWorkEntrFundTtl = null;
var fbWorkXix= null;
var fbWorkState = null;
var fbWorkOthSelf = null;
var fbWorkAutoFundTtl = null;


var cbNworkTotInd = null;
var cbNworkEntrFundTtl = null;
var cbNworkXix= null;
var cbNworkState = null;
var cbNworkOthSelf = null;
var cbNworkAutoFundTtl = null;

var fBNworkEntrFundTtl = null;
var fBNworkXix= null;
var fBNworkState = null;
var fBNworkOthSelf = null;
var fBNworkAutoFundTtl = null;

var allNWorkTotInd = null;
var allNWorkEntrFundTtl = null;
var allNWorkXix= null;
var allNWorkState = null;
var allNWorkOthSelf = null;
var allNWorkAutoFundTtl = null;

var othEmSvcEntrFundTtl = null;
var othEmSvcXix= null;
var othEmSvcState = null;
var othEmSvcOthSelf = null;
var othEmSvcAutoFundTtl = null;
var autoTotal = null;
var secInumServed= null;
var secIInumServed = null;
var secIIInumServed = null;
var secIVnumServed = null;
var secIVAnumServed = null;
var secVnumServed = null;
var secVInumServed = null;
var autoTtlIndvs = null;
var allNworkEntrFundTtl = null;

secIoneTot = processNumVars('edit-field-total-served-und-0-value',false);

secIEntrFundTtl =  processNumVars('edit-field-please-enter-the-total-num-und-0-value',false);
secIXix = processNumVars('edit-field-title-xix-mdc-waiv-amt-und-0-value',true);
secIState = processNumVars('edit-field-state-county-or-loc-amt-und-0-value',true);
secIOthSelf = processNumVars('edit-field-other-self-pay-amt-und-0-value',true);
 if (secIoneTot) popNumSpans('secIoneTot',secIoneTot);
if (secIXix || secIState || secIOthSelf) { secIAutoFundTtl = secIXix + secIState + secIOthSelf;
  secIAutoFundTtl = commifyNum(secIAutoFundTtl);

  $('.group-emp-day-svc-amount #secIAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question I 4a: $' + secIAutoFundTtl + '<span>'); } else {$('.group-emp-day-svc-amount #secIAutoFundTtl').html('');}

  if (secIAutoFundTtl && secIEntrFundTtl != secIAutoFundTtl) { $('.group-emp-day-svc-amount #secIAutoFundTtl').next($('.calcWarn')).remove(); $('.group-emp-day-svc-amount #secIAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 4 above ($' + secIEntrFundTtl + ')  does not match the total of funds entered in the fields under question 4a</span>'); } else { if ($('.group-emp-day-svc-amount .calcWarn')) $('.group-emp-day-svc-amount .calcWarn').remove(); }


integTotServed = processNumVars('edit-field-integ-emp-svc-num-ind-und-0-value',false);
integPaidTot = processNumVars('edit-field-integ-paid-commun-num-und-0-value',false);

integEntrFundTtl =  processNumVars('edit-field-integ-total-expenditure-und-0-value',false);
integXix = processNumVars('edit-field-integ-xix-waiv-amt-und-0-value',true);
integState = processNumVars('edit-field-integ-st-cty-idd-amt-und-0-value',true);
integOthSelf = processNumVars('edit-field-integ-oth-slf-pay-amt-und-0-value',true);

if (integXix || integState || integOthSelf) { integAutoFundTtl = integXix + integState + integOthSelf;
  integAutoFundTtl = commifyNum(integAutoFundTtl);

$('.group-integ-fund-amt #integFundTtl').html('<span class="whiteBlock">Total of amounts entered under question II 4a: $' + integAutoFundTtl + '<span>'); } else {$('.group-integ-fund-amt #integFundTtl').html('');}

if (integTotServed) popNumSpans('integTotServed',integTotServed);
if(integPaidTot) popNumSpans('integPaidTot',integPaidTot);

if (integAutoFundTtl && integEntrFundTtl != integAutoFundTtl) { $('.group-integ-fund-amt #integFundTtl').next($('.calcWarn')).remove(); $('.group-integ-fund-amt #integFundTtl').after('<span class="calcWarn">The value of total funds entered in question 4 above ($' + integEntrFundTtl + ')  does not match the total of funds entered in the fields under question 4a</span>'); } else { if ($('.group-integ-fund-amt .calcWarn')) $('.group-integ-fund-amt .calcWarn').remove(); }

// Error checking on number served totals
secInumServed = processNumVars('edit-field-total-served-und-0-value',true);
secIInumServed = processNumVars('edit-field-integ-emp-svc-num-ind-und-0-value',true);
if(secIInumServed && (secIInumServed > secInumServed)) { $('#edit-field-integ-emp-svc-num-ind .calcWarn').remove(); $('#edit-field-integ-emp-svc-num-ind').append('<span class="calcWarn">The number of individuals entered in question 1a above (' + commifyNum(secIInumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-integ-emp-svc-num-ind .calcWarn')) $('#edit-field-integ-emp-svc-num-ind .calcWarn').remove(); }

secIIInumServed = processNumVars('edit-field-fac-total-num-of-ind-und-0-value',true);
if(secIIInumServed && (secIIInumServed > secInumServed)) { $('#edit-field-fac-total-num-of-ind .calcWarn').remove(); $('#edit-field-fac-total-num-of-ind').append('<span class="calcWarn">The number of individuals entered in question 1a  above (' + commifyNum(secIIInumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-fac-total-num-of-ind .calcWarn')) $('#edit-field-fac-total-num-of-ind .calcWarn').remove(); }

secIVnumServed = processNumVars('edit-field-comm-total-num-indiv-und-0-value',true);
if(secIVnumServed && (secIVnumServed > secInumServed)) { $('#edit-field-comm-total-num-indiv .calcWarn').remove(); $('#edit-field-comm-total-num-indiv').append('<span class="calcWarn">The number of individuals entered in question IV-CB 1a  above (' + commifyNum(secIVnumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-comm-total-num-indiv .calcWarn')) $('#edit-field-comm-total-num-indiv .calcWarn').remove(); }

secVnumServed = processNumVars('edit-field-fac-bas-num-indvs-und-0-value',true);
if(secVnumServed && (secVnumServed > secInumServed)) { $('#edit-field-fac-bas-num-indvs .calcWarn').remove(); $('#edit-field-fac-bas-num-indvs').append('<span class="calcWarn">The number of individuals entered in question IV-FB 1a  above (' + commifyNum(secVnumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-fac-bas-num-indvs .calcWarn')) $('#edit-field-fac-bas-num-indvs .calcWarn').remove(); }

secIVAnumServed = processNumVars('edit-field-all-non-work-total-und-0-value',true);
if(secIVAnumServed && (secIVAnumServed > secInumServed)) { $('#edit-field-all-non-work-total .calcWarn').remove(); $('#edit-field-all-non-work-total').append('<span class="calcWarn">The number of individuals entered in question IV-All 1a  above (' + commifyNum(secIVAnumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-all-non-work-total .calcWarn')) $('#edit-field-all-non-work-total .calcWarn').remove(); }


secVInumServed = processNumVars('edit-field-oth-emp-day-num-indv-und-0-value',true);
if(secVInumServed && (secVInumServed > secInumServed)) { $('#edit-field-oth-emp-day-num-indv .calcWarn').remove(); $('#edit-field-oth-emp-day-num-indv').append('<span class="calcWarn">The number of individuals entered in question 1a  above (' + commifyNum(secVInumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-oth-emp-day-num-indv .calcWarn')) $('#edit-field-oth-emp-day-num-indv .calcWarn').remove(); }

if(secInumServed && (secIInumServed || secIIInumServed || secIVAnumServed || secVInumServed)) {

  $('#indivTotals').html('<span class="whiteBlock"><h3>Here are the individuals served totals you entered:</h3><ul><li><strong><a class="openTab bolded" href="#edit-group_number_served">Section I question 1, Total number of individuals in employment and day services in the F.Y.:</a> ' + commifyNum(secInumServed) + '</strong></li></ul><h4>Subtotals:</h4><ul style="margin-left: 30px">' + (secIInumServed ? '<li><a class="openTab" href="#edit-group_integ_employ_svces">Section II question 1a Total individuals in integrated employment services:</a> <strong>' + commifyNum(secIInumServed) + '</strong></li>' : '') + (secIIInumServed ? '<li><a class="openTab" href="#edit-group_facility_based">Section III question 1a Total individuals in facility-based work services</a>: <strong>' + commifyNum(secIIInumServed) + '</strong></li>' : '')  + (secIVAnumServed ? '<li><a class="openTab" href="#edit-group_comm_bsd_non_work">Section IV-All question 1a Total individuals in non-work services:</a> <strong>' + commifyNum(secIVAnumServed) + '</strong></li>' : '')  + (secVInumServed ? '<li><a class="openTab" href="#edit-group_oth_emp_day_svcs">Section VI question 1a Total individuals in other employment and day services</a>: <strong>' + commifyNum(secVInumServed) + '</strong></li>' : '') + '</ul></span>');
secInumServed = secInumServed ? secInumServed : 0;
secIInumServed = secIInumServed ? secIInumServed : 0;
secIIInumServed = secIIInumServed ? secIIInumServed : 0;
secIVnumServed = secIVnumServed ? secIVAnumServed : 0;
secIVAnumServed = secIVAnumServed ? secIVAnumServed : 0;
secVnumServed = secVnumServed ? secVnumServed : 0;
secVInumServed = secVInumServed ? secVInumServed : 0;
autoTtlIndvs = secIInumServed + secIIInumServed +  secIVAnumServed + secVInumServed;

  if( autoTtlIndvs && autoTtlIndvs != secInumServed)  { $('#edit-field-save-and-return #indivTotals .whiteBlock .calcWarn').remove(); $('#indivTotals .whiteBlock').append('<span class="calcWarn">The total of individuals served in Section I <u>' + commifyNum(secInumServed) + '</u>  does not match the total of individuals served in the subsections enumerated above: <u><strong>' + commifyNum(autoTtlIndvs) +'</strong></u>.  This is expected when  individuals engage in more than one setting, but we encourage you to make sure the relationship between the two numbers accurately reflects your state\'s experience. </span>'); } else { if ($('#edit-field-save-and-return #indivTotals .calcWarn')) $('#edit-field-save-and-return #indivTotals .calcWarn').remove(); }

}

fbWorkEntrFundTtl =  processNumVars('edit-field-fac-total-expendit-und-0-value',false);
fbWorkXix = processNumVars('edit-field-fac-titl-xix-waiv-amt-und-0-value',true);
fbWorkState = processNumVars('edit-field-fac-state-cty-amt-und-0-value',true);
fbWorkOthSelf = processNumVars('edit-field-fac-other-amt-und-0-value',true);
if (fbWorkXix || fbWorkState || fbWorkOthSelf) { fbWorkAutoFundTtl = fbWorkXix + fbWorkState + fbWorkOthSelf;
  fbWorkAutoFundTtl = commifyNum(fbWorkAutoFundTtl);

  $('.group-fac-amt #fbWorkAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question III 3a: $' + fbWorkAutoFundTtl + '<span>'); } else {$('.group-fac-amt #fbWorkAutoFundTtl').html('');}

  if (fbWorkAutoFundTtl && fbWorkEntrFundTtl != fbWorkAutoFundTtl) {$('.group-fac-amt #fbWorkAutoFundTtl').next($('.calcWarn')).remove(); $('.group-fac-amt #fbWorkAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 3 above ($' + fbWorkEntrFundTtl + ')  does not match the total of funds entered in the fields under question 3a</span>'); } else { if ($('.group-fac-amt .calcWarn')) $('.group-fac-amt .calcWarn').remove(); }

cbNworkTotInd = processNumVars('edit-field-comm-total-num-indiv-und-0-value',false);
  if (cbNworkTotInd) popNumSpans('cbNworkTotInd',cbNworkTotInd);
  cbNworkEntrFundTtl =  processNumVars('edit-field-comm-total-expenditure-und-0-value',false);
  cbNworkXix = processNumVars('edit-field-comm-xix-medicaid-amount-und-0-value',true);
  cbNworkState = processNumVars('edit-field-comm-state-local-amount-und-0-value',true);
  cbNworkOthSelf = processNumVars('edit-field-comm-other-amount-und-0-value',true);
  if (cbNworkXix || cbNworkState || cbNworkOthSelf) { cbNworkAutoFundTtl = cbNworkXix + cbNworkState + cbNworkOthSelf;
    cbNworkAutoFundTtl = commifyNum(cbNworkAutoFundTtl);

    $('.group-comm-fund-amt #cbNworkAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question IV-CB 2a: $' + cbNworkAutoFundTtl + '<span>'); } else {$('.group-comm-fund-amt #cbNworkAutoFundTtl').html('');}

    if (cbNworkAutoFundTtl && cbNworkEntrFundTtl != cbNworkAutoFundTtl) { $('.group-comm-fund-amt #cbNworkAutoFundTtl').next($('.calcWarn')).remove(); $('.group-comm-fund-amt #cbNworkAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 2 above ($' + cbNworkEntrFundTtl + ')  does not match the total of funds entered in the fields under question 2a</span>'); } else { if ($('.group-comm-fund-amt .calcWarn')) $('.group-comm-fund-amt .calcWarn').remove(); }


    fBNworkEntrFundTtl =  processNumVars('edit-field-fac-non-wk-tot-expend-und-0-value',false);
    fBNworkXix = processNumVars('edit-field-fac-non-w-titl-xix-amt-und-0-value',true);
    fBNworkState = processNumVars('edit-field-fac-non-w-stat-local-amt-und-0-value',true);
    fBNworkOthSelf = processNumVars('edit-field-fac-non-w-other-amt-und-0-value',true);
    if (fBNworkXix || fBNworkState || fBNworkOthSelf) { fBNworkAutoFundTtl = fBNworkXix + fBNworkState + fBNworkOthSelf;
      fBNworkAutoFundTtl = commifyNum(fBNworkAutoFundTtl);

      $('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question V 2a: $' + fBNworkAutoFundTtl + '<span>'); } else {$('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').html('');}

      if (fBNworkAutoFundTtl && fBNworkEntrFundTtl != fBNworkAutoFundTtl) { $('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').next($('.calcWarn')).remove(); $('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question IV-FB 2 above ($' + fBNworkEntrFundTtl + ')  does not match the total of funds entered in the fields under question 2a</span>'); } else { if ($('.group_fac_non_w_fund_amt .calcWarn')) $('.group_fac_non_w_fund_amt .calcWarn').remove(); }

      allNWorkTotInd = processNumVars('edit-field-all-non-work-total-und-0-value',false);
      if (allNWorkTotInd) popNumSpans('allNWorkTotInd',allNWorkTotInd);
      allNWorkEntrFundTtl =  processNumVars('edit-field-all-non-wk-total-expend-und-0-value',false);
      allNWorkXix = processNumVars('edit-field-all-non-wk-titlexix-amt-und-0-value',true);
      allNWorkState = processNumVars('edit-field-all-non-wk-state-cty-amt-und-0-value',true);
      allNWorkOthSelf = processNumVars('edit-field-all-non-wk-other-amt-und-0-value',true);
      if (allNWorkXix || allNWorkState || allNWorkOthSelf) { allNWorkAutoFundTtl = allNWorkXix + allNWorkState + allNWorkOthSelf;

        allNWorkAutoFundTtl = commifyNum(allNWorkAutoFundTtl);
        console.log('subvalues exist: ' + allNWorkAutoFundTtl);
        $('.group-all-non-wk-fund-amt #allNWorkAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question IV-All 2a: $' + allNWorkAutoFundTtl + '<span>'); } else {$('.group-all-non-wk-fund-amt #allNWorkAutoFundTtl').html('');   console.log('subvalues do not exist');}

        if (allNWorkAutoFundTtl && allNWorkEntrFundTtl != allNWorkAutoFundTtl) { $('.group-all-non-wk-fund-amt #allNWorkAutoFundTtl').next($('.calcWarn')).remove(); $('.group-all-non-wk-fund-amt #allNWorkAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 2 above ($' + allNWorkEntrFundTtl + ')  does not match the total of funds entered in the fields under question 2a</span>'); } else { if ($('.group-all-non-wk-fund-amt .calcWarn')) $('.group-all-non-wk-fund-amt .calcWarn').remove(); }


          othEmSvcEntrFundTtl =  processNumVars('edit-field-oth-emp-day-total-funds-und-0-value',false);
          othEmSvcXix = processNumVars('edit-field-oth-emp-day-xix-amt-und-0-value',true);
          othEmSvcState = processNumVars('edit-field-oth-emp-day-stat-cty-amt-und-0-value',true);
          othEmSvcOthSelf = processNumVars('edit-field-oth-emp-day-oth-amt-und-0-value',true);
          if (othEmSvcXix || othEmSvcState || othEmSvcOthSelf) { othEmSvcAutoFundTtl = othEmSvcXix + othEmSvcState + othEmSvcOthSelf;
            othEmSvcAutoFundTtl = commifyNum(othEmSvcAutoFundTtl);

            $('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question V 3a: $' + othEmSvcAutoFundTtl + '<span>'); } else {$('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').html('');}

            if (othEmSvcAutoFundTtl && othEmSvcEntrFundTtl != othEmSvcAutoFundTtl) { $('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').next($('.calcWarn')).remove(); $('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 3 above ($' + othEmSvcEntrFundTtl + ')  does not match the total of funds entered in the fields under question 3a</span>'); } else { if ($('.group-oth-emp-day-fund-amt .calcWarn')) $('.group-oth-emp-day-fund-amt .calcWarn').remove(); }
if(secIEntrFundTtl && ( integEntrFundTtl || fbWorkEntrFundTtl || cbNworkEntrFundTtl || fBNworkEntrFundTtl || allNworkEntrFundTtl || othEmSvcEntrFundTtl)) {
  if(cbNworkEntrFundTtl > 0 || fBNworkEntrFundTtl > 0) {allNworkEntrFundTtl = cbNworkEntrFundTtl + fBNworkEntrFundTtl;}
  var uri = window.location.href.split("#")[0];
            $('#finalTotals').html('<span class="whiteBlock"><h3>Here are the funding totals you entered:</h3><ul><li><strong><a class="openTab bolded" href="#edit-group_number_served">Section I question 4, Total dollars spent on employment and day services:</a> $' + secIEntrFundTtl + '</strong></li></ul><h4>Subtotals:</h4><ul style="margin-left: 30px">' + (integEntrFundTtl ? '<li><a class="openTab" href="#edit-group_integ_employ_svces">Section II question 4 Total dollars spent on integrated employment services:</a> <strong>$' + integEntrFundTtl + '</strong></li>' : '') + (fbWorkEntrFundTtl ? '<li><a class="openTab" href="#edit-group_facility_based">Section III question 3 Total dollars spent on facility-based work services</a>: <strong>$' + fbWorkEntrFundTtl + '</strong></li>' : '')  + (cbNworkEntrFundTtl ? '<li><a class="openTab" href="#edit-group_comm_bsd_non_work">Section IV-CB question 3 Total dollars spent on community-based non-work services:</a> <strong>$' + cbNworkEntrFundTtl + '</strong></li>' : '')  + (fBNworkEntrFundTtl ? '<li><a class="openTab" href="#edit-group_comm_bsd_non_work">Section IV-FB question 2 Total dollars spent on facility-based non-work services</a>: <strong>$' + fBNworkEntrFundTtl + '</strong></li>' : '')  + (allNWorkEntrFundTtl && (!fBNworkEntrFundTtl && !cbNworkEntrFundTtl ) ? '<li><a class="openTab" href="#edit-group_comm_bsd_non_work">Section IV question IV Total dollars spent on non-work services:</a> <strong>$' + allNWorkEntrFundTtl + '</strong></li>' : '')  + (othEmSvcEntrFundTtl ? '<li><a class="openTab" href="#edit-group_oth_emp_day_svcs">Section VI question 3 Total dollars spent on other employment and day services</a>: <strong>$' + othEmSvcEntrFundTtl + '</strong></li>' : '') + '</ul></span>');
integNum = processNumVars('edit-field-integ-total-expenditure-und-0-value', true) != ''? processNumVars('edit-field-integ-total-expenditure-und-0-value', true): 0;
fbwNum = processNumVars('edit-field-fac-total-expendit-und-0-value', true) != '' ? processNumVars('edit-field-fac-total-expendit-und-0-value', true):0;
cbNwNum = processNumVars('edit-field-comm-total-expenditure-und-0-value', true) != '' ? processNumVars('edit-field-comm-total-expenditure-und-0-value', true):0;
fbNwNum = processNumVars('edit-field-fac-non-wk-tot-expend-und-0-value', true) != '' ? processNumVars('edit-field-fac-non-wk-tot-expend-und-0-value', true): 0;
aNwNum = processNumVars('edit-field-all-non-wk-total-expend-und-0-value', true) != '' ? processNumVars('edit-field-all-non-wk-total-expend-und-0-value', true): 0;
othEmNum = processNumVars('edit-field-oth-emp-day-total-funds-und-0-value', true) != '' ? processNumVars('edit-field-oth-emp-day-total-funds-und-0-value', true):0;
console.log('All nonwork number:' + aNwNum);

            autoTotal = integNum + fbwNum + cbNwNum + fbNwNum + aNwNum + othEmNum;
            autoTotal = commifyNum(autoTotal);
            if( autoTotal && autoTotal != secIEntrFundTtl)  { $('#edit-field-save-and-return #finalTotals .whiteBlock .calcWarn').remove(); $('#finalTotals .whiteBlock').append('<span class="calcWarn">The value of total funds spent on day and employment services entered in Section I <u>$' + secIEntrFundTtl + '</u>  does not match the total of funds entered in the subsections enumerated above: <u><strong>$' + autoTotal +'</strong></u>.  Please check your figures to be sure they are accurate.</span>'); } else { if ($('#edit-field-save-and-return #finalTotals .calcWarn')) $('#edit-field-save-and-return #finalTotals .calcWarn').remove(); }
}

}

function scanFieldsets () {
  var hideHeds = hideSecHeds();
    var origID = '';
    $('.vertical-tabs-panes > fieldset').each(function(i, el) {

  if ($(el).hasClass('active') ) {origID = $(el).attr('id');}

        else {  $(el).addClass('active'); }
   makeActiveTab.call($(el));
   $(el).removeClass('active');
   $(el).removeClass('activeTwo');
    });
  $('.vertical-tabs-list li a').each(function(i, elem) {


    $(elem).removeClass('activeTwo');

  });

  $('#' + origID).addClass('active');
}

function makeActiveTab() {
if ($(this).hasClass('active') && !$(this).hasClass('activeTwo'))  { $(this).addClass('activeTwo')}
var fieldID = $(this).attr('id');
var currentTab = $('a[href="#' + fieldID + '"]');
if (!currentTab.hasClass('activeTwo')) currentTab.addClass('activeTwo');
var countempty = 0;
if(!$('#edit-field-save-and-return').hasClass('fieldReq'))$('#edit-field-save-and-return').addClass('fieldReq');
/* $('span.reqP').each(function(i, el) {

      $(el).remove();

}); */


$('div.field-widget-options-buttons:visible').each(function(i, el) {

      if(!$(el).hasClass('fieldReq') && !$(el).parents('.checkGroup').length > 0) { $(el).addClass('fieldReq');}

});


$('div.checkGroup:visible').each(function(i, el) {
     if (!$('input:checkbox:checked',this).length > 0)  { if(!$(this).hasClass('redLine')) $(this).addClass('redLine'); } else { if ($(this).hasClass('redLine')) { $(this).removeClass('redLine'); }
   }

});


/* $('.activeTwo .redLine').each(function(i, el) {

      $(el).after('<span class="reqP"> * </span>');

}); */

$('div.vertical-tabs-panes > fieldset.active div:visible > input').each(function(i, elem) {
if(  !$(elem).parent().hasClass('visDiv')) {
$(elem).parent().addClass('visDiv');
 }


});


$('div.vertical-tabs-panes > fieldset.activeTwo .fieldReq').each(function(i, elem) {
 groupId = $(elem).attr('id');



 if (!$('#' + groupId + ' input').is(":checked")) { countempty += 1;
   if (!$('#' + groupId).hasClass('redLine')){ $('#' + groupId).addClass('redLine'); }

} else { if ($('#' + groupId).hasClass('redLine')){ $('#' + groupId).removeClass('redLine'); }  }



});



$('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > input').each(function(i, elem) {
if(  !$(elem).val() && !$(elem).hasClass('notReq')) { countempty += 1;

if (!$(elem).hasClass('redLine')){ $(elem).addClass('redLine');}
 } else { if ($(elem).hasClass('redLine')){ $(elem).removeClass('redLine');} }





});

if (countempty < 1) { if (!$(currentTab).hasClass('tabFilled')) {$(currentTab).addClass('tabFilled');}  }
$('.field-type-number-bigint input').each(function(i, el) {
  if($(el).val().length ) {
   commafield = $(el).val().replace(/(\d)(?=(\d\d\d)+(?!\d))/g, "$1,");

$(el).val(commafield);

  }
});

}
function showHideNonwork() {
  console.log("showHide function ran");
  var comBlock = null;
  var facBlock = null;
  var allBlock = null;
  var facChecked = $('input[name="field_fac_bas_y_n[und]"]:checked').val();
  var comChecked = $('input[name="field_comm_does_state_offer[und]"]:checked').val();
  var allChecked = $('input[name="field_all_nonwork_separate_types[und]"]:checked').val();
  facBlock = !facChecked || facChecked == 'No' || allChecked == 'No' ? null : 1;
  comBlock = !comChecked || comChecked == 'No' || allChecked == 'No' ? null : 1;
  allBlock = (!allChecked || allChecked == 'Yes')|| (facChecked == 'No' && comChecked == 'No') ? null : 1;
  if(comBlock) {
    if ($('#showhidecomnw').hasClass('hideNW')) $('#showhidecomnw').removeClass('hideNW');
  } else {
    if (!$('#showhidecomnw').hasClass('hideNW')) $('#showhidecomnw').addClass('hideNW');
  }
  if(facBlock) {
    if ($('#showhidefacnw').hasClass('hideNW')) $('#showhidefacnw').removeClass('hideNW');
  } else {
    if (!$('#showhidefacnw').hasClass('hideNW')) $('#showhidefacnw').addClass('hideNW');
  }
  if(allBlock) {
    if ($('#showhideallnw').hasClass('hideNW')) $('#showhideallnw').removeClass('hideNW');
  } else {
    if (!$('#showhideallnw').hasClass('hideNW')) $('#showhideallnw').addClass('hideNW');
  }




}

function emptyFieldWarn() {
   var warnText = "";

   var centerPopup = $('div.vertical-tabs-panes');

  if (!$(this).hasClass('activeTwo')) {
    var lastlink = $('.vertical-tabs-list li a.activeTwo').attr("href");
    var heading =$('.vertical-tabs-list li a.activeTwo').text();
    var queryString =  $(location).attr('pathname');

    $('div.vertical-tabs-panes > fieldset.activeTwo .fieldReq').each(function(i, elem) {
     groupId = $(elem).attr('id');
     var radioLabel = $('label[for="' + groupId + '"]').text().length ? $('label[for="' + groupId + '"]').text() : $('label[for="' + groupId + '-und"]').text();


     if (!$('#' + groupId + ' input').is(":checked")) { warnText += "<li>" + radioLabel + "</li>";
    // $('#' + groupId).addClass('redLine');

    }



    });

  $('div.vertical-tabs-panes > fieldset.activeTwo .visDiv > input').each(function(i, elem) {
  if(  !$(elem).val() && !$(elem).hasClass('notReq')) {
  var label = "<li>" + $('label[for="'+ $(elem).attr('id')+'"]').text() + "</li>";
  // $(elem).addClass('redLine');
   warnText += label;}

  });


   var tabfilled = false;
  $('#idd_popup #popupText').empty() ;
  if (warnText != "") {

     $('#idd_popup #popupText').append("<p>The following fields are required in the section <strong>" + heading + "</span></strong></p><ul>" + warnText + "</ul>");
    /* $('#idd_popup').popup({
                   tooltipanchor: centerPopup,
                autoopen: true,
                horizontal: 'center',
                vertical: 'center',
                type: 'overlay',
                closeelement: '.basic_close',
              transition: 'all 0.9s'
            }); */

  } else { tabfilled = true;    if(tabfilled) { $('.vertical-tabs-list li a.activeTwo').addClass('tabFilled'); }}
  $('.vertical-tabs-list li a').each(function(i, el) {

        $(el).removeClass('activeTwo');


  });


  $('.vertical-tabs-panes > fieldset').each(function(i, el) {

        $(el).removeClass('activeTwo');


  });

  /*setTimeout(function(){
    $('#idd_popup').popup('hide');
  }, 5000); */

   }

}



})(jQuery);
