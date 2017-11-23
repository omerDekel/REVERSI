#ifndef IRULES_H_
#define IRULES_H_

#include "Board.h"

class IRules
{
public:
	virtual ~IRules() {}
	/**
	 * getting legal moves.
	 * @param board the board.
	 * @param player_type
	 */
	virtual std::vector<Point> get_legal_moves(const Board& board, const PlayerTypes player_type) const = 0;
	/**
	 * making move.
	 * @param board the board.
	 * @param point the point.
	 * @param player the player type.
	 */
	virtual void make_move(Board& board, const Point& point, const PlayerTypes player) const = 0;
	/**
	 * get winner.
	 * @param board the board
	 */
	virtual PlayerTypes get_winner(Board& board) const = 0;
};

#endif /* IRULES_H_ */
