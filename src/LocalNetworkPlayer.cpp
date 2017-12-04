/*
 * LocalNetworkPlayer.cpp
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#include <unistd.h>
#include <iostream>
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
    unsigned char buf[256];
    int p[2] ;
    p[0] = point.get_x();
    p[1] = point.get_y();
    m_socket->connectToServer("127.0.0.1",6666 );
    int n = write( m_socket->getM_socket() , p, sizeof(buf));
    if (n == -1) {
        std::cout << "Error<<"<< std::endl;
    }

	return point;
}

void LocalNetworkPlayer::notify_end() {
	// TODO: Send End via socket
    int n = write( m_socket->getM_socket() , "END", sizeof("END"));
    if (n == -1) {
        std::cout << "Error<<"<< std::endl;
    }

}

void LocalNetworkPlayer::notify_no_move() {
	// TODO: Send NoMove via socket
    int n = write( m_socket->getM_socket() , "NoMove", sizeof("NoMove"));
    if (n == -1) {
        std::cout << "Error<<"<< std::endl;
    }

}
