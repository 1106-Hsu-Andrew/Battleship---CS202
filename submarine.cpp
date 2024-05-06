#include "submarine.h"
Submarine::Submarine(){
    length = 5;
    hits = -1;
}

Submarine::Submarine(int l, int h, Coordinate s, Coordinate e){
    length = l;
    hits = h;
    start = s;
    end = e;
}

Submarine::Submarine(const Submarine& rhs){
    length = rhs.length;
    hits = rhs.hits;
    start = rhs.start;
    end = rhs.end;
}

ostream& operator<<(ostream& o , Submarine& rhs){
    o << rhs.hits << endl;
    return o;
}

void Submarine::getType(){
    cout << "Submarine" << endl;
}