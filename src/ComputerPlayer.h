#ifndef COMPUTERPLAYER_H_
#define COMPUTERPLAYER_H_

#include "IPlayer.h"

class ComputerPlayer : public IPlayer
{
public:
	ComputerPlayer(const PlayerTypes player_type);
	virtual ~ComputerPlayer() {}

	virtual Point get_move(const IRules& rules, const Board& board);
	int score(Board board/* PlayerTypes playerTyp*/);
};

#endif /* COMPUTERPLAYER_H_ */

