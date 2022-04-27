#include "Player.hpp"
namespace coup {
    class Duke:public Player {
    public:
        Duke(Game const& game, string const& name);
        void tax();
        void block(Player const& player);
        virtual string role();
    };
}