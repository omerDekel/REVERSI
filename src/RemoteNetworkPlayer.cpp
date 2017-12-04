/*
 * RemoteNetworkPlayer.cpp
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#include <iostream>
#include <unistd.h>
#include "Point.h"
#include "RemoteNetworkPlayer.h"

RemoteNetworkPlayer::RemoteNetworkPlayer(const PlayerTypes player_type,
		Socket* socket): IPlayer(player_type), m_socket(socket){
}

Point RemoteNetworkPlayer::get_move(const IRules& rules, const Board& board) {
	std::cout << "Waiting for other player's move...";
    unsigned char buf[256];
    int p[2];
    m_socket->connectToServer("127.0.0.1",6666 );
    int n = read(m_socket->getM_socket() , p , sizeof(buf));
    if (n == -1) {
        std::cout << "Error" << std::endl;
    }

	// TODO: Read point via socket
    return Point(p[0], p[1]);
	/*Point *point;
    point = (Point*) buf ;
	return *point;*/
}
