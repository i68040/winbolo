/*
 * $Id$
 *
 * Copyright (c) 1998-2008 John Morrison.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

/*********************************************************
*Name:          Positions
*Filename:      positions.h
*Author:        John Morrison
*Creation Date: 28/10/98
*Last Modified:  9/11/99
*Purpose:
*  Defines where things are on the window
*********************************************************/

#ifndef POSITIONS_H 
#define POSITIONS_H 


/* Offset of the man view screen from the window edge */
#define MAIN_OFFSET_X 81
#define MAIN_OFFSET_Y 18

/* Offsets of the build select boxes from the window edge */
#define BS_ITEM_SIZE_X 54
#define BS_ITEM_SIZE_Y 50
#define BS_TREE_OFFSET_X 17
#define BS_TREE_OFFSET_Y 13
#define BS_ROAD_OFFSET_X BS_TREE_OFFSET_X
#define BS_ROAD_OFFSET_Y (BS_TREE_OFFSET_Y + BS_ITEM_SIZE_Y)
#define BS_BUILDING_OFFSET_X BS_TREE_OFFSET_X
#define BS_BUILDING_OFFSET_Y (BS_TREE_OFFSET_Y + 2 * BS_ITEM_SIZE_Y)
#define BS_PILLBOX_OFFSET_X BS_TREE_OFFSET_X
#define BS_PILLBOX_OFFSET_Y (BS_TREE_OFFSET_Y + 3 * BS_ITEM_SIZE_Y)
#define BS_MINE_OFFSET_X BS_TREE_OFFSET_X
#define BS_MINE_OFFSET_Y (BS_TREE_OFFSET_Y + 4 * BS_ITEM_SIZE_Y)

/* Offsets of the build select dots from the window edge */
#define BS_DOT_ITEM_SIZE_X 6
#define BS_DOT_ITEM_SIZE_Y 6
#define BS_DOT_TREE_OFFSET_X 8
#define BS_DOT_TREE_OFFSET_Y 35
#define BS_DOT_ROAD_OFFSET_X BS_DOT_TREE_OFFSET_X
#define BS_DOT_ROAD_OFFSET_Y 85
#define BS_DOT_BUILDING_OFFSET_X BS_DOT_TREE_OFFSET_X
#define BS_DOT_BUILDING_OFFSET_Y 135
#define BS_DOT_PILLBOX_OFFSET_X BS_DOT_TREE_OFFSET_X
#define BS_DOT_PILLBOX_OFFSET_Y 185
#define BS_DOT_MINE_OFFSET_X BS_DOT_TREE_OFFSET_X
#define BS_DOT_MINE_OFFSET_Y 235

/* The status items on the right of the main view */

/* Size of the tanks, base and pills windows */
#define STATUS_PILLS_WIDTH 90
#define STATUS_PILLS_HEIGHT 66
#define STATUS_BASES_WIDTH 90
#define STATUS_BASES_HEIGHT 66
#define STATUS_TANKS_WIDTH 90
#define STATUS_TANKS_HEIGHT 66
/* Offset from the window edges of them */
#define STATUS_PILLS_LEFT 335
#define STATUS_PILLS_TOP 88
#define STATUS_BASES_LEFT 335
#define STATUS_BASES_TOP 157
#define STATUS_TANKS_LEFT 335
#define STATUS_TANKS_TOP 18 /* 13 */



#define STATUS_ITEM_GAP_X 2
#define STATUS_ITEM_GAP_Y 9

#define STATUS_BASE_1_X 4
#define STATUS_BASE_1_Y 4
#define STATUS_BASE_2_X (STATUS_BASE_1_X + STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X)
#define STATUS_BASE_2_Y STATUS_BASE_1_Y 
#define STATUS_BASE_3_X (STATUS_BASE_1_X + 2 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_3_Y STATUS_BASE_1_Y 
#define STATUS_BASE_4_X (STATUS_BASE_1_X + 3 *(STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_4_Y STATUS_BASE_1_Y 
#define STATUS_BASE_5_X (STATUS_BASE_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_5_Y STATUS_BASE_1_Y 
#define STATUS_BASE_6_X (STATUS_BASE_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_6_Y STATUS_BASE_1_Y 
#define STATUS_BASE_7_X STATUS_BASE_1_X 
#define STATUS_BASE_7_Y (STATUS_BASE_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_BASE_8_X (STATUS_BASE_1_X + (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_8_Y (STATUS_BASE_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_BASE_9_X (STATUS_BASE_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_9_Y (STATUS_BASE_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_BASE_10_X (STATUS_BASE_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_10_Y (STATUS_BASE_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_BASE_11_X STATUS_BASE_1_X 
#define STATUS_BASE_11_Y (STATUS_BASE_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_BASE_12_X (STATUS_BASE_1_X + (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_12_Y (STATUS_BASE_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_BASE_13_X (STATUS_BASE_1_X + 2 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_13_Y (STATUS_BASE_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_BASE_14_X (STATUS_BASE_1_X + 3 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_14_Y (STATUS_BASE_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_BASE_15_X (STATUS_BASE_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_15_Y (STATUS_BASE_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_BASE_16_X (STATUS_BASE_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_BASE_16_Y (STATUS_BASE_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
/* The middle square for drawing the icon */
#define STATUS_BASES_MIDDLE_ICON_X 37
#define STATUS_BASES_MIDDLE_ICON_Y ((STATUS_BASE_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y) -2 )

