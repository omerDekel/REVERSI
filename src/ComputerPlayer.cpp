#include "ComputerPlayer.h"
#include <map>

ComputerPlayer::ComputerPlayer(const PlayerTypes player_type) :
	IPlayer(player_type)
{}

Point ComputerPlayer::get_move(const IRules& rules, const Board& board)
{
	const std::vector<Point> legal_moves = rules.get_legal_moves(board, get_player_type());
	std::map<int, Point> score_moves;
	int scoresArray[legal_moves.size()];
	int our_best_move = 0;
	int min;
	for (unsigned int i = 0; i < legal_moves.size(); i++)
	{
		Board after_move(board);
		rules.make_move(after_move, legal_moves[i], get_player_type());
		// Get legal moves for other player on after_move board.
		// For each move, create a copy of the board and make the move.
		// Get the opponent's score (rules.get_score(board, other_player_type))
		our_best_move = score(board);
		scoresArray[i] = our_best_move;
		score_moves[our_best_move] = legal_moves[i];
		// Update our best move if needed
	}
	min = scoresArray[0];

	for (int i = 0; i < legal_moves.size(); ++i ) {
		if (scoresArray[i] < min) {
			min = scoresArray[i];
		}
	}
	return score_moves[min];

}
int ComputerPlayer:: score(Board board) {
	int countX =0;
	int countO =0;
	for (int i = 0; i < board.get_num_rows(); ++i) {
		for( int j = 0; j < board.get_num_columns(); ++j) {
			if (board.get_cells()[i][j] == PLAYER_TYPE_O) {
				countO++;

			} else if (board.get_cells()[i][j] == PLAYER_TYPE_X) {
				countX++;
			}
		}
	}
	return (countX - countO);
}
