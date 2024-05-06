#include "battleship.h"
Battleship::Battleship(){
    length = 4;
    hits = -1;
}

Battleship::Battleship(int l , int h , Coordinate s , Coordinate e){ 
    length = l;
    hits = h;
    start = s;
    end = e;
}

Battleship::Battleship(const Battleship& rhs){
    length = rhs.length;
    hits = rhs.hits;
    start = rhs.start;
    end = rhs.end;
}

ostream& operator<<(ostream& o, const Battleship& rhs){
    o << rhs.hits << endl;
    return o;
}

void Battleship::getType(){
    cout << "Battleship" << endl;
}