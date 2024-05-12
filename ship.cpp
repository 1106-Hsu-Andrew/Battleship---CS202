#include "ship.h"
Ship::Ship(){
    name = "NA";
    orientation = 'N';
    length = -1;
    hits = -1;
    isSunk = false;
    shipType = new Ship[length];
}

Ship::Ship(string n, char o, Coordinate s, Coordinate e, int l , int h, bool iS, Ship* sT){
    name = n;
    orientation = o;
    start = s;
    end = e;
    length = l;
    hits = h;
    isSunk = iS;
    shipType = new Ship[length];
    for(int i = 0; i < length; i++){
        shipType[i] = sT[i];
    }
}

Ship::Ship(const Ship& rhs){
    name = rhs.name;
    orientation = rhs.orientation;
    start = rhs.start;
    end = rhs.end;
    length = rhs.length;
    hits = rhs.hits;
    isSunk = rhs.isSunk;
    shipType = new Ship[length];
    for(int i = 0; i < length; i++){
        shipType[i] = rhs.shipType[i];
    }

}

Ship::~Ship(){
    delete[] shipType;
}

ostream& operator<<(ostream& o, const Ship& rhs){
    o << rhs.name << endl;
    return o;
}
Ship& Ship::operator=(const Ship& rhs){
    name = rhs.name;
    orientation = rhs.orientation;
    start = rhs.start;
    end = rhs.end;
    length = rhs.length;
    hits = rhs.hits;
    isSunk = rhs.isSunk;
    shipType = new Ship[length];
    for(int i = 0; i < length; i++){
        shipType[i] = rhs.shipType[i];
    }
    return *this;
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

Coordinate Ship::getEnd(){
    return end;
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

Ship* Ship::getShipType(){
    return shipType;
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