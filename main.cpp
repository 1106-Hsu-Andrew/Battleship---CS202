#include "helpers.h"
#include "ai.h"
#include <stdlib.h>

int main(){
    // Initializing of grid and ships
    char** grid = new char*[10];
    for(int i = 0; i < 10; i++){
        grid[i] = new char[10];
    }

    Ship* shipArray = new Ship[5];

    Ship Carrier = Ship();
    Ship Battleship = Ship();
    Ship Destroyer = Ship();
    Ship Submarine = Ship();
    Ship PatrolBoat = Ship();


    // Initializing board object and setting the board
    Board gameBoard(grid, 10, 10, 10, 10);
    Board attackBoard(grid, 10, 10, 10, 10);

    setGrid(gameBoard);
    setGrid(attackBoard);

    // Welcome and prompting for name and attributes of ship
    string userName;
    userName = displayWelcome();
    system("clear");
    displayBoard(attackBoard, gameBoard);
    displayShipPrompt(userName);

    int x, y;
    char orientation;

    // Getting the x, y, and orientation of each ships
    for(int i = 0; i < 5; i++){
        do{
            cout << shipArray[i].getName() << ": ";
            cin >> x >> y >> orientation;
            shipArray[i].getStart().setStartX(x);
            shipArray[i].getStart().setStartY(y);
            shipArray[i].setOrientation(orientation);
            placeShip(shipArray[i], gameBoard);
            cout << gameBoard;
        }while((x < 0 || x > 10) || (y < 0 || y > 10) || (orientation != 'V' && orientation != 'H') || !checkCollision(gameBoard, shipArray[i]));
    }
}