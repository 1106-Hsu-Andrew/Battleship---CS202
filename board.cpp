#include "board.h"
Board::Board(){
    numRows = -1;
    numCols = -1;
    maxRows = 10;
    maxCols = 10;
    grid = new char*[maxRows * maxCols];
}

Board::Board(char** g, int nR, int nC, int mR, int mC){
    numRows = nR;
    numCols = nC;
    maxRows = mR;
    maxCols = mC;
    grid = new char*[maxRows * maxCols];
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            grid[i * j] = g[i * j];
        }
    }
}

Board::Board(const Board& rhs){
    numRows = rhs.numRows;
    numCols = rhs.numCols;
    maxRows = rhs.maxRows;
    maxCols = rhs.maxCols;
    grid = new char*[rhs.maxRows * rhs.maxCols];
    for(int i = 0; i < rhs.numRows; i++){
        for(int j = 0; j < rhs.numCols; j++){
            grid[i * j] = rhs.grid[i * j];
        }
    }
}

Board::~Board(){
    delete[] grid;
}

char** Board::getGrid() const{
    return grid;
}

int Board::getRows() const{
    return numRows;
}

int Board::getCols() const{
    return numCols;
}

void Board::setRows(int r){
    numRows = r;
}

void Board::setCols(int c){
    numCols = c;
}


Board& Board::operator=(const Board& rhs){
    numRows = rhs.numRows;
    numCols = rhs.numCols;
    maxRows = rhs.maxRows;
    maxCols = rhs.maxCols;
    grid = new char*[maxRows * maxCols];
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            grid[i * j] = rhs.grid[i * j];
        }
    }
    return *this;
}