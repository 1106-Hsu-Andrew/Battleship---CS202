#include "game.h"
Game::Game(){
    currentPlayerIndex = -1;
    numTurns = -1;
    numPlayers = -1;
    maxPlayers = -1;
    players = new Player[maxPlayers];
}

Game::Game(Player* p , int c, int nT, int nP, int mP){
    currentPlayerIndex = c;
    numTurns = nT;
    numPlayers = nP;
    maxPlayers = mP;
    players = new Player[maxPlayers];
    for(int i = 0; i < numPlayers; i++){
        players[i] = p[i];
    }
}

Game::Game(const Game& rhs){
    currentPlayerIndex = rhs.currentPlayerIndex;
    numTurns = rhs.numTurns;
    numPlayers = rhs.numPlayers;
    maxPlayers = rhs.maxPlayers;
    players = new Player[maxPlayers];
    for(int i = 0; i < numPlayers; i++){
        players[i] = rhs.players[i];
    }
}

Game::~Game(){
    delete[] players;
}

ostream& operator<<(ostream& o , const Game& rhs){
    o << rhs.players[rhs.currentPlayerIndex] << endl;
    return o;
}

Game& Game::operator=(const Game& rhs){
    currentPlayerIndex = rhs.currentPlayerIndex;
    numTurns = rhs.numTurns;
    numPlayers = rhs.numPlayers;
    maxPlayers = rhs.maxPlayers;
    players = new Player[maxPlayers];
    for(int i = 0; i < numPlayers; i++){
        players[i] = rhs.players[i];
    }
    return *this;
}

Player* Game::getPlayers(){
    return players;
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