/*
 * Socket.cpp
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#include <unistd.h>

#include "Socket.h"

Socket::Socket() :
	m_socket(socket(AF_INET, SOCK_STREAM, 0))
{

}

Socket::~Socket() {
	close(m_socket);
}

