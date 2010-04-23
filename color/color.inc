<?php
// $Id$

// Put the logo path into JavaScript for the Preview JS.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'bartik'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'bg' => t('Main background'),
    'link' => t('Link color'),
    'top' => t('Header top'),
    'bottom' => t('Header bottom'),
    'text' => t('Text color'),
    'sidebar' => t('Sidebar background'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Bartik (Default)'),
      'colors' => array(
        'bg' => '#ffffff',
        'link' => '#0073b6',
        'top' => '#000000',
        'bottom' => '#3d3d3d',
        'text' => '#3b3b3b',
        'sidebar' => '#feffff',
      ),
    ),
    'Blue Lagoon' => array(
      'title' => t('Blue Lagoon'),
      'colors' => array(
        'bg' => '#ffffff',
        'link' => '#0073b6',
        'top' => '#2385c2',
        'bottom' => '#5ab5ee',
        'text' => '#3b3b3b',
        'sidebar' => '#feffff',
      ),
    ),
    'Plum' => array(
      'title' => t('Plum'),
      'colors' => array(
        'bg' => '#f6eecc',
        'link' => '#6b2454',
        'top' => '#461453',
        'bottom' => '#6b2454',
        'text' => '#2c233f',
        'sidebar' => '#f0f0f0',
      ),
    ),
    'Fresh' => array(
      'title' => t('Fresh'),
      'colors' => array(
        'bg' => '#f6ffff',
        'link' => '#087095',
        'top' => '#78b91a',
        'bottom' => '#5b8b15',
        'text' => '#585858',
        'sidebar' => '#feffff',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/color.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_image' => 'color/preview.png',
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
