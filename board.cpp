#include "board.h"
Board::Board(){
    size = -1;
    maxSize = -1;
    grid = new char[maxSize];
}

Board::Board(char* g, int s, int mS){
    size = s;
    maxSize = mS;
    grid = new char[maxSize];
    for(int i = 0; i < size; i++){
        grid[i] = g[i];
    }
}

Board::Board(const Board& rhs){
    size = rhs.size;
    maxSize = rhs.maxSize;
    grid = new char[maxSize];
    for(int i = 0; i < size; i++){
        grid[i] = rhs.grid[i];
    }
}

Board::~Board(){
    delete[] grid;
}

Board& Board::operator=(const Board& rhs){
    size = rhs.size;
    maxSize = rhs.maxSize;
    grid = new char[maxSize];
    for(int i = 0; i < size; i++){
        grid[i] = rhs.grid[i];
    }
    return *this;
}

ostream& operator<<(ostream& o, Board& rhs){
    o << rhs.grid << endl;
    return o;
}

char* Board::getGrid(){
    return grid;
}

int Board::getSize(){
    return size;
}

int Board::getMaxSize(){
    return maxSize;
}

void Board::addGrid(){
    if(maxSize = size){
        maxSize += 1;
        char* temp = new char[maxSize];
        for(int i = 0; i < size; i++){
            temp[i] = grid[i];
        }
        delete[] grid;
        grid = temp;
    }
    grid[size] = 0;
    size++;

}
