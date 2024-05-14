#include "ai.h"
AI::AI():Player(){
    gameBoard = nullptr;
    ships = nullptr; 
}
AI::AI(string n, Board* gB, Ship* s) : Player(n) {
    gameBoard = gB;
    ships = s; 
}
AI::AI(const AI& rhs) : Player(rhs) {
    gameBoard = rhs.gameBoard;
    ships = rhs.ships;
}
