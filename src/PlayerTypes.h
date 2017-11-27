#ifndef PLAYERTYPES_H_
#define PLAYERTYPES_H_

typedef enum
{
	PLAYER_TYPE_X,
	PLAYER_TYPE_O,
	PLAYER_TYPE_NONE
} PlayerTypes;

	/**
	 * getting the opponent player type.
	 * @param player_type the player type.
	 * @return the player types.
	 */
 PlayerTypes get_opponent_player_type(const PlayerTypes player_type);

#endif /* PLAYERTYPES_H_ */
