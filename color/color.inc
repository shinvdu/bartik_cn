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
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Bartik (Default)'),
      'colors' => array(
        'bg' => '#ffffff',
        'link' => '#0073b6',
        'top' => '#4a4a4a',
        'bottom' => '#4e4e4e',
        'text' => '#3b3b3b',
        'sidebar' => '#feffff',
        'sidebarborders' => '#d0d0d0',
        'footer' => '#161617',
      ),
    ),
    'Blue Lagoon' => array(
      'title' => t('Blue Lagoon'),
      'colors' => array(
        'bg' => '#ffffff',
        'link' => '#288CC9',
        'top' => '#0779bf',
        'bottom' => '#48a9e4',
        'text' => '#3b3b3b',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#06232b',
      ),
    ),
    'Firehouse' => array(
      'title' => t('Firehouse'),
      'colors' => array(
        'bg' => '#ffffff',
        'link' => '#d6121f',
        'top' => '#cd2d2d',
        'bottom' => '#cf3535',
        'text' => '#3b3b3b',
        'sidebar' => '#f1f1f1',
        'sidebarborders' => '#c2c2c2',
        'footer' => '#1f1d1c',
      ),
    ),
    'Plum' => array(
      'title' => t('Plum'),
      'colors' => array(
        'bg' => '#fffdf7',
        'link' => '#9d408d',
        'top' => '#4c1c58',
        'bottom' => '#593662',
        'text' => '#301313',
        'sidebar' => '#f8f3e7',
        'sidebarborders' => '#e4e3d4',
        'footer' => '#2C2C28',
      ),
    ),
    'Fresh' => array(
      'title' => t('Fresh'),
      'colors' => array(
        'bg' => '#f9f9f9',
        'link' => '#0aa9ab',
        'top' => '#d0eae8',
        'bottom' => '#cbe1e0',
        'text' => '#585858',
        'sidebar' => '#feffff',
        'sidebarborders' => '#e7f0f2',
        'footer' => '#2b3037',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
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
