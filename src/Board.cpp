#include "Board.h"

Board::Board(const unsigned int size)
{
	m_cells.resize(size);
	for (unsigned int i = 0; i < m_cells.size(); i++)
	{
		std::vector<PlayerTypes>& row = m_cells[i];
		row.resize(size);
		for (unsigned int j = 0; j < row.size(); j++)
		{
			row[j] = PLAYER_TYPE_NONE;
		}
	}

	const Point center(size / 2 - 1, size / 2 - 1);
	m_cells[center.get_x()][center.get_y()] = PLAYER_TYPE_O;
	m_cells[center.get_x() + 1][center.get_y() + 1] = PLAYER_TYPE_O;
	m_cells[center.get_x() + 1][center.get_y()] = PLAYER_TYPE_X;
	m_cells[center.get_x()][center.get_y() + 1] = PLAYER_TYPE_X;
}

void Board::set_cell(const Point& point, const PlayerTypes player)
{
	if (!is_in_board(point))
	{
		return;
	}

	m_cells[point.get_x()][point.get_y()] = player;
}

unsigned int Board::get_num_rows() const
{
	return m_cells.size();
}

unsigned int Board::get_num_columns() const
{
	return m_cells[0].size();
}

bool Board::is_in_board(const Point & point) const
{
	
	return (0 <= point.get_x()) && (get_num_rows() > point.get_x()) && (0 <= point.get_y()) && (get_num_columns() > point.get_y());
}

unsigned int Board::count_player_cells(const PlayerTypes player_type) const
{
	unsigned int count = 0;
	for (unsigned int i = 0; i < get_num_rows(); i++)
	{
		for (unsigned int j = 0; j < get_num_columns(); j++)
		{
			if (m_cells[i][j] == player_type)
			{
				count++;
			}
		}
	}

	return count;
}
