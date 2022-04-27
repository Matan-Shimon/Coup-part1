//
// Created by matan on 25/04/2022.
//
#include "Duke.hpp"
using namespace coup;

Duke::Duke(Game const& game, string const& name) {
    this->name = name;
}
void Duke::tax(){

}
void Duke::block(Player const& player){}
string Duke::role() {
    return "Duke";
}
