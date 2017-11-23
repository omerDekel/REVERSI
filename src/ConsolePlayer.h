#ifndef CONSOLEPLAYER_H_
#define CONSOLEPLAYER_H_

#include <string>

#include "IPlayer.h"
#include "IRules.h"

class ConsolePlayer : public IPlayer
{
public:
	/**
	 * the constractor.
	 * @pharm  player_type the player type.
	 * @param name the name.
	 */
	ConsolePlayer(const PlayerTypes player_type, const std::string& name);
	virtual ~ConsolePlayer() {}
	/**
	 * get the move
	 * @param rules the rules.
	 * @param board the board.
	 * @return the move.
	 */
	virtual Point get_move(const IRules& rules, const Board& board);

private:
	const std::string m_name;
};

#endif /* CONSOLEPLAYER_H_ */

