#include "ship.h"
Ship::Ship(){
    name = "NA";
    orientation = 'N';
    length = -1;
    hits = -1;
    isSunk = false;
}

Ship::Ship(string n, char o, Coordinate s,int l , int h, bool iS){
    name = n;
    orientation = o;
    start = s;
    length = l;
    hits = h;
    isSunk = iS;
}

Ship::Ship(const Ship& rhs){
    name = rhs.name;
    orientation = rhs.orientation;
    start = rhs.start;
    length = rhs.length;
    hits = rhs.hits;
    isSunk = rhs.isSunk;
}

ostream& operator<<(ostream& o, const Ship& rhs){
    o << rhs.name << endl;
    return o;
}

string Ship::getName(){
    return name;
}

char Ship::getOrientation(){
    return orientation;
}

Coordinate Ship::getStart(){
    return start;
}

int Ship::getLength(){
    return length;
}

int Ship::getHits(){
    return hits;
}

bool Ship::getIsSunk(){
    return isSunk;
}

void Ship::setName(string n){
    name = n;
}

void Ship::setOrientation(char o ){
    orientation = o;
}

void Ship::setStart(Coordinate s){
    start = s;
}

void Ship::setEnd(Coordinate e){
    end = e;
}

void Ship::setLength(int l){
    length = l;
}

void Ship::setHits(int h){
    hits = h;
}

void Ship::setIsSunk(bool iS){
    isSunk = iS;
}