/* Pillbox Status Position */
#define STATUS_PILLBOX_1_X 4
#define STATUS_PILLBOX_1_Y  4
#define STATUS_PILLBOX_2_X (STATUS_PILLBOX_1_X + STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X)
#define STATUS_PILLBOX_2_Y STATUS_PILLBOX_1_Y 
#define STATUS_PILLBOX_3_X (STATUS_PILLBOX_1_X + 2 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_3_Y STATUS_PILLBOX_1_Y 
#define STATUS_PILLBOX_4_X (STATUS_PILLBOX_1_X + 3 *(STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_4_Y STATUS_PILLBOX_1_Y 
#define STATUS_PILLBOX_5_X (STATUS_PILLBOX_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_5_Y STATUS_PILLBOX_1_Y 
#define STATUS_PILLBOX_6_X (STATUS_PILLBOX_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_6_Y STATUS_PILLBOX_1_Y 
#define STATUS_PILLBOX_7_X STATUS_PILLBOX_1_X 
#define STATUS_PILLBOX_7_Y (STATUS_PILLBOX_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_PILLBOX_8_X (STATUS_PILLBOX_1_X + (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_8_Y (STATUS_PILLBOX_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_PILLBOX_9_X (STATUS_PILLBOX_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_9_Y (STATUS_PILLBOX_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_PILLBOX_10_X (STATUS_PILLBOX_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_10_Y (STATUS_PILLBOX_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_PILLBOX_11_X STATUS_PILLBOX_1_X 
#define STATUS_PILLBOX_11_Y (STATUS_PILLBOX_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_PILLBOX_12_X (STATUS_PILLBOX_1_X + (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_12_Y (STATUS_PILLBOX_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_PILLBOX_13_X (STATUS_PILLBOX_1_X + 2 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_13_Y (STATUS_PILLBOX_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_PILLBOX_14_X (STATUS_PILLBOX_1_X + 3 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_14_Y (STATUS_PILLBOX_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_PILLBOX_15_X (STATUS_PILLBOX_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_15_Y (STATUS_PILLBOX_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_PILLBOX_16_X (STATUS_PILLBOX_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_PILLBOX_16_Y (STATUS_PILLBOX_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
/* The middle square for drawing the icon */
#define STATUS_PILLS_MIDDLE_ICON_X 37
#define STATUS_PILLS_MIDDLE_ICON_Y ((STATUS_BASE_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y) -2 )


/* Tank Status positions */
#define STATUS_TANKS_1_X 4
#define STATUS_TANKS_1_Y  4
#define STATUS_TANKS_2_X (STATUS_TANKS_1_X + STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X)
#define STATUS_TANKS_2_Y STATUS_TANKS_1_Y 
#define STATUS_TANKS_3_X (STATUS_TANKS_1_X + 2 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_3_Y STATUS_TANKS_1_Y 
#define STATUS_TANKS_4_X (STATUS_TANKS_1_X + 3 *(STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_4_Y STATUS_TANKS_1_Y 
#define STATUS_TANKS_5_X (STATUS_TANKS_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_5_Y STATUS_TANKS_1_Y 
#define STATUS_TANKS_6_X (STATUS_TANKS_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_6_Y STATUS_TANKS_1_Y 
#define STATUS_TANKS_7_X STATUS_TANKS_1_X 
#define STATUS_TANKS_7_Y (STATUS_TANKS_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_TANKS_8_X (STATUS_TANKS_1_X + (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_8_Y (STATUS_TANKS_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_TANKS_9_X (STATUS_TANKS_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_9_Y (STATUS_TANKS_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_TANKS_10_X (STATUS_TANKS_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_10_Y (STATUS_TANKS_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y)
#define STATUS_TANKS_11_X STATUS_TANKS_1_X 
#define STATUS_TANKS_11_Y (STATUS_TANKS_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_TANKS_12_X (STATUS_TANKS_1_X + (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_12_Y (STATUS_TANKS_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_TANKS_13_X (STATUS_TANKS_1_X + 2 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_13_Y (STATUS_TANKS_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_TANKS_14_X (STATUS_TANKS_1_X + 3 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_14_Y (STATUS_TANKS_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_TANKS_15_X (STATUS_TANKS_1_X + 4 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_15_Y (STATUS_TANKS_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
#define STATUS_TANKS_16_X (STATUS_TANKS_1_X + 5 * (STATUS_ITEM_GAP_X + STATUS_ITEM_SIZE_X))
#define STATUS_TANKS_16_Y (STATUS_TANKS_1_Y + 2 * (STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y))
/* The middle square for drawing the icon */
#define STATUS_TANKS_MIDDLE_ICON_X 37
#define STATUS_TANKS_MIDDLE_ICON_Y ((STATUS_TANKS_1_Y + STATUS_ITEM_GAP_Y + STATUS_ITEM_SIZE_Y) -2 )



