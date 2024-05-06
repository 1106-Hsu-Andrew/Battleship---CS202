#include "game.h"
Game::Game(){
    currentPlayerIndex = -1;
    numTurns = -1;
}

Game::Game(Player* p , int c, int n){
    currentPlayerIndex = c;
    numTurns = n;
    for(int i = 0; i < 2; i++){
        players[i] = p[i];
    }
}

Game::Game(const Game& rhs){
    currentPlayerIndex = rhs.currentPlayerIndex;
    numTurns = rhs.numTurns;
    for(int i = 0; i < 2; i++){
        players[i] = rhs.players[i];
    }
}
ostream& operator<<(ostream& o, const Game& rhs){
    for(int i = 0; i < 2; i++){
        o << rhs.players[i] << endl;
    }
}

int Game::getNumTurns(){
    return numTurns;
}

int Game::getCurrentPlayerIndex(){
    return currentPlayerIndex;
}