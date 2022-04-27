#pragma once
#include "string"
#include "queue"
#include "vector"
//#include "Player.hpp"
using namespace std;
namespace coup {
    class Game{
    private:
        vector<string> players_name;
    public:
        Game();
        static string turn();
        vector<string>players();
    };
}