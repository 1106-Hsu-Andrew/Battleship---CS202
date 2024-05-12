#include "game.h"
Game::Game(){
    currentPlayerIndex = -1;
    numTurns = -1;
    numPlayers = -1;
    maxPlayers = -1;
}

Game::Game(int c, int nT, int nP, int mP){
    currentPlayerIndex = c;
    numTurns = nT;
    numPlayers = nP;
    maxPlayers = mP;
}

Game::Game(const Game& rhs){
    currentPlayerIndex = rhs.currentPlayerIndex;
    numTurns = rhs.numTurns;
    numPlayers = rhs.numPlayers;
    maxPlayers = rhs.maxPlayers;
}

Game::~Game(){
}

ostream& operator<<(ostream& o , const Game& rhs){
}

Game& Game::operator=(const Game& rhs){
    currentPlayerIndex = rhs.currentPlayerIndex;
    numTurns = rhs.numTurns;
    numPlayers = rhs.numPlayers;
    maxPlayers = rhs.maxPlayers;
    return *this;
}

int Game::getCurrentPlayerIndex(){
    return currentPlayerIndex;
}

int Game::getNumTurns(){
    return numTurns;
}

int Game::getNumPlayers(){
    return numPlayers;
}

int Game::getMaxPlayers(){
    return maxPlayers;
}

void Game::setCurrentPlayerIndex(int c){
    currentPlayerIndex = c;
}

void Game::setNumTurns(int nT){
    numTurns = nT;
}