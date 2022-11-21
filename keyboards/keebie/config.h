// Copyright 2022 koh1106 (@koh1106)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"
/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
/* Note: These are not used for arm boards. They're here purely as documentation. */

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B10, A5, A6, A7 }
#define MATRIX_COL_PINS { B14, A8, A10, A15, B3, B4, B5, B7, A1, A2, A3, A4 }

#define DIODE_DIRECTION COL2ROW
