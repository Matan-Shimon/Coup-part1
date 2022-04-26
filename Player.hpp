#pragma once
#include "string"
#include "Game.hpp"
using namespace std;
namespace coup{
    class Player{
    protected:
        Game game;
        int money;
        string name;
    public:
        Player();
        Player(Game& game, string name);
        void income();
        void foreign_aid();
        void coup(Player player);
        string role();
        int coins();
        string getName();
    };
}