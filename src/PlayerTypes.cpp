
#include "PlayerTypes.h"

 PlayerTypes get_opponent_player_type(const PlayerTypes player_type) {
	switch (player_type)
		{
		case PLAYER_TYPE_O:
			return PLAYER_TYPE_X;

		case PLAYER_TYPE_X:
			return PLAYER_TYPE_O;

		default:
			return PLAYER_TYPE_NONE;
		}
}
