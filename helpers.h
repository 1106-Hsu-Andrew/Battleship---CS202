#include "player.h"
void placeAttack();
bool checkHit();
bool addGrid(Ship&, Board&);
bool removeGrid(Coordinate);
bool checkWin();
bool checkSunk();
void updateBoard();
bool checkCollision(Board, Ship);
bool boardCollision(Ship[], Board&);
int playGame();
void displayBoard(Board, Board);
void clearBoard(Board);
void placeShip(Ship, Board);
void setGrid(Board);
string displayWelcome();
void displayShipPrompt(string);
