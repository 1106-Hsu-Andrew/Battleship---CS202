#include "player.h"
Player::Player(){
    name = "NA";
}

Player::Player(string n){
    name = n;
}

Player::Player(const Player& rhs){
    name = rhs.name;
}

Player::~Player(){
    delete[] ships;
}

Player& Player::operator=(const Player& rhs){
    name = rhs.name;
    return *this;
}

ostream& operator<<(ostream& o , const Player& rhs){
    o << rhs.name<< endl;
    return o;
}

string Player::getName() const{
    return name;
}

Ship* Player::getShips() const{
    return ships;
}

void Player::setName(const string n ){
    name = n;
}