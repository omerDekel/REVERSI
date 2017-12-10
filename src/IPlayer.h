#ifndef IPLAYER_H_
#define IPLAYER_H_

#include <memory>

#include "Board.h"
#include "Point.h"
#include "IRules.h"

class IPlayer
{
public:
	/**
	 * constractor.
	 * @param player_type the player type.
	 */
	IPlayer(const PlayerTypes player_type);
	virtual ~IPlayer() {}

	/**
	 * getting the player type.
	 * @return the player type.
	 */
	PlayerTypes get_player_type() const { return m_player_type; }

	/**
	 * getting the move
	 * @param rules the rules.
	 * @param board the board.
	 */
	virtual Point get_move(const IRules& rules, const Board& board) = 0;
	/**
	 * notify no move
	 */
	virtual void notify_no_move() { return; }
	/**
	 * notify end
	 */
	virtual void notify_end() { return; }

private:
	const PlayerTypes m_player_type;
};

#endif /* IPLAYER_H_ */
