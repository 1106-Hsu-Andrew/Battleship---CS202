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
    cout << "Hello " << userName << " please choose the location of your five ships and their orientation." << endl;
    cout << "Type the values in this order: x, y, orientation, and separate the values by spaces. " << endl << endl;

    do{
        cout << "Carrier: "; cin >> cX >> cY >> cO;
    }while((cX < 0 || cX > 10) || (cY < 0 || cY > 10) || (cO != 'V' && cO != 'H'));

    do{
        cout << "Battleship: "; cin >> bX >> bY >> bO; 
    }while((bX < 0 || bX > 10) || (bY < 0 || bY > 10) || (bO != 'V' && bO != 'H'));

    do{
        cout << "Destroyer: "; cin >> dX >> dY >> dO; 
    }while((dX < 0 || dX > 10) && (dY < 0 || dY > 10) || (dO != 'V' && dO != 'H'));

    do{
        cout << "Submarine: "; cin >> sX >> sY >> sO;
    }while((sX < 0 || sX > 10) && (sY < 0 || sY > 10) || (sO != 'V' && sO != 'H'));

    do{
        cout << "Patrol Boat: "; cin >> pX >> pY >> pO; cout << endl;
  
    }while((pX < 0 || pX > 10) && (pY < 0 || pY > 10) || (pO != 'V' && pO != 'H'));

    Coordinate playerCarrierCoordinate = Coordinate(cX, cY);
    Ship playerCarrier = Ship("Carrier", cO, playerCarrierCoordinate, 5, 0, false);

    Coordinate playerBattleshipCoordinate = Coordinate(bX, bY);
    Ship playerBattleship = Ship("Battleship", bO, playerBattleshipCoordinate, 4, 0, false);

    Coordinate playerDestroyerCoordinate = Coordinate(dX, dY);
    Ship playerDestroyer = Ship("Destroyer", dO, playerCarrierCoordinate, 3, 0, false);

    Coordinate playerSubmarineCoordinate = Coordinate(sX, sY);
    Ship playerSubmarine = Ship("Submarine", sO, playerSubmarineCoordinate, 3, 0, false);

    Coordinate playerPatrolBoatCoordinate = Coordinate(pX, pY);
    Ship playerPatrolBoat = Ship("Submarine", pO, playerPatrolBoatCoordinate, 2, 0, false);
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