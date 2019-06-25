//
// Created by devesh on 25/6/19.
//

#ifndef CPP_SERVER_REQUEST_H
#define CPP_SERVER_REQUEST_H

#include <string>
#include <map>

namespace request {
    class Request {
    public:
        std::map<std::string, std::string> request;
        bool isAuthenticated;

        Request();
    };
}

#endif //CPP_SERVER_REQUEST_H
