#include <algorithm>
#include "Game.h"

Game::Game(IPlayer* player_1, IPlayer* player_2, Board* board, const IDisplayer* displayer, const IRules* rules) :
	m_board(board),
	m_displayer(displayer),
	m_rules(rules)
{
	m_players.push_back(player_1);
	m_players.push_back(player_2);
}

void Game::run()
{
	unsigned int current_player_index = 0;
	bool last_player_skipped = false;
	for (;; current_player_index = (current_player_index + 1) % m_players.size())
	{
		IPlayer* current_player = m_players[current_player_index];

		const std::vector<Point> available_moves = m_rules->get_legal_moves(*m_board, current_player->get_player_type());
		if (available_moves.empty())
		{
			if (last_player_skipped)
			{
				break;
			}
			
			last_player_skipped = true;
			continue;
		}

		m_displayer->display(*m_board);

		Point point;

		do
		{
			point = current_player->get_move(*m_rules, *m_board);
		} while (available_moves.end() == std::find(available_moves.begin(), available_moves.end(), point));

		m_rules->make_move(*m_board, point, current_player->get_player_type());
	}

	m_displayer->display_game_over(m_rules->get_winner(*m_board));
	m_displayer->display(*m_board);
}

