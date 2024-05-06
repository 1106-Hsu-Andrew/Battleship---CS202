#include "ship.h"
int Ship::getHits(){
    return hits;
}

Coordinate Ship::getStart(){
    return start;
}

Coordinate Ship::getEnd(){
    return end;
}

void Ship::setHits(int h){
    hits = h;
}

void Ship::setStart(Coordinate s){
    start = s;
}

void Ship::setEnd(Coordinate e){
    end = e;
}
