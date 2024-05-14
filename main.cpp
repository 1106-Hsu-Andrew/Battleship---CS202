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

    Carrier.setName("Carrier");
    Battleship.setName("Battleship");
    Destroyer.setName("Destroyer");
    Submarine.setName("Submarine");
    PatrolBoat.setName("Patrol Boat");

    Carrier.setLength(5);
    Battleship.setLength(4);
    Destroyer.setLength(3);
    Submarine.setLength(3);
    PatrolBoat.setLength(2);

    for(int i = 0; i < 5; i++){
        shipArray[i].setHits(0);
        shipArray[i].setIsSunk(1);
    }

    shipArray[0] = Carrier;
    shipArray[1] = Battleship;
    shipArray[2] = Destroyer;
    shipArray[3] = Submarine;
    shipArray[4] = PatrolBoat;
    
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
    Coordinate location = Coordinate();
    // Getting the x, y, and orientation of each ships
    for(int i = 0; i < 5; i++){
        do{
            cout << shipArray[i].getName() << ": ";
            cin >> x >> y >> orientation;

            location.setStartX(x);
            location.setStartY(y);

            shipArray[i].setStart(location);
            shipArray[i].setOrientation(orientation);
            placeShip(shipArray[i], gameBoard);
            cout << gameBoard;
        }while((x < 0 || x > 10) || (y < 0 || y > 10) || (orientation != 'V' && orientation != 'H') || !checkCollision(gameBoard, shipArray[i]));
    }
}