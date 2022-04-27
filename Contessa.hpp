#include "Player.hpp"
namespace coup {
    class Contessa:public Player{
    public:
        Contessa(Game const& game, string const& name);
        void block(Player const& player);
        virtual string role();
    };
}