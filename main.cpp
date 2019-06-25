#include <iostream>
#include <map>
#include "server.h"
#include "request.h"
#include "response.h"

void fun(request::Request * req, response::Response * res) {
    if(req->isAuthenticated) std::cout << "User: " << req->request["user"] << "\n";

    res->send("Hello...");
}

int main() {

    auto *S = new httpserver::Server();


    S->setCallback(fun);
    S->bind(80, "127.0.0.1");

    return 0;
}