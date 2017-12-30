
#include <iostream>
#include <unistd.h>
#include <cstring>
#include <cstdlib>
#include "Point.h"
#include "RemoteNetworkPlayer.h"
#include <fstream>

RemoteNetworkPlayer::RemoteNetworkPlayer(const PlayerTypes player_type ,
                                         Socket *socket) : IPlayer(player_type) , m_socket(socket) {
}

Point RemoteNetworkPlayer::get_move(const IRules &rules , const Board &board) {
    std::cout << "Waiting for other player's move ..." << std::endl;
    char buf[8];
    //  Read point via socket
    int x , y;
    int n = read(m_socket->getM_socket() , buf , sizeof(buf));
    if (n == -1) {
        throw "Error in read";
    }
    if (n == 0) {
        throw "Server disconnected";
    }
    sscanf(buf , "%d,%d" , &x , &y);
    return Point(x , y);
}
