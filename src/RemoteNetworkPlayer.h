
#ifndef REMOTENETWORKPLAYER_H_
#define REMOTENETWORKPLAYER_H_

#include "IPlayer.h"
#include "Socket.h"


class RemoteNetworkPlayer: public IPlayer {
public:
	RemoteNetworkPlayer(const PlayerTypes player_type, Socket* socket);

	virtual Point get_move(const IRules& rules, const Board& board);

private:
	Socket* m_socket;
};

#endif /* REMOTENETWORKPLAYER_H_ */
