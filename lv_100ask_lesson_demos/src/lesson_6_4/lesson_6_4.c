/**
 ******************************************************************************
 * @file    lesson_6_4.c
 * @author  百问科技
 * @version V1.0
 * @date    2024-9-29
 * @brief	Lesson 6_4 demo
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2024-9-29     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2024 深圳百问网科技有限公司<https://www.100ask.net/>
 * All rights reserved
 *
 * 代码配套的视频教程：
 *      B站：   https://www.bilibili.com/video/BV1WE421K75k
 *      百问网：https://fnwcn.xetslk.com/s/39njGj
 *      淘宝：  https://detail.tmall.com/item.htm?id=779667445604
 *
 * 本程序遵循MIT协议, 请遵循协议！
 * 免责声明: 百问网编写的文档, 仅供学员学习使用, 可以转发或引用(请保留作者信息),禁止用于商业用途！
 * 免责声明: 百问网编写的程序, 仅供学习参考，假如被用于商业用途, 但百问网不承担任何后果！
 *
 * 百问网学习平台   : https://www.100ask.net
 * 百问网交流社区   : https://forums.100ask.net
 * 百问网LVGL文档   : https://lvgl.100ask.net
 * 百问网官方B站    : https://space.bilibili.com/275908810
 * 百问网官方淘宝   : https://100ask.taobao.com
 * 百问网微信公众号 ：百问科技 或 baiwenkeji
 * 联系我们(E-mail):  support@100ask.net 或 fae_100ask@163.com
 *
 *                             版权所有，盗版必究。
 ******************************************************************************
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_lesson_demos.h"

#if LV_USE_LESSON_DEMO_6_4 && LV_USE_MONKEY

#include "lesson_6_4.h"


/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lesson_6_4(void)
{
#if 1 // 6_4
    // 主函数中要调用 lv_demo_widgets();
    /*Create pointer monkey test*/
    lv_monkey_config_t config;
    lv_monkey_config_init(&config);
    config.type = LV_INDEV_TYPE_POINTER;
    config.period_range.min = 10;
    config.period_range.max = 100;
    lv_monkey_t * monkey = lv_monkey_create(&config);

    /*Start monkey test*/
    lv_monkey_set_enable(monkey, true);

    // lv_monkey_delete(monkey); // delete

#endif
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


#endif /* LV_USE_LESSON_DEMO_6_4 */
