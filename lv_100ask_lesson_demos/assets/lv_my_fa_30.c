/*******************************************************************************
 * Size: 30 px
 * Bpp: 1
 * Opts: --bpp 1 --size 30 --no-compress --font FontAwesome5-Solid+Brands+Regular.woff --range 62183,63143 --format lvgl -o lv_my_fa_30.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_MY_FA_30
#define LV_MY_FA_30 1
#endif

#if LV_MY_FA_30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+F2E7 "" */
    0x77, 0x70, 0x7, 0x77, 0x70, 0x1f, 0x77, 0x70,
    0x3f, 0x77, 0x70, 0x7f, 0xf7, 0x78, 0x7f, 0xf7,
    0x78, 0xff, 0xf7, 0x78, 0xff, 0xf7, 0x79, 0xff,
    0xf7, 0x79, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xf9,
    0xff, 0x7f, 0xf1, 0xff, 0x7f, 0xf1, 0xff, 0x3f,
    0xe0, 0xff, 0xf, 0x80, 0xff, 0xf, 0x80, 0x7f,
    0xf, 0x80, 0x3f, 0xf, 0x80, 0x1f, 0xf, 0x80,
    0x1f, 0xf, 0x80, 0x1f, 0xf, 0x80, 0x1f, 0xf,
    0x80, 0x1f, 0xf, 0x80, 0x1f, 0xf, 0x80, 0x1f,
    0xf, 0x80, 0x3f, 0xf, 0x80, 0x3f, 0xf, 0x80,
    0x3f, 0xf, 0x80, 0x3f, 0xf, 0x80, 0x3f, 0xf,
    0x80, 0x3f,

    /* U+F6A7 "" */
    0x0, 0x0, 0x78, 0x0, 0x0, 0x0, 0x7, 0xf8,
    0x0, 0x0, 0x0, 0x7f, 0xf8, 0x0, 0x0, 0x7,
    0xff, 0xf8, 0x0, 0x0, 0x7f, 0xff, 0xf8, 0x0,
    0x3, 0xff, 0xff, 0xf0, 0x0, 0xf, 0xff, 0xff,
    0xc0, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x0, 0x38,
    0x0, 0x70, 0x0, 0x0, 0xe0, 0x1, 0xc0, 0x0,
    0x3, 0x80, 0x7, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0x0, 0x7, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xff, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0x3,
    0xff, 0xff, 0xff, 0xf0, 0x3, 0xc0, 0x0, 0xf,
    0x0, 0xf, 0x0, 0x0, 0x3c, 0x0, 0x3c, 0x0,
    0x0, 0xf0, 0x0, 0xf0, 0x0, 0x3, 0xc0, 0x3,
    0xc0, 0x0, 0xf, 0x0, 0x1f, 0xff, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff,
    0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0xf0, 0x7, 0x80, 0x3c,
    0x3, 0xc0, 0x1e, 0x0, 0xf0, 0xf, 0x0, 0x78,
    0x3, 0xc0, 0x38, 0x1, 0xe0, 0x7, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 390, .box_w = 24, .box_h = 30, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 90, .adv_w = 600, .box_w = 38, .box_h = 30, .ofs_x = 0, .ofs_y = -4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x3c0
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 62183, .range_length = 961, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_my_fa_30 = {
#else
lv_font_t lv_my_fa_30 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -11,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_MY_FA_30*/

