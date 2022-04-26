#pragma once
#include "string"
#include "queue"
#include "vector"
//#include "Player.hpp"
using namespace std;
namespace coup {
    class Game{
    private:
//        queue<Player> game_players;
        vector<string> players_name;
    public:
        Game();
        string turn();
        vector<string>players();
        //void addPlayer(Player player);
        //void coupPlayer(Player player);
    };
}