(function ($, Drupal) {

  'use strict';

  Drupal.behaviors.ORCIDInputMask = {
    attach: function (context, settings) {
      new InputMask({
        masked: document.querySelectorAll('.text-orcid-element.masked'),
        mNum: 'XZdDmMyY9?',
        mChar: '?',
      });
    }
  };
})(jQuery, Drupal);
