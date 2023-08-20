#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int sum = input["first"].i()+input["second"].i();
    return crow::response{"{\"result\":"+std::__cxx11::to_string(sum)+"}"};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int sub = input["first"].i()-input["second"].i();
    return crow::response{"{\"result\":"+std::__cxx11::to_string(sub)+"}"};
}