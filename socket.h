#ifndef _SOCKET_H
#define _SOCKET_H

#include "config.h"
#include <string.h>
#include <netinet/in.h>
#include <iostream>
#include <unistd.h>
#include <sys/types.h>

class Socket {

    int listenfd;
    int port;
    struct sockaddr_in serv_addr;

    public:
    explicit Socket(int port_) : port{port_} {}
    void set_listenfd();
    void set_sockaddr_in();
    int set_sockect();
    int get_listenfd() const { return this->listenfd;}
};

#endif