#ifndef GAME_H_
#define GAME_H_

#include "IPlayer.h"
#include "Board.h"
#include "IDisplayer.h"
#include "IRules.h"

class Game
{
public:
	/**
	 * constarctor.
	 * @param player_1 the first player.
	 * @param player_2 the second player.
	 * @param board the board.
	 * @param displayer display.
	 * @param rules the rules.
	 */
	Game(IPlayer* player_1, IPlayer* player_2, Board* board, const IDisplayer* displayer, const IRules* rules);
	virtual ~Game() {}
	/**
	 * run the game.
	 */
	void run();

private:
	std::vector<IPlayer*> m_players;
	Board* m_board;
	const IDisplayer* m_displayer;
	const IRules* m_rules;
};
#endif /* GAME_H_ */

