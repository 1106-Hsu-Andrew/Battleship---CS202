#include "player.h"
#include "ai.h"
void placeAttack();
bool addGrid(Ship&, Board&);
bool checkSunk();
bool checkCollision(Board, Ship);
bool boardCollision(Ship[], Board&);
void randomizeShips(Board);
void displayBoard(Board, Board);
void clearBoard(Board);
void placeShip(Ship, Board);
void setGrid(Board);
string displayWelcome();
void displayShipPrompt(string);
void placeAttack(Board&);
bool checkHit(const Board&, int , int);