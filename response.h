//
// Created by devesh on 25/6/19.
//

#ifndef CPP_SERVER_RESPONSE_H
#define CPP_SERVER_RESPONSE_H

#include <string>
#include <map>

namespace response {
    class Response {
    public:
        bool send(const std::string &msg = "");
    };
}

#endif //CPP_SERVER_RESPONSE_H
