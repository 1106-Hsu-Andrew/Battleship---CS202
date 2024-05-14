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
void AI::randomizeShips(){
    int x, y;
    Coordinate shipLocation = Coordinate();
    Coordinate shipArray[5];

    for(int i = 0; i < 5; i++){
        x = rand() % 10;
        y = rand() % 10;
        shipLocation.setStartX(x);
        shipLocation.setStartY(y);
        shipArray[i] = shipLocation;
    }
}