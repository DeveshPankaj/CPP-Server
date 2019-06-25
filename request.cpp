//
// Created by devesh on 25/6/19.
//

#include "request.h"

request::Request::Request() {
    this->request.insert(std::pair<std::string, std::string>("user", "Pankaj"));
    this->isAuthenticated = true;
}
