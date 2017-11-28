
#include <iostream>
#include <map>

#include "BasicRules.h"

std::vector<Point> BasicRules::get_legal_moves(const Board& board, const PlayerTypes player) const
{
	const unsigned int num_rows = board.get_num_rows();
	const unsigned int num_columns = board.get_num_columns();
	std::vector<Point> legal_moves;

	for (unsigned int i = 0; i < num_rows; i++)
	{
		for (unsigned int j = 0; j < num_columns; j++)
		{
			if (PLAYER_TYPE_NONE != board.get_cells()[i][j])
			{
				continue;
			}

			const Point point(i, j);
			if (!get_flipping_cells(board, point, player).empty())
			{
				legal_moves.push_back(point);
			}
		}
	}

	return legal_moves;
}

void BasicRules::make_move(Board& board, const Point& point, const PlayerTypes player) const
{
	const std::vector<Point> flipping_cells = get_flipping_cells(board, point, player);

	board.set_cell(point, player);
	for (unsigned int i = 0; i < flipping_cells.size(); i++)
	{
		board.set_cell(flipping_cells[i], player);
	}
}

std::vector<Point> BasicRules::get_flipping_cells(const Board& board, const Point& point, const PlayerTypes player)
{
	std::vector<Point> flipping_points;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if ((0 == i) && (0 == j))
			{
				continue;
			}

			const std::vector<Point> points_to_add = get_flipping_cells(board, point, player, Point(i, j));
			flipping_points.insert(flipping_points.end(), points_to_add.begin(), points_to_add.end());
		}
	}

	return flipping_points;
}

std::vector<Point> BasicRules::get_flipping_cells(const Board& board, const Point& point, const PlayerTypes player, const Point& direction)
{
	const CellMatrix& cells = board.get_cells();

	std::vector<Point> points;
	Point current_point = point + direction;

	bool found_keen = false;

	for (; board.is_in_board(current_point); current_point += direction)
	{
		const PlayerTypes& cell = cells[current_point.get_x()][current_point.get_y()];

		if (PLAYER_TYPE_NONE == cell)
		{
			return std::vector<Point>();
		}

		if (player == cell)
		{
			found_keen = true;
			break;
		}

		points.push_back(current_point);
	}

	if (!found_keen)
	{
		return std::vector<Point>();
	}

	return points;
}

PlayerTypes BasicRules::get_winner(Board& board) const
{
	const unsigned int num_rows = board.get_num_rows();
	const unsigned int num_columns = board.get_num_columns();
	const CellMatrix& cells = board.get_cells();

	std::map<PlayerTypes, unsigned int> total_cells;
	total_cells[PLAYER_TYPE_X] = 0;
	total_cells[PLAYER_TYPE_O] = 0;
	total_cells[PLAYER_TYPE_NONE] = 0;

	for (unsigned int i = 0; i < num_rows; i++)
	{
		for (unsigned int j = 0; j < num_columns; j++)
		{
			total_cells.at(cells[i][j])++;
		}
	}

	if (total_cells.at(PLAYER_TYPE_X) == total_cells.at(PLAYER_TYPE_O))
	{
		return PLAYER_TYPE_NONE;
	}

	if (total_cells.at(PLAYER_TYPE_X) > total_cells.at(PLAYER_TYPE_O))
	{
		return PLAYER_TYPE_X;
	}
	return PLAYER_TYPE_O;
}
