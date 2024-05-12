#include "ai.h"
#include <stdlib.h>

AI::AI(){
    name = "NA";

}

AI::AI(name n, Board* b, Ship* s){
    name = n;
}

AI::AI(const AI&){
    name = rhs.name;
}

void AI::randomizeShips(){
    int x, y;
    Coordinate shipLocation = Coordinate();
    Coordinate shipArray[];

    for(int i = 0; i < 5; i++){
        x = rand() % 10;
        y = rand() % 10;
        shipLocation.setStartX(x);
        shipLocation.setStartY(y);
        shipArray[i] = shipLocation;
    }
}