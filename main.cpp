#include "helpers.h"
#include "ai.h"

int main(){
    char grid[10][10];
    for(int k = 0; k < 9; k++){
        cout << k + 1 << " | ";
    }
    cout << "10|"<< endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
             cout << "- |" << grid[i][j] << " ";
        }
        cout << i + 1 << endl;
    }
    cout << endl;
    // Board gameBoard = Board(grid);
    // clearBoard(gameBoard);
    // cout << gameBoard;
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