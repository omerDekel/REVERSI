/*
 * LocalNetworkPlayer.cpp
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#include "LocalNetworkPlayer.h"

LocalNetworkPlayer::LocalNetworkPlayer(const PlayerTypes player_type,
		const std::string& name, Socket* socket) :
		IPlayer(player_type),
		m_console_player(player_type, name),
		m_socket(socket){
}

Point LocalNetworkPlayer::get_move(const IRules& rules, const Board& board) {
	const Point point = m_console_player.get_move(rules, board);
//write
	// TODO: Send point to server via socket

	return point;
}

void LocalNetworkPlayer::notify_end() {
	// TODO: Send End via socket
}

void LocalNetworkPlayer::notify_no_move() {
	// TODO: Send NoMove via socket
}
