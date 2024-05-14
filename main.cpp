#include "helpers.h"
#include "ai.h"
#include <stdlib.h>

int main(){
    // Initializing game board grid
    char** gameGrid = new char*[10];
    for(int i = 0; i < 10; i++){
        gameGrid[i] = new char[10];
    }

    // Initializing attack board grid
    char** attackGrid = new char*[10];
    for(int i = 0; i < 10; i++){
        attackGrid[i] = new char[10];
    }

    // Initializing ships directly in the shipArray
    Ship shipArray[5];

    shipArray[0].setName("Carrier");
    shipArray[0].setLength(5);

    shipArray[1].setName("Battleship");
    shipArray[1].setLength(4);

    shipArray[2].setName("Destroyer");
    shipArray[2].setLength(3);

    shipArray[3].setName("Submarine");
    shipArray[3].setLength(3);

    shipArray[4].setName("Patrol Boat");
    shipArray[4].setLength(2);

    // Initializing game board and attack board objects
    Board gameBoard(gameGrid, 10, 10, 10, 10);
    Board attackBoard(attackGrid, 10, 10, 10, 10);

    // Setting grids for game board and attack board
    setGrid(gameBoard);
    setGrid(attackBoard);

    // Welcome and prompting for name and attributes of ships
    string userName;
    userName = displayWelcome();
    system("clear");
    displayBoard(attackBoard, gameBoard);
    displayShipPrompt(userName);

    int x, y;
    char orientation;
    Coordinate location = Coordinate();

    // Getting the x, y, and orientation of each ship
    for(int i = 0; i < 5; i++){
    do {
        // Prompt for ship placement
        cout << shipArray[i].getName() << ": ";
        cin >> x >> y >> orientation;

        // Set start location and orientation for the ship
        location.setStartX(x);
        location.setStartY(y);

        shipArray[i].setStart(location);
        shipArray[i].setOrientation(orientation);

        // Check for collision
        if(checkCollision(gameBoard, shipArray[i])){
            cout << "Collision detected! Please choose a different location." << endl;
        }
    } while(checkCollision(gameBoard, shipArray[i])); // Repeat if there's a collision

    // Place the ship on the game board
    placeShip(shipArray[i], gameBoard);
    cout << gameBoard;
}
return 0;
}