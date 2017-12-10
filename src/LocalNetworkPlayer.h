/*
 * LocalNetworkPlayer.h
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#ifndef LOCALNETWORKPLAYER_H_
#define LOCALNETWORKPLAYER_H_

#include "IPlayer.h"
#include "ConsolePlayer.h"

#include "Socket.h"

class LocalNetworkPlayer : public IPlayer {
public:
    /**
     * constractor.
     * @param player_type the player type
     * @param name  the name
     * @param socket  the socket
     */
    LocalNetworkPlayer(const PlayerTypes player_type , const std::string &name , Socket *socket);
    /**
     * getting move
     * @param rules the rules
     * @param board the board
     * @return point the point
     */
    virtual Point get_move(const IRules &rules , const Board &board);
    /**
     * notify end game to the server
     */
    virtual void notify_end();
    /**
     * notify not move to the server
     */
    virtual void notify_no_move();

private:
    ConsolePlayer m_console_player;
    Socket *m_socket;
};

#endif /* LOCALNETWORKPLAYER_H_ */
