#include "Player.hpp"
namespace coup {
    class Ambassador:public Player{
    public:
        Ambassador(Game game, string name);
        void transfer(Player took, Player give);
        virtual string role();
    };
}