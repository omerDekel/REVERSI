/*
 * Socket.h
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#ifndef SOCKET_H_
#define SOCKET_H_

#include <sys/socket.h>

class Socket {
public:
    Socket();

    ~Socket();
    /**
     * connect to server.
     * @param ip
     * @param port
     */
    void connectToServer(const char *ip , const unsigned short port);
    const int getM_socket() const;

private:
    const int m_socket;
};

#endif /* SOCKET_H_ */