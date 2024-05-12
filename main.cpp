#include "helpers.h"
#include "ai.h"

int main(){
    char** grid = new char*[10];
    for(int i = 0; i < 10; i++){
        grid[i] = new char[10];
    }
    Board gameBoard(grid, 10, 10, 10, 10);
    Board attackBoard(grid, 10, 10, 10, 10);
    cout << "         ====ATTACK BOARD====" << endl;
    cout << attackBoard;
    cout << "         ====GAME BOARD====" << endl;
    cout << gameBoard;

}
ostream& operator<<(ostream& o, const Board& rhs){
    for(int k = 0; k < 9; k++){
    o << k + 1 << " | ";
    }
    o << "10|"<< endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
                o << "- |" << rhs.getGrid()[i][j] << " ";
        }
        o << i + 1 << endl;
    }
    o << endl;   
}