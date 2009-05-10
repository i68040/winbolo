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



#ifndef GLOBAL_H  /* Double inclusion protection */
#define GLOBAL_H
#define _UNICODE
#define UNICODE

/* Standard Includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Byte type def */
typedef unsigned char  BYTE;
typedef BYTE MAP_X, MAP_Y;
typedef float TURNTYPE;
typedef float SPEEDTYPE;

/* Boolean type */
#undef TRUE
#define TRUE 1
#undef FALSE
#define FALSE 0
typedef BYTE bool;
typedef BYTE Bool;


/* The world co-ordinate for tank - It is a 16 bit number*/
/* Top 8 bits (or byte) represent position on the map */
/* Next 2 bits represent the tanks sub-map position in pixels (0-15) */
/* Last 2 bits sub 40 pixels */
typedef unsigned short WORLD;

/* WORD data type */
typedef unsigned short WORD;



typedef unsigned long PlayerBitMap;

/* Strings of 36 charectors */
#define MAP_STR_SIZE 36


/* The type compatible with all other pointers types;
 * used where the corresponding type is indeterminate
 */
typedef void *Generic;

/* Fixed Strings, STRINGSIZE and SHORTSTRINGSIZE set buffer length.*/
#ifndef FILENAME_MAX  /* Usually somwhere in stdio.h */
#define FILENAME_MAX 256
#endif

Generic emalloc(size_t size);
void efree(Generic object);

#define	New(p)		((p) = emalloc(sizeof(*(p))))
#define	Dispose(p)	(efree(p))



/* The terrain types */

#define DEEP_SEA 0xFF 
#define BUILDING 0
#define RIVER 1
#define SWAMP 2
#define CRATER 3
#define ROAD 4
#define FOREST 5
#define RUBBLE 6
#define GRASS 7
#define HALFBUILDING 8
#define BOAT 9
#define MINE_SWAMP 10
#define MINE_CRATER 11
#define MINE_ROAD 12
#define MINE_FOREST 13
#define MINE_RUBBLE 14
#define MINE_GRASS 15

/* Mines start at the 10th element */
#define MINE_START 10 
#define MINE_END 15
#define MINE_SUBTRACT 8

/* Base Numbers 1-16 instead of "Magic Numbers" */
#define BASE_0 0
#define BASE_1 1
#define BASE_2 2
#define BASE_3 3
#define BASE_4 4
#define BASE_5 5
#define BASE_6 6
#define BASE_7 7
#define BASE_8 8
#define BASE_9 9
#define BASE_10 10
#define BASE_11 11
#define BASE_12 12
#define BASE_13 13
#define BASE_14 14
#define BASE_15 15
#define BASE_16 16

/* PILLBOX Numbers 1-16 instead of "Magic Numbers" */
#define PILLBOX_0 0
#define PILLBOX_1 1
#define PILLBOX_2 2
#define PILLBOX_3 3
#define PILLBOX_4 4
#define PILLBOX_5 5
#define PILLBOX_6 6
#define PILLBOX_7 7
#define PILLBOX_8 8
#define PILLBOX_9 9
#define PILLBOX_10 10
#define PILLBOX_11 11
#define PILLBOX_12 12
#define PILLBOX_13 13
#define PILLBOX_14 14
#define PILLBOX_15 15
#define PILLBOX_16 16

/* Tank Numbers 1-16 instead of "Magic Numbers" */
#define TANK_0 0
#define TANK_1 1
#define TANK_2 2
#define TANK_3 3
#define TANK_4 4
#define TANK_5 5
#define TANK_6 6
#define TANK_7 7
#define TANK_8 8
#define TANK_9 9
#define TANK_10 10
#define TANK_11 11
#define TANK_12 12
#define TANK_13 13
#define TANK_14 14
#define TANK_15 15
#define TANK_16 16

/* Angular Meausrement stuff */
#define BRADIANS_MAX 256.0
#define DEGREES_MAX 360.0
#define RADIANS_MAX (2.0 * 3.14)
#define BRADIANS_NORTH 0
#define BRADIANS_EAST 64
#define BRADIANS_SOUTH 128
#define BRADIANS_WEST 192
#define BRADIANS_NNEAST 16
#define BRADIANS_NEAST 32
#define BRADIANS_NEASTE 48
#define BRADIANS_SEASTE 80
#define BRADIANS_SEAST 96
#define BRADIANS_SSEAST 112
#define BRADIANS_SSWEST 144
#define BRADIANS_SWEST 160
#define BRADIANS_SWESTW 176
#define BRADIANS_NWESTW 208
#define BRADIANS_NWEST 224
#define BRADIANS_NNWEST 240
/* The gap between north to north north east to north east etc is 16 Bradians */
#define BRADIANS_GAP 16

/* Max Tanks in the game */
#define MAX_TANKS 16

/* Largest Value that will fill the WORLD data type */
#define WORLD_MAX 65535

/* Middle of a map square */
/* in world units */
#define MAP_SQUARE_MIDDLE 128
/* Was 128 */
/* In pixels */
#define MIDDLE_PIXEL 8

/* Game time is set to -1 if it an untimed game */
#define UNLIMITED_GAME_TIME -1

/* Player Name string lengths */
#define PLAYER_NAME_LEN 33
#define PLAYER_NAME_LAST 32

/* 0xFF is neutral */
#define NEUTRAL 0xFF

/* Everytime something gets hit armour is decreased by this amount */
#define DAMAGE 5

#define M_W_SHIFT_SIZE 8

/* Version number */
#define STRVER "1.09"

#define DIALOG_BOX_TITLE "Log Viewer"

#define MESSAGE_QUOTES "\""
#define MESSAGE_THIS_COMPUTER "This Computer"
#define MESSAGE_CHANGENAME " has changed name to "

#define MESSAGE_QUIT_GAME " has quit game."

#define TANK_SUBTRACT 128
#define TANK_SHIFT_RIGHT2 4
#define TANK_SHIFT_MAPSIZE 8 
#define TANK_SHIFT_PIXELSIZE 12

#define LGM_HELICOPTER_FRAME 3

#define PREFERENCE_FILE "WinBolo.ini"
/* Defines the number of milliseconds in a second */
/* Used for frame rate counting */
#define MILLISECONDS 1000

#define UNLIMITED_GAME_TIME -1
#define GAME_NUMGAMETICKS_SEC (1000 / 20);
#define NUM_SECONDS_MINUTE 60

/** Player teams are 0-15 : 16 is neutral */
#define NEUTRAL_TEAM 16

/* Selected item types */
#define SELECTED_NOTHING 0
#define SELECTED_BASE 1
#define SELECTED_PILL 2
#define SELECTED_TANK 3
#define SELECTED_NO_TANK 255

#define TANK_STAT_NO_UPDATE 255

#endif /* GLOBAL_H */ 

