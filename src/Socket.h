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
	//TODO: delete this
	Socket(const Socket&);

	void connectToServer(const char *ip, const unsigned short port);
	/*void bind(const unsigned long ip, const unsigned short port);
	void listen(unsigned long backlog);
	Socket* accept();*/





private:
	const int m_socket;

public:
	const int getM_socket() const;
};

#endif /* SOCKET_H_ */
