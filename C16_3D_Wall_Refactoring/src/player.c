#include			"player.h"

player_t			player =
{
	.x				= WINDOW_WIDTH / 2,
	.y				= WINDOW_HEIGHT / 2,
	.width			= 1,
	.height			= 1,
	.turnDirection	= 0,
	.walkDirection	= 0,
	.rotationAngle	= PI / 2,
	.walkSpeed		= 100,
	.turnSpeed		= 45 * (PI / 180)
};

void				movePlayer(float deltaTime)
{ //TODO: move my player
	player.rotationAngle += player.turnDirection * player.turnSpeed * deltaTime;

	float			moveStep 	= player.walkDirection * player.walkSpeed * deltaTime;
	float			newPlayerX	= player.x + cos(player.rotationAngle) * moveStep;
	float			newPlayerY	= player.y + sin(player.rotationAngle) * moveStep;

	//TODO: perform wall collision
	if (hasWallAt(newPlayerX, newPlayerY) == false)
	{
		player.x = newPlayerX;
		player.y = newPlayerY;
	}
}

void				renderPlayer(void)
{
	drawRect(
		player.x		* MINIMAP_SCALE_FACTOR,
		player.y		* MINIMAP_SCALE_FACTOR,
		player.width	* MINIMAP_SCALE_FACTOR,
		player.height	* MINIMAP_SCALE_FACTOR,
		0xFFFFFFFF
	);
}