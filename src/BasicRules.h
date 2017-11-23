#ifndef BASICRULES_H_
#define BASICRULES_H_

#include "IRules.h"

class BasicRules : public IRules
{
public:
	virtual ~BasicRules() {}
  /**
   * get legal move.
   * @param board the board.
   * @param player the player type.
   * @return return legal move.
   */
	virtual std::vector<Point> get_legal_moves(const Board& board, const PlayerTypes player) const;
	/*
	 * make a move.
	 * @param board the board.
	 * @param point the point.
	 * @param player the player type.
	 */
	virtual void make_move(Board& board, const Point& point, const PlayerTypes player) const;
	/*
	 * get the winner.
	 * @param board the board.
	 * @return the winner.
	 */
	virtual PlayerTypes get_winner(Board& board) const;

private:
	/**
	 * getting the flip cells.
	 * @param board the board.
	 * @param point the point.
	 * @param player the player type.
	 * @return the  flip point.
	 */
	static std::vector<Point> get_flipping_cells(const Board& board, const Point& point, const PlayerTypes player);
	/**
	 * getting the flip cells.
	 * @param board the board.
	 * @param point the point.
	 * @param player the player type.
	 * @param direction the direction.
	 * @return points.
	 */
	static std::vector<Point> get_flipping_cells(const Board& board, const Point& point, const PlayerTypes player, const Point& direction);
};

#endif /* BASICRULES_H_ */
