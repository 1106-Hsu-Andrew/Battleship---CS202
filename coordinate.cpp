#include "coordinate.h"
Coordinate::Coordinate(){
    x = -1;
    y = -1;
}

Coordinate::Coordinate(int xs, int ys){
    x = xs;
    y = ys;
}

Coordinate::Coordinate(const Coordinate& rhs){
    x = rhs.x;
    y = rhs.y;
}

ostream& operator<<(ostream& o , const Coordinate& rhs){
    o << rhs.x << rhs.y << endl;
}

int Coordinate::getX(){
    return x;
}

int Coordinate::getY(){
    return y;
}

int Coordinate::setX(int xs){
    x = xs;
}

int Coordinate::setY(int ys){
    y = ys;
}