/* 3x - 80y - 9 Between Items From bottom of icons to top 13 8 from left */  

#define BAR_TANK_MULTIPLY 2 /* Times item amounts by 2 for 80 pixel high bars */
#define STATUS_TANK_BARS_TOP 155 // was 105 but it cut off part of the tombstone
#define STATUS_TANK_BARS_HEIGHT 85 // was 135 but it cut off part of the tombstone
#define STATUS_TANK_BARS_WIDTH 3
#define STATUS_TANK_BARS_GAP 9
#define STATUS_TANK_BARS_TOTALWIDTH ((3 * STATUS_TANK_BARS_GAP)+(4 * STATUS_TANK_BARS_WIDTH))
#define STATUS_TANK_SHELLS 446
#define STATUS_TANK_MINES ((STATUS_TANK_BARS_WIDTH + STATUS_TANK_BARS_GAP))
#define STATUS_TANK_ARMOUR (2 * (STATUS_TANK_BARS_WIDTH + STATUS_TANK_BARS_GAP))
#define STATUS_TANK_TREES (3 * (STATUS_TANK_BARS_WIDTH + STATUS_TANK_BARS_GAP))

#define BAR_BASE_MULTIPLY (2.0/3.0) /* Times item amounts by 2/3 for 54 pixel wide bars */
#define STATUS_BASE_BARS_TOP 230
#define STATUS_BASE_BARS_HEIGHT 3
#define STATUS_BASE_BARS_LEFT 350
#define STATUS_BASE_BARS_GAP 7
#define STATUS_BASE_SHELLS STATUS_BASE_BARS_TOP
#define STATUS_BASE_MINES (2 *(STATUS_BASE_BARS_HEIGHT + STATUS_BASE_BARS_GAP))
#define STATUS_BASE_ARMOUR ((STATUS_BASE_BARS_HEIGHT + STATUS_BASE_BARS_GAP))
#define STATUS_BASE_BARS_MAX_WIDTH 60
#define STATUS_BASE_BARS_TOTALHEIGHT ((3 * STATUS_BASE_BARS_HEIGHT)+(2* STATUS_BASE_BARS_GAP))

/* Kills - Deaths Positions */
#define STATUS_KILLS_TOP 85
#define STATUS_KILLS_LEFT 462
#define STATUS_KILLS_HEIGHT 10
#define STATUS_KILLS_WIDTH  10
#define STATUS_DEATHS_LEFT STATUS_KILLS_LEFT
#define STATUS_DEATHS_TOP 99


/* The message Window */
#define MESSAGE_TOP 272
#define MESSAGE_LEFT 21
#define MESSAGE_HEIGHT 35
#define MESSAGE_TOTALHEIGHT 100
#define MESSAGE_WIDTH 472
#define MESSAGE_TEXT_HEIGHT 17
#define MESSAGE_TOP_LINE_X 21
#define MESSAGE_TOP_LINE_Y 272
#define MESSAGE_BOTTOM_LINE_X 21
#define MESSAGE_BOTTOM_LINE_Y 289

#define MAN_STATUS_WIDTH 40
#define MAN_STATUS_HEIGHT 40

/* Position on the screen */
#define MAN_STATUS_X 443
#define MAN_STATUS_Y 27

#define MAN_STATUS_RADIUS 20
#define MAN_STATUS_CENTER_X MAN_STATUS_RADIUS
#define MAN_STATUS_CENTER_Y MAN_STATUS_RADIUS

/* Tails are 5 pixels big */
#define MAN_STATE_TAIL_SIZE_LENGTH 4

/* You want the items label to be slightly off from the left of the object */
#define LABEL_OFFSET_X 4


/* Size of the tank label back buffer */
#define TANK_LABEL_WIDTH 200
#define TANK_LABEL_HEIGHT 50

#endif /* POSITIONS_H */
