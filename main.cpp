#include "helpers.h"
#include "ai.h"

int main(){
    char grid[10];
    Board gameBoard = Board(grid);
    cout << gameBoard;
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