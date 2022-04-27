#include "Player.hpp"
namespace coup {
    class Captain:public Player{
    public:
        Captain(Game const& game, string const& name);
        void steal(Player const& player);
        void block(Player const& player);
        virtual string role();
    };
}