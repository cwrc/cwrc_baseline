/**
 * @file
 * Contains plugin implementation of the ckeditor audio plugin.
 */

(function () {

  CKEDITOR.plugins.add('audio', {
    requires: 'widget',
    icons: 'audio',
    lang: 'bg,ca,de,el,en,eu,es,fr,ru,uk,uz,zh-cn,fa',

    init : function (editor) {
      editor.widgets.add('audio', {
        button: editor.lang.audio.button,
        template: '<div class="ckeditor-html5-audio"></div>',
        editables: {},
        /*
         * Allowed content rules (http://docs.ckeditor.com/#!/guide/dev_allowed_content_rules):
         *  - div-s with text-align,float,margin-left,margin-right inline style rules and required ckeditor-html5-audio class.
         *  - audio tags with src and controls attributes.
         */
        allowedContent: 'div(!ckeditor-html5-audio){text-align,float,margin-left,margin-right}; audio[src,controls,controlslist,autoplay];',
        requiredContent: 'div(ckeditor-html5-audio); audio[src,controls];',
        upcast: function (element) {
          return element.name === 'div' && element.hasClass('ckeditor-html5-audio');
        },
        dialog: 'audio',
        init: function () {
          var allowdownload, advisorytitle, src = '', autoplay = '',
            align = this.element.getStyle('text-align');

          // If there's a child (the audio element)
          if (this.element.getChild(0)) {
            // Get it's attributes.
            src = this.element.getChild(0).getAttribute('src');
            autoplay = this.element.getChild(0).getAttribute('autoplay');
            allowdownload = !this.element.getChild(0).getAttribute('controlslist');
            advisorytitle = this.element.getChild(0).getAttribute('title');
          }

          if (src) {
            this.setData('src', src);

            if (align) {
              this.setData('align', align);
            }
            else {
              this.setData('align', 'none');
            }

            if (autoplay) {
              this.setData('autoplay', 'yes');
            }

            if (allowdownload) {
              this.setData('allowdownload', 'yes');
            }

            if (advisorytitle) {
              this.setData('advisorytitle', advisorytitle);
            }
          }
        },
        data: function () {
          // If there is an audio source.
          if (this.data.src) {
            // And there isn't a child (the audio element)
            if (!this.element.getChild(0)) {
              // Create a new <audio> element.
              var audioElement = new CKEDITOR.dom.element('audio');
              // Set the controls attribute.
              audioElement.setAttribute('controls', 'controls');
              // Append it to the container of the plugin.
              this.element.append(audioElement);
            }
            this.element.getChild(0).setAttribute('src', this.data.src);
          }

          this.element.removeStyle('float');
          this.element.removeStyle('margin-left');
          this.element.removeStyle('margin-right');

          if (this.data.align === 'none') {
            this.element.removeStyle('text-align');
          }
          else {
            this.element.setStyle('text-align', this.data.align);
          }

          if (this.data.align === 'left') {
            this.element.setStyle('float', this.data.align);
            this.element.setStyle('margin-right', '10px');
          }
          else if (this.data.align === 'right') {
            this.element.setStyle('float', this.data.align);
            this.element.setStyle('margin-left', '10px');
          }

          if (this.element.getChild(0)) {
            if (this.data.autoplay === 'yes') {
              this.element.getChild(0).setAttribute('autoplay', 'autoplay');
            }
            else {
              this.element.getChild(0).removeAttribute('autoplay');
            }

            if (this.data.allowdownload === 'yes') {
              this.element.getChild(0).removeAttribute('controlslist');
            }
            else {
              this.element.getChild(0).setAttribute('controlslist', 'nodownload');
            }

            if (this.data.advisorytitle) {
              this.element.getChild(0).setAttribute('title', this.data.advisorytitle);
            }
            else {
              this.element.getChild(0).removeAttribute('title');
            }
          }
        }
      });

      editor.ui.addButton('audio', {
        label : Drupal.t('Insert audio'),
        command : 'audio',
      });

      if (editor.contextMenu) {
        editor.addMenuGroup('audioGroup');
        editor.addMenuItem('audioPropertiesItem', {
          label: editor.lang.audio.audioProperties,
          icon: 'audio',
          command: 'audio',
          group: 'audioGroup'
        });

        editor.contextMenu.addListener(function (element) {
          if (element && element.getChild(0) && element.getChild(0).hasClass && element.getChild(0).hasClass('ckeditor-html5-audio')) {
            return { audioPropertiesItem: CKEDITOR.TRISTATE_OFF };
          }
        });
      }

      CKEDITOR.dialog.add('audio', this.path + 'dialogs/audio.js');
    },
  });
})();
