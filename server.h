//
// Created by devesh on 25/6/19.
//

#ifndef CPP_SERVER_SERVER_H
#define CPP_SERVER_SERVER_H

#include <string>
#include "request.h"
#include "response.h"

namespace httpserver {
    class Server {
        void (*callback)(request::Request *, response::Response *);
    public:
        void bind(int port, std::string host);

        void setCallback(void (*callback)(request::Request *, response::Response *));
        bool start();
        bool stop();
    };
}



#endif //CPP_SERVER_SERVER_H
