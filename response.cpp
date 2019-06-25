//
// Created by devesh on 25/6/19.
//

#include <iostream>
#include "response.h"

bool response::Response::send(const std::string &msg) {
    if(!msg.empty()) {
        std::cout << "sending msg ...\n";
    }
    return false;
}
