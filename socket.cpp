#include "socket.h"

void Socket::set_listenfd() {
    this->listenfd = socket(AF_INET, SOCK_STREAM, 0);
    if (this->listenfd == -1) {
        std::cout << "socket() failed" << std::endl;
        exit(1);
    }
}

void Socket::set_sockaddr_in() {
    memset(&this->serv_addr, 0, sizeof(this->serv_addr));
    this->serv_addr.sin_family = AF_INET;
    this->serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    this->serv_addr.sin_port = htons(this->port);
}