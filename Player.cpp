//
// Created by matan on 25/04/2022.
//
#include "Player.hpp"
using namespace coup;

Player::Player() {
    this->money = 0;
    this->name = "";
}
Player::Player(Game& game, string name){
    this->name = name;
    this->game = game;
    //this->game.addPlayer(*this);
}
void Player::income() {
    this->money++;
}
void Player::foreign_aid(){
    this->money+=2;
}
void Player::coup(Player player){
    //this->game.coupPlayer(player);
}
string Player::role(){
    return "Player";
}
int Player::coins(){
    return this->money;
}
string Player::getName() {
    return this->name;
}