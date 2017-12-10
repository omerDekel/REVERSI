
#ifndef COMPUTERPLAYER_H_
#define COMPUTERPLAYER_H_

#include "IPlayer.h"

class ComputerPlayer : public IPlayer {
public:
    /**
     * constractor.
     * @param player_type the player type.
     */
    ComputerPlayer(const PlayerTypes player_type);

    virtual ~ComputerPlayer() {}

    /**
     * get the move.
     * @param rules the rules.
     * @param board the board.
     * @return point the best move.
     */
    virtual Point get_move(const IRules &rules , const Board &board);

private:
    /**
     * getting the best score.
     * @param rules the rules.
     * @param board the board.
     * @return the score.
     */
    int get_opponent_best_score(const IRules &rules , const Board &board);

    /**
     *getting the score after move.
     *@param rules the rules.
     *@param board the board.
     *@param player_type the player type.
     *@param move the point.
     *@return score after move.
     */
    static int
    get_score_after_move(const IRules &rules , const Board &board , const PlayerTypes player_type , const Point &move);

    /**
     * getting the board after move.
     *@param rules the rules.
     *@param board the board.
     *@param player_type the player type.
     *@param move the point.
     *@return the board after move.
     */
    static Board
    get_board_after_move(const IRules &rules , const Board &board , const PlayerTypes player_type , const Point &move);

    /**
     *getting the score.
     *@param board the board.
     *@param the player_type the player types.
     *@return the score.
     */
    static int score(const Board &board , const PlayerTypes player_type);
};

#endif /* COMPUTERPLAYER_H_ */

