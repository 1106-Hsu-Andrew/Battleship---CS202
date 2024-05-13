#include "helpers.h"
#include "ai.h"
#include <stdlib.h>

int main(){
    char** grid = new char*[10];
    for(int i = 0; i < 10; i++){
        grid[i] = new char[10];
    }
    string userName;


    system("clear");
    cout << "        WELCOME TO BATTLESHIP!" << endl << endl;
    cout << "Enter your name: ";
    cin >> userName;

    system("clear");
    Board gameBoard(grid, 10, 10, 10, 10);
    Board attackBoard(grid, 10, 10, 10, 10);
    cout << "         ====ATTACK BOARD====" << endl;
    cout << attackBoard;
    cout << "         ====GAME BOARD====" << endl;
    cout << gameBoard;

int cX, cY, bX, bY, dX, dY, sX, sY, pX, pY;
char cO, bO, dO, sO, pO;
cout << "Hello " << userName << " please choose the location of your five ships and their orientation." << endl
    << "Type the values in this order: x, y, orientation, and separate the values by spaces. " << endl << endl
    << "Carrier: "; cin >> cX >> cY >> cO;
cout << "Battleship: "; cin >> bX >> bY >> bO; 
cout << "Destroyer: "; cin >> dX >> dY >> dO; 
cout << "Submarine: "; cin >> sX >> sY >> sO;
cout << "Patrol Boat: "; cin >> pX >> pY >> pO; cout << endl;


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