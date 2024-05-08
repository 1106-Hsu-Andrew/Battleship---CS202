#include "player.h"
Player::Player(){
    name = "NA";
    // numShips = -1;
    // maxShips = 5;
    // sizeCols = -1;
    // maxSizeCols = 10;
    // sizeRows = -1;
    // maxSizeRows = 10;
    // board = new Board[maxSizeCols * maxSizeRows];
    // ships = new Ship[maxShips];
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

// int Player::getNumShips() const{

// }

// int Player::getMaxShips() const{

// }

// int Player::getSizeCols() const{

// }

// int Player::getMaxSizeCols() const{

// }
// int Player::getSizeRows() const{

// }

// int Player::getMaxSizeRows() const{

// }

void Player::setName(const string n ){
    name = n;
}

// void Player::addShips(const Ship){

// }

// void Player::removeShips(const Ship){

// }