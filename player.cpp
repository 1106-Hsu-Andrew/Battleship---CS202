#include "player.h"
Player::Player(){
    name = "NA";
    numShips = -1;

}

Player::Player(string n , Ship* s , int nS){
    name = n;
    numShips = nS;
    for(int i = 0; i < numShips; i++){
        ships[i] = s[i];
    }
}

Player::Player(const Player& rhs){
    name = rhs.name;
    numShips = rhs.numShips;
    for(int i = 0; i < numShips; i++){
        ships[i] = rhs.ships[i];
    }
}

Player& Player::operator=(const Player& rhs){
    name = rhs.name;
    numShips = rhs.numShips;
    for(int i = 0; i < numShips; i++){
        ships[i] = rhs.ships[i];
    }
    return *this;

}

ostream& operator<<(ostream& o , Player& rhs){
    o << rhs.name << endl;
    return o;
}

string Player::getName(){
    return name;
}


Ship* Player::getShip(){
     return ships;
}

int Player::getNumShips(){
     return numShips;
}

void Player::setName(string n){
    name = n;
}

void Player::setNumShips(int nS){
    numShips = nS;
}