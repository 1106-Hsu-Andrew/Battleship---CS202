#include "board.h"
Board::Board(){
    numRows = -1;
    numCols = -1;
    numShips = -1;
    maxRows = 10;
    maxCols = 10;
    maxShips = 10;
    grid = new char[maxRows * maxCols];
    ships = new Ship[maxShips];
}

Board::Board(char* g, Ship* s, int nR, int nC, int nS, int mR, int mC, int mS){
    numRows = nR;
    numCols = nC;
    numShips = nS;
    maxRows = mR;
    maxCols = mC;
    maxShips = mS;
    grid = new char[maxRows * maxCols];
    ships = new Ship[maxShips];
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            grid[i * j] = g[i * j];
        }
    }
    for(int k = 0; k < numShips; k++){
        ships[k] = s[k];
    }
    
}

Board::Board(const Board& rhs){
    numRows = rhs.numRows;
    numCols = rhs.numCols;
    numShips = rhs.numShips;
    maxRows = rhs.maxRows;
    maxCols = rhs.maxCols;
    maxShips = rhs.maxShips;
    grid = new char[maxRows * maxCols];
    ships = new Ship[maxShips];
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            grid[i * j] = rhs.grid[i * j];
        }
    }
    for(int k = 0; k < numShips; k++){
        ships[k] = rhs.ships[k];
    }
}

Board::~Board(){
    delete[] grid;
    delete[] ships;
}

char* Board::getGrid(){
    return grid;
}

void Board::addGrid(Ship){

}

void Board::removeGrid(Coordinate){

}

ostream& operator<<(ostream& o , const Board& rhs){
    for(int i = 0; i < rhs.numRows; i++){
        for(int j = 0; j < rhs.numCols; j++){
            o << rhs.grid[i * j];
        }
        o << endl;
    }
    return o;
}

Board& Board::operator=(const Board& rhs){
    numRows = rhs.numRows;
    numCols = rhs.numCols;
    numShips = rhs.numShips;
    maxRows = rhs.maxRows;
    maxCols = rhs.maxCols;
    maxShips = rhs.maxShips;
    grid = new char[maxRows * maxCols];
    ships = new Ship[maxShips];
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            grid[i * j] = rhs.grid[i * j];
        }
    }
    for(int k = 0; k < numShips; k++){
        ships[k] = rhs.ships[k];
    }
    return *this;

}