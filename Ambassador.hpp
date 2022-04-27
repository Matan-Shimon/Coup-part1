#include "Player.hpp"
namespace coup {
    class Ambassador:public Player{
    public:
        Ambassador(Game const& game, string const& name);
        void transfer(Player const& took, Player const& give);
        virtual string role();
    };
}