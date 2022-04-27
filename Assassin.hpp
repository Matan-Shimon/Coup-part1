#include "Player.hpp"
namespace coup {
    class Assassin:public Player{
    public:
        Assassin(Game const& game, string const& name);
        void coup(Player const& player);
        virtual string role();
    };
}