#include "player.h"
void placeAttack();
bool checkHit();
bool addGrid(Ship&, Board&);
bool removeGrid(Coordinate);
bool checkWin();
bool checkSunk();
void updateBoard();
bool checkCollision();
int playGame();
void clearBoard(Board);
