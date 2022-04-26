//
// Created by matan on 25/04/2022.
//
#include "Duke.hpp"
using namespace coup;

Duke::Duke(Game& game, string name) {
    this->name = name;
    //game.addPlayer(*this);
}
void Duke::tax(){

}
void Duke::block(Player player){}
string Duke::role() {
    return "Duke";
}
