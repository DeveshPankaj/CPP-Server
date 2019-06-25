//
// Created by devesh on 25/6/19.
//

#include "server.h"


void httpserver::Server::bind(int port, std::string host) {
    this->callback( (new request::Request), (new response::Response));
}

bool httpserver::Server::start() {
    return false;
}

bool httpserver::Server::stop() {
    return false;
}

void httpserver::Server::setCallback(void (*callback)(request::Request *, response::Response *)) {
    this->callback = callback;
}

