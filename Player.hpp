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
        Player(Game const& game, string const& name);
        void income();
        void foreign_aid();
        void coup(Player const& player);
        static string role();
        int coins() const;
        string getName();
    };
}