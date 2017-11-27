#include "ComputerPlayer.h"
#include <map>
#include <utility>

ComputerPlayer::ComputerPlayer(const PlayerTypes player_type) :
		IPlayer(player_type) {
}

Point ComputerPlayer::get_move(const IRules& rules, const Board& board) {
	const PlayerTypes my_type = get_player_type();

	const std::vector<Point> legal_moves = rules.get_legal_moves(board,
			get_player_type());

	// We assume at least one legal move
	std::pair<int, Point> our_best_move = std::make_pair(
			get_opponent_best_score(rules,
					get_board_after_move(rules, board, my_type,
							legal_moves[0])), legal_moves[0]);

	for (unsigned int i = 1; i < legal_moves.size(); i++) {
		int opponent_best_score = get_opponent_best_score(rules,
				get_board_after_move(rules, board, my_type, legal_moves[i]));

		if (opponent_best_score < our_best_move.first) {
			our_best_move = std::make_pair(opponent_best_score, legal_moves[i]);
		}
	}

	return our_best_move.second;
}

int ComputerPlayer::get_score_after_move(const IRules& rules,
		const Board& board, const PlayerTypes player_type,
		const Point& move) {
	return score(get_board_after_move(rules, board, player_type, move),
			player_type);
}

int ComputerPlayer::score(const Board& board,
		const PlayerTypes player_type) {
	const PlayerTypes other_player_type = get_opponent_player_type(player_type);
	return board.count_player_cells(player_type)
			- board.count_player_cells(other_player_type);
}

int ComputerPlayer::get_opponent_best_score(const IRules& rules,
		const Board& board) {
	const PlayerTypes opponent_type = get_opponent_player_type(
			get_player_type());

	const std::vector<Point> opponent_legal_moves = rules.get_legal_moves(board,
			opponent_type);

	if (opponent_legal_moves.empty()) {
		return score(board, get_player_type());
	}

	int opponent_best_score = get_score_after_move(rules, board, opponent_type,
			opponent_legal_moves[0]);
	for (unsigned int i = 1; i < opponent_legal_moves.size(); i++) {
		int temp_score = get_score_after_move(rules, board, opponent_type,
				opponent_legal_moves[i]);
		opponent_best_score = std::max(opponent_best_score, temp_score);
	}

	return opponent_best_score;
}

Board ComputerPlayer::get_board_after_move(const IRules& rules,
		const Board& board, const PlayerTypes player_type,
		const Point& move) {
	Board after_move(board);
	rules.make_move(after_move, move, player_type);
	return after_move;
}
