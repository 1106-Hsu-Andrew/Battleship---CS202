#include "player.h"
Player::Player(){
    name = "NA";
    numShips = -1;
    // numShips = -1;
    // maxShips = 5;
    // sizeCols = -1;
    // maxSizeCols = 10;
    // sizeRows = -1;
    // maxSizeRows = 10;
    // board = new Board[maxSizeCols * maxSizeRows];
    // ships = new Ship[maxShips];
}

Player::Player(string n, int nS){
    name = n;
    numShips = nS;
}

Player::Player(const Player& rhs){
    name = rhs.name;
    numShips = rhs.numShips;
}

Player::~Player(){
    delete[] ships;
}

Player& Player::operator=(const Player& rhs){
    name = rhs.name;
    numShips = rhs.numShips;
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

int Player::getNumShips() const{
    return numShips;
}

void Player::setName(const string n ){
    name = n;
}

void Player::setNumShips(const int nS){
    numShips = nS;
}