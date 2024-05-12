#include "ai.h"
#include <stdlib.h>
void AI::randomizeShips(){
    int x, y;
    Coordinate shipLocation = Coordinate();
    Coordinate shipArray[5];

    for(int i = 0; i < 5; i++){
        x = rand() % 10;
        y = rand() % 10;
        shipLocation.setStartX(x);
        shipLocation.setStartY(y);
        shipArray[i] = shipLocation;
    }
}