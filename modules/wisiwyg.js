// ckeditor additions for sidebars for js injector
// copy this code into the js field and set it inside the footer
if (typeof(CKEDITOR) !== 'undefined') {
  var styles = [
    { name: 'Primary', element: 'p', attributes: { 'class': 'primary-background' } },
    { name: 'Secondary', element: 'p', attributes: { 'class': 'secondary-background' } },
  ];

  Drupal.settings.customStyleSets = styles;
}