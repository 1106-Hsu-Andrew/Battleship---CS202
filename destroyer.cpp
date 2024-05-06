#include "destroyer.h"
Destroyer::Destroyer(){
    length = 5;
    hits = -1;
}

Destroyer::Destroyer(int l, int h, Coordinate s, Coordinate e){
    length = l;
    hits = h;
    start = s;
    end = e;
}

Destroyer::Destroyer(const Destroyer& rhs){
    length = rhs.length;
    hits = rhs.hits;
    start = rhs.start;
    end = rhs.end;
}

ostream& operator<<(ostream& o , Destroyer& rhs){
    o << rhs.hits << endl;
    return o;
}

void Destroyer::getType(){
    cout << "Destroyer" << endl;
}