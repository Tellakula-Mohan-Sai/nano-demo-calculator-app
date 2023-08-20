#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int sum = input["first"]+input["second"];
    return crow::response{"result":sum};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int sub = input["first"]-input["second"];
    return crow::response{"result":sub};
}