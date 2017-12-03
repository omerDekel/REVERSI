/*
 * Socket.cpp
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <strings.h>
#include <cstring>
#include <iostream>

#include "Socket.h"

Socket::Socket() :
	m_socket(socket(AF_INET, SOCK_STREAM, 0))
{

}
void Socket::connectToServer(const char *ip , const unsigned short port) {
    if (m_socket == -1) {
        throw "Error opening socket";
    }
// Convert the ip string to a network address
    struct in_addr address;
    if (!inet_aton(ip ,&address)) {
        throw "Can't parse IP address";
    }
    // Get a hostentstructure for the given host address
    struct hostent *server;
    server = gethostbyaddr((const void *)&address, sizeof (address), AF_INET);
    if (server == NULL) {
        throw "Host is unreachable";
    }
// Create a structure for the server address
    struct sockaddr_in serverAddress;
    bzero((char *)&address, sizeof(address));
    serverAddress.sin_family = AF_INET;
    memcpy((char *)&serverAddress.sin_addr.s_addr , server ->h_addr , server ->h_length);
//htons converts values between host and network byte orders
    serverAddress.sin_port = htons (port);
// Establish a connection with the TCP server
    if (connect(m_socket ,(struct sockaddr *)&serverAddress ,sizeof(serverAddress)) == -1) {
        throw "Error connecting to server";
    }
    std::cout << "Connected to server"<<std::endl;
}

Socket::~Socket() {
	close(m_socket);
}

const int Socket::getM_socket() const {
    return m_socket;
}

