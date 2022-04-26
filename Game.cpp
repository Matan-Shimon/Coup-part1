//
// Created by matan on 25/04/2022.
//
#include "Game.hpp"
#include "iostream"
using namespace coup;

Game::Game(){}
string Game::turn(){
    return "";
//    return this->game_players.front().getName();
}
vector<string>Game::players(){
    return this->players_name;
}
//void Game::addPlayer(Player player){
//    this->game_players.push(player);
//    this->players_name.push_back(player.getName());
//}
//void Game::coupPlayer(Player player) {
//    // Helper queue to store the elements
//    // temporarily.
//    queue<Player> ref;
//    int s = this->game_players.size();
//    int cnt = 0;
//
//    // Finding the value to be removed
//    while (this->game_players.front().getName() != player.getName() and !this->game_players.empty()) {
//        ref.push(this->game_players.front());
//        this->game_players.pop();
//        cnt++;
//    }
//
//    // If element is not found
//    if (this->game_players.empty()) {
//        while (!ref.empty()) {
//
//            // Pushing all the elements back into q
//            this->game_players.push(ref.front());
//            ref.pop();
//        }
//        throw invalid_argument("Matrix dimension need to be positive");
//    }
//
//        // If element is found
//    else {
//        this->game_players.pop();
//        while (!ref.empty()) {
//
//            // Pushing all the elements back into q
//            this->game_players.push(ref.front());
//            ref.pop();
//        }
//        int k = s - cnt - 1;
//        while (k--) {
//
//            // Pushing elements from front of q to its back
//            Player p = this->game_players.front();
//            this->game_players.pop();
//            this->game_players.push(p);
//        }
//    }
//}