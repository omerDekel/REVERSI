/*
 * RemoteNetworkPlayer.cpp
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#include <iostream>

#include "RemoteNetworkPlayer.h"

RemoteNetworkPlayer::RemoteNetworkPlayer(const PlayerTypes player_type,
		Socket* socket) {
}

Point RemoteNetworkPlayer::get_move(const IRules& rules, const Board& board) {
	std::cout << "Waiting for other player's move...";

	// TODO: Read point via socket
	Point point;

	return point;
}
