/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "esp_ui.h"
#include "stylesheet/dark/core_data.h"
#include "stylesheet/dark/app_launcher_data.h"
#include "stylesheet/dark/recents_screen_data.h"
#include "stylesheet/dark/gesture_data.h"
#include "stylesheet/dark/navigation_bar_data.h"
#include "stylesheet/dark/status_bar_data.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Home */
#define ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_HOME_DATA()                                     \
    {                                                                             \
        .status_bar = {                                                           \
            .data = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_STATUS_BAR_DATA(),                  \
            .visual_mode = ESP_UI_STATUS_BAR_VISUAL_MODE_SHOW_FIXED,              \
        },                                                                        \
        .navigation_bar = {                                                       \
            .data = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_NAVIGATION_BAR_DATA(),              \
            .visual_mode = ESP_UI_NAVIGATION_BAR_VISUAL_MODE_SHOW_FLEX,           \
        },                                                                        \
        .app_launcher = {                                                         \
            .data = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_APP_LAUNCHER_DATA(),                \
        },                                                                        \
        .recents_screen = {                                                       \
            .data = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_RECENTS_SCREEN_DATA(),              \
            .status_bar_visual_mode = ESP_UI_STATUS_BAR_VISUAL_MODE_HIDE,         \
            .navigation_bar_visual_mode = ESP_UI_NAVIGATION_BAR_VISUAL_MODE_HIDE, \
        },                                                                        \
        .flags = {                                                                \
            .enable_status_bar = 1,                                               \
            .enable_navigation_bar = 1,                                           \
            .enable_app_launcher_flex_size = 1,                                   \
            .enable_recents_screen = 1,                                           \
            .enable_recents_screen_flex_size = 1,                                 \
            .enable_recents_screen_hide_when_no_snapshot = 0,                     \
        },                                                                        \
    }

/* Manager */
#define ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_MANAGER_DATA()             \
    {                                                        \
        .gesture = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_GESTURE_DATA(), \
        .gesture_mask_indicator_trigger_time_ms = 150,       \
        .recents_screen = {                                  \
            .drag_snapshot_y_step = 10,                      \
            .drag_snapshot_y_threshold = 50,                 \
            .drag_snapshot_angle_threshold = 60,             \
            .delete_snapshot_y_threshold = 50,               \
        },                                                   \
        .flags = {                                           \
            .enable_gesture = 1,                             \
            .enable_recents_screen_snapshot_drag = 1,        \
        },                                                   \
    }

/* Phone */
#define ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_STYLESHEET()               \
    {                                                        \
        .core = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_CORE_DATA(),       \
        .home = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_HOME_DATA(),       \
        .manager = ESP_UI_PHONE_[T_WIDTH]_[T_HEIGHT]_DARK_MANAGER_DATA(), \
    }

#ifdef __cplusplus
}
#endif