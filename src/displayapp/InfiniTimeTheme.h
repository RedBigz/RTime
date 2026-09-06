#pragma once

#include <lvgl/lvgl.h>

namespace Colors {
  static constexpr lv_color_t red = LV_COLOR_MAKE(0xf3, 0x8b, 0xa8);
  static constexpr lv_color_t orange = LV_COLOR_MAKE(0xfa, 0xb3, 0x87);
  static constexpr lv_color_t green = LV_COLOR_MAKE(0xa6, 0xe3, 0xa1);
  static constexpr lv_color_t blue = LV_COLOR_MAKE(0x89, 0xb4, 0xfa);
  static constexpr lv_color_t lightGray = LV_COLOR_MAKE(0xa6, 0xad, 0xc8);
  static constexpr lv_color_t gray = LV_COLOR_MAKE(0x50, 0x50, 0x50);
  static constexpr lv_color_t lavender = LV_COLOR_MAKE(0xb4, 0xbe, 0xfe);

  static constexpr lv_color_t bg = LV_COLOR_MAKE(0x5d, 0x69, 0x7e);
  static constexpr lv_color_t bgAltSpecular = LV_COLOR_MAKE(0x45, 0x47, 0x5a);
  static constexpr lv_color_t bgAlt = LV_COLOR_MAKE(0x31, 0x32, 0x44);
  static constexpr lv_color_t bgDark = LV_COLOR_MAKE(0x18, 0x18, 0x18);
  static constexpr lv_color_t highlight = green;
};

/**
 * Initialize the default
 * @param color_primary the primary color of the theme
 * @param color_secondary the secondary color for the theme
 * @param flags ORed flags starting with `LV_THEME_DEF_FLAG_...`
 * @param font_small pointer to a small font
 * @param font_normal pointer to a normal font
 * @param font_subtitle pointer to a large font
 * @param font_title pointer to a extra large font
 * @return a pointer to reference this theme later
 */
lv_theme_t* lv_pinetime_theme_init();
