#ifndef			CONSTANTS_H
#define			CONSTANTS_H

#include		<stdio.h>
#include		<SDL2/SDL.h>
#include		<limits.h>
#include		<stdlib.h>
#include		<stdbool.h>
#include		<math.h>

# define		PI						3.14159265

# define		TILE_SIZE				64
# define		MAP_NUM_ROWS			13
# define		MAP_NUM_COLS			20
# define		NUM_TEXTURES			9

# define		MINIMAP_SCALE_FACTOR	0.2

# define		WINDOW_WIDTH			1280
# define		WINDOW_HEIGHT			800

# define		FOV_ANGLE				(60 * (PI / 180))
# define		NUM_RAYS				WINDOW_WIDTH

# define		DIST_PROJ_PLANE			((WINDOW_WIDTH / 2) / tan(FOV_ANGLE / 2))

# define		FPS						50
# define		FRAME_TIME_LENGTH		(1000 / FPS)

#endif