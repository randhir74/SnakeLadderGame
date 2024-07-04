# include "player.hpp"
# include <iostream>

using namespace std;

Player::Player(string playerName, int id){
    this->playerName = playerName;
    this->id = id;
}

string Player::getPlayerName(){
    return this->playerName;
}