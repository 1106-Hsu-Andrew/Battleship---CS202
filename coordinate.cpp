#include "coordinate.h"
Coordinate::Coordinate(){
    startX = -1;
    startY = -1;
    endX = -1;
    endY = -1;
}

Coordinate::Coordinate(int sX, int sY){
    startX = sX;
    startY = sY;
}

Coordinate::Coordinate(const Coordinate& rhs){
    startX = rhs.startX;
    startY = rhs.startY;
    endX = rhs.endX;
    endY = rhs.endY;
}

ostream& operator<<(ostream& o, const Coordinate& rhs){
    o << "Coordinate: (" << rhs.startX << ", "  << rhs.startY << ")" << endl;
    return o;
}

int Coordinate::getStartX(){
    return startX;
}

int Coordinate::getStartY(){
    return startY;
}

int Coordinate::getEndX(){
    return endX;
}

int Coordinate::getEndY(){
    return endY;
}

void Coordinate::setStartX(int sX){
    startX = sX;
}

void Coordinate::setStartY(int sY){
    startY = sY;
}

void Coordinate::setEndX(int eX){
    endX = eX;
}

void Coordinate::setEndY(int eY){
    endY = eY;
}