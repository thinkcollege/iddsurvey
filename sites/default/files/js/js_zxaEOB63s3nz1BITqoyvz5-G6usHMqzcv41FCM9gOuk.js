/*!
 * jQuery Popup Overlay
 *
 * @version 1.7.13
 * @requires jQuery v1.7.1+
 * @link http://vast-engineering.github.com/jquery-popup-overlay/
 */
;(function ($) {

    var $window = $(window);
    var options = {};
    var zindexvalues = [];
    var lastclicked = [];
    var scrollbarwidth;
    var bodymarginright = null;
    var opensuffix = '_open';
    var closesuffix = '_close';
    var visiblePopupsArray = [];
    var transitionsupport = null;
    var opentimer;
    var iOS = /(iPad|iPhone|iPod)/g.test(navigator.userAgent);
    var focusableElementsString = "a[href], area[href], input:not([disabled]), select:not([disabled]), textarea:not([disabled]), button:not([disabled]), iframe, object, embed, *[tabindex], *[contenteditable]";

    var methods = {

        _init: function (el) {
            var $el = $(el);
            var options = $el.data('popupoptions');
            lastclicked[el.id] = false;
            zindexvalues[el.id] = 0;

            if (!$el.data('popup-initialized')) {
                $el.attr('data-popup-initialized', 'true');
                methods._initonce(el);
            }

            if (options.autoopen) {
                setTimeout(function() {
                    methods.show(el, 0);
                }, 0);
            }
        },

        _initonce: function (el) {
            var $el = $(el);
            var $body = $('body');
            var $wrapper;
            var options = $el.data('popupoptions');
            var css;

            bodymarginright = parseInt($body.css('margin-right'), 10);
            transitionsupport = document.body.style.webkitTransition !== undefined ||
                                document.body.style.MozTransition !== undefined ||
                                document.body.style.msTransition !== undefined ||
                                document.body.style.OTransition !== undefined ||
                                document.body.style.transition !== undefined;

            if (options.type == 'tooltip') {
                options.background = false;
                options.scrolllock = false;
            }

            if (options.backgroundactive) {
                options.background = false;
                options.blur = false;
                options.scrolllock = false;
            }

            if (options.scrolllock) {
                // Calculate the browser's scrollbar width dynamically
                var parent;
                var child;
                if (typeof scrollbarwidth === 'undefined') {
                    parent = $('<div style="width:50px;height:50px;overflow:auto"><div/></div>').appendTo('body');
                    child = parent.children();
                    scrollbarwidth = child.innerWidth() - child.height(99).innerWidth();
                    parent.remove();
                }
            }

            if (!$el.attr('id')) {
                $el.attr('id', 'j-popup-' + parseInt((Math.random() * 100000000), 10));
            }

            $el.addClass('popup_content');

            if ((options.background) && (!$('#' + el.id + '_background').length)) {

                $body.append('<div id="' + el.id + '_background" class="popup_background"></div>');

                var $background = $('#' + el.id + '_background');

                $background.css({
                    opacity: 0,
                    visibility: 'hidden',
                    backgroundColor: options.color,
                    position: 'fixed',
                    top: 0,
                    right: 0,
                    bottom: 0,
                    left: 0
                });

                if (options.setzindex && !options.autozindex) {
                    $background.css('z-index', '100000');
                }

                if (options.transition) {
                    $background.css('transition', options.transition);
                }
            }

            $body.append(el);

            $el.wrap('<div id="' + el.id + '_wrapper" class="popup_wrapper" />');

            $wrapper = $('#' + el.id + '_wrapper');

            $wrapper.css({
                opacity: 0,
                visibility: 'hidden',
                position: 'absolute'
            });

            // Make div clickable in iOS
            if (iOS) {
                $wrapper.css('cursor', 'pointer');
            }

            if (options.type == 'overlay') {
                $wrapper.css('overflow','auto');
            }

            $el.css({
                opacity: 0,
                visibility: 'hidden',
                display: 'inline-block'
            });

            if (options.setzindex && !options.autozindex) {
                $wrapper.css('z-index', '100001');
            }

            if (!options.outline) {
                $el.css('outline', 'none');
            }

            if (options.transition) {
                $el.css('transition', options.transition);
                $wrapper.css('transition', options.transition);
            }

            // Hide popup content from screen readers initially
            $el.attr('aria-hidden', true);

            if (options.type == 'overlay') {
                $el.css({
                    textAlign: 'left',
                    position: 'relative',
                    verticalAlign: 'middle'
                });

                css = {
                    position: 'fixed',
                    width: '100%',
                    height: '100%',
                    top: 0,
                    left: 0,
                    textAlign: 'center'
                };

                if(options.backgroundactive){
                    css.position = 'absolute';
                    css.height = '0';
                    css.overflow = 'visible';
                }

                $wrapper.css(css);

                // CSS vertical align helper
                $wrapper.append('<div class="popup_align" />');

                $('.popup_align').css({
                    display: 'inline-block',
                    verticalAlign: 'middle',
                    height: '100%'
                });
            }

            // Add WAI ARIA role to announce dialog to screen readers
            $el.attr('role', 'dialog');

            var openelement =  (options.openelement) ? options.openelement : ('.' + el.id + opensuffix);

            $(openelement).each(function (i, item) {
                $(item).attr('data-popup-ordinal', i);

                if (!item.id) {
                    $(item).attr('id', 'open_' + parseInt((Math.random() * 100000000), 10));
                }
            });

            // Set aria-labelledby (if aria-label or aria-labelledby is not set in html)
            if (!($el.attr('aria-labelledby') || $el.attr('aria-label'))) {
                $el.attr('aria-labelledby', $(openelement).attr('id'));
            }

            // Show and hide tooltips on hover
            if(options.action == 'hover'){
                options.keepfocus = false;

                // Handler: mouseenter, focusin
                $(openelement).on('mouseenter', function (event) {
                    methods.show(el, $(this).data('popup-ordinal'));
                });

                // Handler: mouseleave, focusout
                $(openelement).on('mouseleave', function (event) {
                    methods.hide(el);
                });

            } else {

                // Handler: Show popup when clicked on `open` element
                $(document).on('click', openelement, function (event) {
                    event.preventDefault();

                    var ord = $(this).data('popup-ordinal');
                    setTimeout(function() { // setTimeout is to allow `close` method to finish (for issues with multiple tooltips)
                        methods.show(el, ord);
                    }, 0);
                });
            }

            if (options.closebutton) {
                methods.addclosebutton(el);
            }

            if (options.detach) {
                $el.hide().detach();
            } else {
                $wrapper.hide();
            }
        },

        /**
         * Show method
         *
         * @param {object} el - popup instance DOM node
         * @param {number} ordinal - order number of an `open` element
         */
        show: function (el, ordinal) {
            var $el = $(el);

            if ($el.data('popup-visible')) return;

            // Initialize if not initialized. Required for: $('#popup').popup('show')
            if (!$el.data('popup-initialized')) {
                methods._init(el);
            }
            $el.attr('data-popup-initialized', 'true');

            var $body = $('body');
            var options = $el.data('popupoptions');
            var $wrapper = $('#' + el.id + '_wrapper');
            var $background = $('#' + el.id + '_background');

            // `beforeopen` callback event
            callback(el, ordinal, options.beforeopen);

            // Remember last clicked place
            lastclicked[el.id] = ordinal;

            // Add popup id to visiblePopupsArray
            setTimeout(function() {
                visiblePopupsArray.push(el.id);
            }, 0);

            // Calculating maximum z-index
            if (options.autozindex) {

                var elements = document.getElementsByTagName('*');
                var len = elements.length;
                var maxzindex = 0;

                for(var i=0; i<len; i++){

                    var elementzindex = $(elements[i]).css('z-index');

                    if(elementzindex !== 'auto'){

                      elementzindex = parseInt(elementzindex, 10);

                      if(maxzindex < elementzindex){
                        maxzindex = elementzindex;
                      }
                    }
                }

                zindexvalues[el.id] = maxzindex;

                // Add z-index to the background
                if (options.background) {
                    if (zindexvalues[el.id] > 0) {
                        $('#' + el.id + '_background').css({
                            zIndex: (zindexvalues[el.id] + 1)
                        });
                    }
                }

                // Add z-index to the wrapper
                if (zindexvalues[el.id] > 0) {
                    $wrapper.css({
                        zIndex: (zindexvalues[el.id] + 2)
                    });
                }
            }

            if (options.detach) {
                $wrapper.prepend(el);
                $el.show();
            } else {
                $wrapper.show();
            }

            opentimer = setTimeout(function() {
                $wrapper.css({
                    visibility: 'visible',
                    opacity: 1
                });

                $('html').addClass('popup_visible').addClass('popup_visible_' + el.id);
                $wrapper.addClass('popup_wrapper_visible');
            }, 20); // 20ms required for opening animation to occur in FF

            // Disable background layer scrolling when popup is opened
            if (options.scrolllock) {
                $body.css('overflow', 'hidden');
                if ($body.height() > $window.height()) {
                    $body.css('margin-right', bodymarginright + scrollbarwidth);
                }
            }

            if(options.backgroundactive){
                //calculates the vertical align
                $el.css({
                    top:(
                        $window.height() - (
                            $el.get(0).offsetHeight +
                            parseInt($el.css('margin-top'), 10) +
                            parseInt($el.css('margin-bottom'), 10)
                        )
                    )/2 +'px'
                });
            }

            $el.css({
                'visibility': 'visible',
                'opacity': 1
            });

            // Show background
            if (options.background) {
                $background.css({
                    'visibility': 'visible',
                    'opacity': options.opacity
                });

                // Fix IE8 issue with background not appearing
                setTimeout(function() {
                    $background.css({
                        'opacity': options.opacity
                    });
                }, 0);
            }

            $el.data('popup-visible', true);

            // Position popup
            methods.reposition(el, ordinal);

            // Remember which element had focus before opening a popup
            $el.data('focusedelementbeforepopup', document.activeElement);

            // Handler: Keep focus inside dialog box
            if (options.keepfocus) {
                // Make holder div focusable
                $el.attr('tabindex', -1);

                // Focus popup or user specified element.
                // Initial timeout of 50ms is set to give some time to popup to show after clicking on
                // `open` element, and after animation is complete to prevent background scrolling.
                setTimeout(function() {
                    if (options.focuselement === 'closebutton') {
                        $('#' + el.id + ' .' + el.id + closesuffix + ':first').focus();
                    } else if (options.focuselement) {
                        $(options.focuselement).focus();
                    } else {
                        $el.focus();
                    }
                }, options.focusdelay);

            }

            // Hide main content from screen readers
            $(options.pagecontainer).attr('aria-hidden', true);

            // Reveal popup content to screen readers
            $el.attr('aria-hidden', false);

            callback(el, ordinal, options.onopen);

            if (transitionsupport) {
                $wrapper.one('transitionend', function() {
                    callback(el, ordinal, options.opentransitionend);
                });
            } else {
                callback(el, ordinal, options.opentransitionend);
            }

            // Handler: Reposition tooltip when window is resized
            if (options.type == 'tooltip') {
                $(window).on('resize.' + el.id, function () {
                    methods.reposition(el, ordinal);
                });
            }
        },

        /**
         * Hide method
         *
         * @param object el - popup instance DOM node
         * @param boolean outerClick - click on the outer content below popup
         */
        hide: function (el, outerClick) {
            // Get index of popup ID inside of visiblePopupsArray
            var popupIdIndex = $.inArray(el.id, visiblePopupsArray);

            // If popup is not opened, ignore the rest of the function
            if (popupIdIndex === -1) {
                return;
            }

            if(opentimer) clearTimeout(opentimer);

            var $body = $('body');
            var $el = $(el);
            var options = $el.data('popupoptions');
            var $wrapper = $('#' + el.id + '_wrapper');
            var $background = $('#' + el.id + '_background');

            $el.data('popup-visible', false);

            if (visiblePopupsArray.length === 1) {
                $('html').removeClass('popup_visible').removeClass('popup_visible_' + el.id);
            } else {
                if($('html').hasClass('popup_visible_' + el.id)) {
                    $('html').removeClass('popup_visible_' + el.id);
                }
            }

            // Remove popup from the visiblePopupsArray
            visiblePopupsArray.splice(popupIdIndex, 1);

            if($wrapper.hasClass('popup_wrapper_visible')) {
                $wrapper.removeClass('popup_wrapper_visible');
            }

            // Focus back on saved element
            if (options.keepfocus && !outerClick) {
                setTimeout(function() {
                    if ($($el.data('focusedelementbeforepopup')).is(':visible')) {
                        $el.data('focusedelementbeforepopup').focus();
                    }
                }, 0);
            }

            // Hide popup
            $wrapper.css({
                'visibility': 'hidden',
                'opacity': 0
            });
            $el.css({
                'visibility': 'hidden',
                'opacity': 0
            });

            // Hide background
            if (options.background) {
                $background.css({
                    'visibility': 'hidden',
                    'opacity': 0
                });
            }

            // Reveal main content to screen readers
            $(options.pagecontainer).attr('aria-hidden', false);

            // Hide popup content from screen readers
            $el.attr('aria-hidden', true);

            // `onclose` callback event
            callback(el, lastclicked[el.id], options.onclose);

            if (transitionsupport && $el.css('transition-duration') !== '0s') {
                $el.one('transitionend', function(e) {

                    if (!($el.data('popup-visible'))) {
                        if (options.detach) {
                            $el.hide().detach();
                        } else {
                            $wrapper.hide();
                        }
                    }

                    // Re-enable scrolling of background layer
                    if (options.scrolllock) {
                        setTimeout(function() {
                            $body.css({
                                overflow: 'visible',
                                'margin-right': bodymarginright
                            });
                        }, 10); // 10ms added for CSS transition in Firefox which doesn't like overflow:auto
                    }

                    callback(el, lastclicked[el.id], options.closetransitionend);
                });
            } else {
                if (options.detach) {
                    $el.hide().detach();
                } else {
                    $wrapper.hide();
                }

                // Re-enable scrolling of background layer
                if (options.scrolllock) {
                    setTimeout(function() {
                        $body.css({
                            overflow: 'visible',
                            'margin-right': bodymarginright
                        });
                    }, 10); // 10ms added for CSS transition in Firefox which doesn't like overflow:auto
                }

                callback(el, lastclicked[el.id], options.closetransitionend);
            }

            if (options.type == 'tooltip') {
                $(window).off('resize.' + el.id);
            }
        },

        /**
         * Toggle method
         *
         * @param {object} el - popup instance DOM node
         * @param {number} ordinal - order number of an `open` element
         */
        toggle: function (el, ordinal) {
            if ($(el).data('popup-visible')) {
                methods.hide(el);
            } else {
                setTimeout(function() {
                    methods.show(el, ordinal);
                }, 0);
            }
        },

        /**
         * Reposition method
         *
         * @param {object} el - popup instance DOM node
         * @param {number} ordinal - order number of an `open` element
         */
        reposition: function (el, ordinal) {
            var $el = $(el);
            var options = $el.data('popupoptions');
            var $wrapper = $('#' + el.id + '_wrapper');
            var $background = $('#' + el.id + '_background');

            ordinal = ordinal || 0;

            // Tooltip type
            if (options.type == 'tooltip') {
                $wrapper.css({
                    'position': 'absolute'
                });

                var $tooltipanchor;
                if (options.tooltipanchor) {
                    $tooltipanchor = $(options.tooltipanchor);
                } else if (options.openelement) {
                    $tooltipanchor = $(options.openelement).filter('[data-popup-ordinal="' + ordinal + '"]');
                } else {
                    $tooltipanchor = $('.' + el.id + opensuffix + '[data-popup-ordinal="' + ordinal + '"]');
                }

                var linkOffset = $tooltipanchor.offset();

                // Horizontal position for tooltip
                if (options.horizontal == 'right') {
                    $wrapper.css('left', linkOffset.left + $tooltipanchor.outerWidth() + options.offsetleft);
                } else if (options.horizontal == 'leftedge') {
                    $wrapper.css('left', linkOffset.left + $tooltipanchor.outerWidth() - $tooltipanchor.outerWidth() +  options.offsetleft);
                } else if (options.horizontal == 'left') {
                    $wrapper.css('right', $window.width() - linkOffset.left  - options.offsetleft);
                } else if (options.horizontal == 'rightedge') {
                    $wrapper.css('right', $window.width()  - linkOffset.left - $tooltipanchor.outerWidth() - options.offsetleft);
                } else {
                    $wrapper.css('left', linkOffset.left + ($tooltipanchor.outerWidth() / 2) - ($el.outerWidth() / 2) - parseFloat($el.css('marginLeft')) + options.offsetleft);
                }

                // Vertical position for tooltip
                if (options.vertical == 'bottom') {
                    $wrapper.css('top', linkOffset.top + $tooltipanchor.outerHeight() + options.offsettop);
                } else if (options.vertical == 'bottomedge') {
                    $wrapper.css('top', linkOffset.top + $tooltipanchor.outerHeight() - $el.outerHeight() + options.offsettop);
                } else if (options.vertical == 'top') {
                    $wrapper.css('bottom', $window.height() - linkOffset.top - options.offsettop);
                } else if (options.vertical == 'topedge') {
                    $wrapper.css('bottom', $window.height() - linkOffset.top - $el.outerHeight() - options.offsettop);
                } else {
                    $wrapper.css('top', linkOffset.top + ($tooltipanchor.outerHeight() / 2) - ($el.outerHeight() / 2) - parseFloat($el.css('marginTop')) + options.offsettop);
                }

            // Overlay type
            } else if (options.type == 'overlay') {

                // Horizontal position for overlay
                if (options.horizontal) {
                    $wrapper.css('text-align', options.horizontal);
                } else {
                    $wrapper.css('text-align', 'center');
                }

                // Vertical position for overlay
                if (options.vertical) {
                    $el.css('vertical-align', options.vertical);
                } else {
                    $el.css('vertical-align', 'middle');
                }
            }
        },

        /**
         * Add-close-button method
         *
         * @param {object} el - popup instance DOM node
         */
        addclosebutton: function (el) {
            var genericCloseButton;

            if ($(el).data('popupoptions').closebuttonmarkup) {
                genericCloseButton = $(options.closebuttonmarkup).addClass(el.id + '_close');
            } else {
                genericCloseButton = '<button class="popup_close ' + el.id + '_close" title="Close" aria-label="Close"><span aria-hidden="true">×</span></button>';
            }

            if ($(el).data('popup-initialized')){
                $(el).append(genericCloseButton);
            }

        }

    };

    /**
     * Callback event calls
     *
     * @param {object} el - popup instance DOM node
     * @param {number} ordinal - order number of an `open` element
     * @param {function} func - callback function
     */
    var callback = function (el, ordinal, func) {
        var options = $(el).data('popupoptions');
        var openelement =  (options.openelement) ? options.openelement : ('.' + el.id + opensuffix);
        var elementclicked = $(openelement + '[data-popup-ordinal="' + ordinal + '"]');
        if (typeof func == 'function') {
            func.call($(el), el, elementclicked);
        }
    };

    // Hide popup if ESC key is pressed
    $(document).on('keydown', function (event) {
        if(visiblePopupsArray.length) {
            var elementId = visiblePopupsArray[visiblePopupsArray.length - 1];
            var el = document.getElementById(elementId);

            if ($(el).data('popupoptions').escape && event.keyCode == 27) {
                methods.hide(el);
            }
        }
    });

    // Hide popup on click
    $(document).on('click', function (event) {
        if(visiblePopupsArray.length) {
            var elementId = visiblePopupsArray[visiblePopupsArray.length - 1];
            var el = document.getElementById(elementId);
            var closeButton = ($(el).data('popupoptions').closeelement) ? $(el).data('popupoptions').closeelement : ('.' + el.id + closesuffix);

            // If Close button clicked
            if ($(event.target).closest(closeButton).length) {
                event.preventDefault();
                methods.hide(el);
            }

            // If clicked outside of popup
            if ($(el).data('popupoptions').blur && !$(event.target).closest('#' + elementId).length && event.which !== 2 && $(event.target).is(':visible')) {

                if ($(el).data('popupoptions').background) {
                    // If clicked on popup cover
                    methods.hide(el);

                    // Older iOS/Safari will trigger a click on the elements below the cover,
                    // when tapping on the cover, so the default action needs to be prevented.
                    event.preventDefault();

                } else {
                    // If clicked on outer content
                    methods.hide(el, true);
                }
            }
        }
    });

    // Keep keyboard focus inside of popup
    $(document).on('keydown', function(event) {
        if(visiblePopupsArray.length && event.which == 9) {

            // If tab or shift-tab pressed
            var elementId = visiblePopupsArray[visiblePopupsArray.length - 1];
            var el = document.getElementById(elementId);

            // Get list of all children elements in given object
            var popupItems = $(el).find('*');

            // Get list of focusable items
            var focusableItems = popupItems.filter(focusableElementsString).filter(':visible');

            // Get currently focused item
            var focusedItem = $(':focus');

            // Get the number of focusable items
            var numberOfFocusableItems = focusableItems.length;

            // Get the index of the currently focused item
            var focusedItemIndex = focusableItems.index(focusedItem);

            // If popup doesn't contain focusable elements, focus popup itself
            if (numberOfFocusableItems === 0) {
                $(el).focus();
                event.preventDefault();
            } else {
                if (event.shiftKey) {
                    // Back tab
                    // If focused on first item and user preses back-tab, go to the last focusable item
                    if (focusedItemIndex === 0) {
                        focusableItems.get(numberOfFocusableItems - 1).focus();
                        event.preventDefault();
                    }

                } else {
                    // Forward tab
                    // If focused on the last item and user preses tab, go to the first focusable item
                    if (focusedItemIndex == numberOfFocusableItems - 1) {
                        focusableItems.get(0).focus();
                        event.preventDefault();
                    }
                }
            }
        }
    });

    /**
     * Plugin API
     */
    $.fn.popup = function (customoptions) {
        return this.each(function () {

            var $el = $(this);

            if (typeof customoptions === 'object') {  // e.g. $('#popup').popup({'color':'blue'})
                var opt = $.extend({}, $.fn.popup.defaults, $el.data('popupoptions'), customoptions);
                $el.data('popupoptions', opt);
                options = $el.data('popupoptions');

                methods._init(this);

            } else if (typeof customoptions === 'string') { // e.g. $('#popup').popup('hide')
                if (!($el.data('popupoptions'))) {
                    $el.data('popupoptions', $.fn.popup.defaults);
                    options = $el.data('popupoptions');
                }

                methods[customoptions].call(this, this);

            } else { // e.g. $('#popup').popup()
                if (!($el.data('popupoptions'))) {
                    $el.data('popupoptions', $.fn.popup.defaults);
                    options = $el.data('popupoptions');
                }

                methods._init(this);

            }

        });
    };

    $.fn.popup.defaults = {
        type: 'overlay',
        autoopen: false,
        background: true,
        backgroundactive: false,
        color: 'black',
        opacity: '0.5',
        horizontal: 'center',
        vertical: 'middle',
        offsettop: 0,
        offsetleft: 0,
        escape: true,
        blur: true,
        setzindex: true,
        autozindex: false,
        scrolllock: false,
        closebutton: false,
        closebuttonmarkup: null,
        keepfocus: true,
        focuselement: null,
        focusdelay: 50,
        outline: false,
        pagecontainer: null,
        detach: false,
        openelement: null,
        closeelement: null,
        transition: null,
        tooltipanchor: null,
        beforeopen: null,
        onclose: null,
        onopen: null,
        opentransitionend: null,
        closetransitionend: null
    };

})(jQuery);
;
(function($) {

  /**
   * Individual employment - if gross wages / hours < $10, then show minimum wage
   * stuff.
   */
 Drupal.behaviors.startScan = {
     attach: function (context, settings) {
   $( document ).one('ready',scanFieldsets);
   $('th').text('Order').hide();
   if (!$('#edit-group_contact_info p.nextSec').length)$('#edit-group_contact_info').append('<p class="nextSec"><a class="openTab" href="#edit-group_number_served">>> Next: Section I FY totals for all day and employment services >></a></p>');
   if (!$('#edit-group_number_served p.nextSec').length)$('#edit-group_number_served').append('<p class="nextSec"><a class="openTab" href="#edit-group_integ_employ_svces">>> Next: Section II Integrated employment services >></a></p>');
   if (!$('#edit-group_integ_employ_svces p.nextSec').length) $('#edit-group_integ_employ_svces').append('<p class="nextSec"><a class="openTab" href="#edit-group_facility_based">>> Next: Section III Facility-based work services >></a></p>');
    if (!$('#edit-group_facility_based p.nextSec').length) $('#edit-group_facility_based').append('<p class="nextSec"><a class="openTab" href="#edit-group_comm_bsd_non_work">>> Next: Section IV Community-based non-work services >></a></p>');
  if (!$('#edit-group_comm_bsd_non_work p.nextSec').length) $('#edit-group_comm_bsd_non_work').append('<p class="nextSec"><a class="openTab" href="#edit-group_fac_based">>> Next: Section V Facility-based non-work services >></a></p>');

    if (!$('#edit-group_fac_based p.nextSec').length) $('#edit-group_fac_based').append('<p class="nextSec"><a class="openTab" href="#edit-group_oth_emp_day_svcs">>> Next: Section VI Other employment and day services >></a></p>');
  if (!$('#edit-group_oth_emp_day_svcs p.nextSec').length) $('#edit-group_oth_emp_day_svcs').append('<p class="nextSec"><a class="openTab" href="#edit-group_final_step">>> Next: Section VII Final step >></a></p>');

 if (!$('#secIAutoFundTtl').length) $('.group-emp-day-svc-amount').append('<p id="secIAutoFundTtl" class="fundingTotal group-emp-day"></p>');

  if (!$('#integFundTtl').length) $('.group-integ-fund-amt').append('<p id="integFundTtl" class="fundingTotal group-integ-fund"></p>');
if (!$('#fbWorkAutoFundTtl').length)  $('.group-fac-amt').append('<p id="fbWorkAutoFundTtl" class="fundingTotal group-fac"></p>');
if (!$('#cbNworkAutoFundTtl').length) $('.group-comm-fund-amt').append('<p id="cbNworkAutoFundTtl" class="fundingTotal group-comm-fund"></p>');
if (!$('#fBNworkAutoFundTtl').length) $('.group_fac_non_w_fund_amt').append('<p id="fBNworkAutoFundTtl" class="fundingTotal group_fac_non"></p>');
if (!$('#othEmSvcAutoFundTtl').length) $('.group-oth-emp-day-fund-amt').append('<p id="othEmSvcAutoFundTtl" class="fundingTotal group-oth-emp"></p>');
if(!$('#finalTotals').length) $('#edit-field-save-and-return').append('<p id="finalTotals" class="fundingTotal"></p><p id="indivTotals" class="fundingTotal"></p>');
 if(!$('#saveWarn').length ) $('#edit-submit').after('<p id="saveWarn">Be sure to Save before exiting this page or you will lose your work.</p><a id="logOutbut" href="/user/logout">Log out</a>');
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
  if($('#currentYear').text().length > 0) {$(elem).text(curyearText); } else { $(elem).text(''); } });
  $('h1.page-header em').hide();

$('a.saveLeave').bind("click tap", saveAndLeave);

 }

 }

 Drupal.behaviors.hideHeds = {
     attach: function (context, settings) {
       $(".form-radios input").bind("click focus", hideSecHeds);

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
var secVnumServed = null;
var secVInumServed = null;
var autoTtlIndvs = null;

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
if(secIVnumServed && (secIVnumServed > secInumServed)) { $('#edit-field-comm-total-num-indiv .calcWarn').remove(); $('#edit-field-comm-total-num-indiv').append('<span class="calcWarn">The number of individuals entered in question 1a  above (' + commifyNum(secIVnumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-comm-total-num-indiv .calcWarn')) $('#edit-field-comm-total-num-indiv .calcWarn').remove(); }

secVnumServed = processNumVars('edit-field-fac-bas-num-indvs-und-0-value',true);
if(secVnumServed && (secVnumServed > secInumServed)) { $('#edit-field-fac-bas-num-indvs .calcWarn').remove(); $('#edit-field-fac-bas-num-indvs').append('<span class="calcWarn">The number of individuals entered in question 1a  above (' + commifyNum(secVnumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-fac-bas-num-indvs .calcWarn')) $('#edit-field-fac-bas-num-indvs .calcWarn').remove(); }

secVInumServed = processNumVars('edit-field-oth-emp-day-num-indv-und-0-value',true);
if(secVInumServed && (secVInumServed > secInumServed)) { $('#edit-field-oth-emp-day-num-indv .calcWarn').remove(); $('#edit-field-oth-emp-day-num-indv').append('<span class="calcWarn">The number of individuals entered in question 1a  above (' + commifyNum(secVInumServed) + ')  is greater than the total number of individuals served by your state in <a class="openTab bolded" href="#edit-group_number_served">Section I question 1</a> (' + commifyNum(secInumServed) + ')</span>'); } else { if ($('#edit-field-oth-emp-day-num-indv .calcWarn')) $('#edit-field-oth-emp-day-num-indv .calcWarn').remove(); }

if(secInumServed && (secIInumServed || secIIInumServed || secIVnumServed || secVnumServed || secVInumServed)) {

  $('#indivTotals').html('<span class="whiteBlock"><h3>Here are the individuals served totals you entered:</h3><ul><li><strong><a class="openTab bolded" href="#edit-group_number_served">Section I question 1, Total number of individuals in employment and day services in the F.Y.:</a> ' + commifyNum(secInumServed) + '</strong></li></ul><h4>Subtotals:</h4><ul style="margin-left: 30px">' + (secIInumServed ? '<li><a class="openTab" href="#edit-group_integ_employ_svces">Section II question 1a Total individuals in integrated employment services:</a> <strong>' + commifyNum(secIInumServed) + '</strong></li>' : '') + (secIIInumServed ? '<li><a class="openTab" href="#edit-group_facility_based">Section III question 1a Total individuals in facility-based work services</a>: <strong>' + commifyNum(secIIInumServed) + '</strong></li>' : '')  + (secIVnumServed ? '<li><a class="openTab" href="#edit-group_comm_bsd_non_work">Section IV question 1a Total individuals in community-based non-work services:</a> <strong>' + commifyNum(secIVnumServed) + '</strong></li>' : '')  + (secVnumServed ? '<li><a class="openTab" href="#edit-group_fac_based">Section V question 1a Total individuals in facility-based non-work services</a>: <strong>' + commifyNum(secVnumServed) + '</strong></li>' : '')  + (secVInumServed ? '<li><a class="openTab" href="#edit-group_oth_emp_day_svcs">Section VI question 1a Total individuals in other employment and day services</a>: <strong>' + commifyNum(secVInumServed) + '</strong></li>' : '') + '</ul></span>');
secInumServed = secInumServed ? secInumServed : 0;
secIInumServed = secIInumServed ? secIInumServed : 0;
secIIInumServed = secIIInumServed ? secIIInumServed : 0;
secIVnumServed = secIVnumServed ? secIVnumServed : 0;
secVnumServed = secVnumServed ? secVnumServed : 0;
secVInumServed = secVInumServed ? secVInumServed : 0;
autoTtlIndvs = secIInumServed + secIIInumServed + secIVnumServed + secVnumServed + secVInumServed;

  if( autoTtlIndvs && autoTtlIndvs != secInumServed)  { $('#edit-field-save-and-return #indivTotals .whiteBlock .calcWarn').remove(); $('#indivTotals .whiteBlock').append('<span class="calcWarn">The total of individuals served in Section I <u>' + commifyNum(secInumServed) + '</u>  does not match the total of individuals served in the subsections enumerated above: <u><strong>' + commifyNum(autoTtlIndvs) +'</strong></u>.  Please check your figures to be sure they are accurate.</span>'); } else { if ($('#edit-field-save-and-return #indivTotals .calcWarn')) $('#edit-field-save-and-return #indivTotals .calcWarn').remove(); }

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

    $('.group-comm-fund-amt #cbNworkAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question IV 2a: $' + cbNworkAutoFundTtl + '<span>'); } else {$('.group-comm-fund-amt #cbNworkAutoFundTtl').html('');}

    if (cbNworkAutoFundTtl && cbNworkEntrFundTtl != cbNworkAutoFundTtl) { $('.group-comm-fund-amt #cbNworkAutoFundTtl').next($('.calcWarn')).remove(); $('.group-comm-fund-amt #cbNworkAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 2 above ($' + cbNworkEntrFundTtl + ')  does not match the total of funds entered in the fields under question 2a</span>'); } else { if ($('.group-comm-fund-amt .calcWarn')) $('.group-comm-fund-amt .calcWarn').remove(); }


    fBNworkEntrFundTtl =  processNumVars('edit-field-fac-non-wk-tot-expend-und-0-value',false);
    fBNworkXix = processNumVars('edit-field-fac-non-w-titl-xix-amt-und-0-value',true);
    fBNworkState = processNumVars('edit-field-fac-non-w-stat-local-amt-und-0-value',true);
    fBNworkOthSelf = processNumVars('edit-field-fac-non-w-other-amt-und-0-value',true);
    if (fBNworkXix || fBNworkState || fBNworkOthSelf) { fBNworkAutoFundTtl = fBNworkXix + fBNworkState + fBNworkOthSelf;
      fBNworkAutoFundTtl = commifyNum(fBNworkAutoFundTtl);

      $('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question V 2a: $' + fBNworkAutoFundTtl + '<span>'); } else {$('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').html('');}

      if (fBNworkAutoFundTtl && fBNworkEntrFundTtl != fBNworkAutoFundTtl) { $('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').next($('.calcWarn')).remove(); $('.group_fac_non_w_fund_amt #fBNworkAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 2 above ($' + fBNworkEntrFundTtl + ')  does not match the total of funds entered in the fields under question 2a</span>'); } else { if ($('.group_fac_non_w_fund_amt .calcWarn')) $('.group_fac_non_w_fund_amt .calcWarn').remove(); }

          othEmSvcEntrFundTtl =  processNumVars('edit-field-oth-emp-day-total-funds-und-0-value',false);
          othEmSvcXix = processNumVars('edit-field-oth-emp-day-xix-amt-und-0-value',true);
          othEmSvcState = processNumVars('edit-field-oth-emp-day-stat-cty-amt-und-0-value',true);
          othEmSvcOthSelf = processNumVars('edit-field-oth-emp-day-oth-amt-und-0-value',true);
          if (othEmSvcXix || othEmSvcState || othEmSvcOthSelf) { othEmSvcAutoFundTtl = othEmSvcXix + othEmSvcState + othEmSvcOthSelf;
            othEmSvcAutoFundTtl = commifyNum(othEmSvcAutoFundTtl);

            $('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').html('<span class="whiteBlock">Total of amounts entered under question V 2a: $' + othEmSvcAutoFundTtl + '<span>'); } else {$('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').html('');}

            if (othEmSvcAutoFundTtl && othEmSvcEntrFundTtl != othEmSvcAutoFundTtl) { $('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').next($('.calcWarn')).remove(); $('.group-oth-emp-day-fund-amt #othEmSvcAutoFundTtl').after('<span class="calcWarn">The value of total funds entered in question 2 above ($' + othEmSvcEntrFundTtl + ')  does not match the total of funds entered in the fields under question 2a</span>'); } else { if ($('.group-oth-emp-day-fund-amt .calcWarn')) $('.group-oth-emp-day-fund-amt .calcWarn').remove(); }
if(secIEntrFundTtl && ( integEntrFundTtl || fbWorkEntrFundTtl || cbNworkEntrFundTtl || fBNworkEntrFundTtl || othEmSvcEntrFundTtl)) {
  var uri = window.location.href.split("#")[0];
            $('#finalTotals').html('<span class="whiteBlock"><h3>Here are the funding totals you entered:</h3><ul><li><strong><a class="openTab bolded" href="#edit-group_number_served">Section I question 4, Total dollars spent on employment and day services:</a> $' + secIEntrFundTtl + '</strong></li></ul><h4>Subtotals:</h4><ul style="margin-left: 30px">' + (integEntrFundTtl ? '<li><a class="openTab" href="#edit-group_integ_employ_svces">Section II question 4 Total dollars spent on integrated employment services:</a> <strong>$' + integEntrFundTtl + '</strong></li>' : '') + (fbWorkEntrFundTtl ? '<li><a class="openTab" href="#edit-group_facility_based">Section III question 3 Total dollars spent on facility-based work services</a>: <strong>$' + fbWorkEntrFundTtl + '</strong></li>' : '')  + (cbNworkEntrFundTtl ? '<li><a class="openTab" href="#edit-group_comm_bsd_non_work">Section IV question 3 Total dollars spent on community-based non-work services:</a> <strong>$' + cbNworkEntrFundTtl + '</strong></li>' : '')  + (fBNworkEntrFundTtl ? '<li><a class="openTab" href="#edit-group_fac_based">Section V question 2 Total dollars spent on facility-based non-work services</a>: <strong>$' + fBNworkEntrFundTtl + '</strong></li>' : '')  + (othEmSvcEntrFundTtl ? '<li><a class="openTab" href="#edit-group_oth_emp_day_svcs">Section VI question 3 Total dollars spent on other employment and day services</a>: <strong>$' + othEmSvcEntrFundTtl + '</strong></li>' : '') + '</ul></span>');
integNum = processNumVars('edit-field-integ-total-expenditure-und-0-value', true) != ''? processNumVars('edit-field-integ-total-expenditure-und-0-value', true): 0;
fbwNum = processNumVars('edit-field-fac-total-expendit-und-0-value', true) != '' ? processNumVars('edit-field-fac-total-expendit-und-0-value', true):0;
cbNwNum = processNumVars('edit-field-comm-total-expenditure-und-0-value', true) != '' ? processNumVars('edit-field-comm-total-expenditure-und-0-value', true):0;
fbNwNum = processNumVars('edit-field-fac-non-wk-tot-expend-und-0-value', true) != '' ? processNumVars('edit-field-fac-non-wk-tot-expend-und-0-value', true): 0;
othEmNum = processNumVars('edit-field-oth-emp-day-total-funds-und-0-value', true) != '' ? processNumVars('edit-field-oth-emp-day-total-funds-und-0-value', true):0;
            autoTotal = integNum + fbwNum + cbNwNum + fbNwNum + othEmNum;
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
;
/**
 * Attaches the calendar behavior to all required fields
 */
(function($) {
  function makeFocusHandler(e) {
    if (!$(this).hasClass('date-popup-init')) {
      var datePopup = e.data;
      // Explicitely filter the methods we accept.
      switch (datePopup.func) {
        case 'datepicker':
          $(this)
            .datepicker(datePopup.settings)
            .addClass('date-popup-init');
          $(this).click(function(){
            $(this).focus();
          });
          break;

        case 'timeEntry':
          $(this)
            .timeEntry(datePopup.settings)
            .addClass('date-popup-init');
          $(this).click(function(){
            $(this).focus();
          });
          break;

        case 'timepicker':
          // Translate the PHP date format into the style the timepicker uses.
          datePopup.settings.timeFormat = datePopup.settings.timeFormat
            // 12-hour, leading zero,
            .replace('h', 'hh')
            // 12-hour, no leading zero.
            .replace('g', 'h')
            // 24-hour, leading zero.
            .replace('H', 'HH')
            // 24-hour, no leading zero.
            .replace('G', 'H')
            // AM/PM.
            .replace('A', 'p')
            // Minutes with leading zero.
            .replace('i', 'mm')
            // Seconds with leading zero.
            .replace('s', 'ss');

          datePopup.settings.startTime = new Date(datePopup.settings.startTime);
          $(this)
            .timepicker(datePopup.settings)
            .addClass('date-popup-init');
          $(this).click(function(){
            $(this).focus();
          });
          break;
      }
    }
  }

  Drupal.behaviors.date_popup = {
    attach: function (context) {
      for (var id in Drupal.settings.datePopup) {
        $('#'+ id).bind('focus', Drupal.settings.datePopup[id], makeFocusHandler);
      }
    }
  };
})(jQuery);
;
