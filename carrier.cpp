#include "carrier.h"
Carrier::Carrier(){
    length = 5;
    hits = -1;
}

Carrier::Carrier(int l, int h, Coordinate s, Coordinate e){
    length = l;
    hits = h;
    start = s;
    end = e;
}

Carrier::Carrier(const Carrier& rhs){
    length = rhs.length;
    hits = rhs.hits;
    start = rhs.start;
    end = rhs.end;
}

ostream& operator<<(ostream& o , Carrier& rhs){
    o << rhs.hits << endl;
    return o;
}

void Carrier::getType(){
    cout << "Carrier" << endl;
}