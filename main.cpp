#include "helpers.h"
#include "ai.h"
#include <stdlib.h>
int main(){
    srand(time(nullptr));
    bool winCondition = false;
    // Initializing game board grid

    // Player Boards
    char** gameGrid = new char*[10];
    for(int i = 0; i < 10; i++){
        gameGrid[i] = new char[10];
    }

    char** attackGrid = new char*[10];
    for(int i = 0; i < 10; i++){
        attackGrid[i] = new char[10];
    }

    // AI Boards
    char** gameGridAI = new char*[10];
    for(int i = 0; i < 10; i++){
        gameGridAI[i] = new char[10];
    }

    char** attackGridAI = new char*[10];
    for(int i = 0; i < 10; i++){
        attackGridAI[i] = new char[10];
    }
    // Initializing ships directly in the shipArray
    Ship* shipArray = new Ship[5];

    Ship Carrier = Ship();
    Carrier.setName("Carrier");
    Carrier.setLength(5);

    Ship Battleship = Ship();
    Battleship.setName("Battleship");
    Battleship.setLength(4);

    Ship Destroyer = Ship();
    Destroyer.setName("Destroyer");
    Destroyer.setLength(3);

    Ship Submarine = Ship();
    Submarine.setName("Submarine");
    Submarine.setLength(3);

    Ship PatrolBoat = Ship();
    PatrolBoat.setName("Patrol Boat");
    PatrolBoat.setLength(2);

    shipArray[0] = Carrier;
    shipArray[1] = Battleship;
    shipArray[2] = Destroyer;
    shipArray[3] = Submarine;
    shipArray[4] = PatrolBoat;

    for(int i = 0; i < 5; i++){
        shipArray[i].setHits(0);
        shipArray[i].setIsSunk(false);
    }

    // Initializing game board and attack board objects
    Board gameBoard(gameGrid, 10, 10, 10, 10);
    Board attackBoard(attackGrid, 10, 10, 10, 10);
    Board gameBoardAI(gameGridAI, 10, 10, 10, 10);
    Board attackBoardAI(attackGridAI, 10, 10, 10, 10);

    // Setting grids for game board and attack board
    setGrid(gameBoard);
    setGrid(attackBoard);

    // Welcome and prompting for name and attributes of ships
    string userName;
    userName = displayWelcome();
    system("clear");
    displayBoard(attackBoard, gameBoard);
    displayShipPrompt(userName);

    boardCollision(shipArray, gameBoard);

    randomizeShips(gameBoardAI);
    displayBoard(attackBoard,gameBoard);

    do{
        placeAttack(attackBoard);
    }while(winCondition = false);

return 0;
}