#ifndef IDISPLAYER_H_
#define IDISPLAYER_H_

#include "Board.h"

class IDisplayer
{
public:
	virtual ~IDisplayer() {}
	/**
	 * display the board.
	 * @pharm
	 */
	virtual void display(const Board& board) const = 0;
	/**
	 * display game over.
	 * @param player the player type.
	 */
	virtual void display_game_over(const PlayerTypes player) const = 0;
};
#endif /* IDISPLAYER_H_ */
