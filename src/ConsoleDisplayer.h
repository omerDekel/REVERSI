
#ifndef CONSOLEDISPLAYER_H_
#define CONSOLEDISPLAYER_H_

#include "IDisplayer.h"

class ConsoleDisplayer : public IDisplayer
{
public:
	virtual ~ConsoleDisplayer() {}
    /**
     * display the board.
     * @param board the board.
     */
	void display(const Board& board) const;
	/**
	 * display game over.
	 * @param player the player.
	 */
	virtual void display_game_over(const PlayerTypes player) const;
};

#endif /* CONSOLEDISPLAYER_H_ */

