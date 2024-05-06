#include "patrolboat.h"
PatrolBoat::PatrolBoat(){
    length = 5;
    hits = -1;
}

PatrolBoat::PatrolBoat(int l, int h, Coordinate s, Coordinate e){
    length = l;
    hits = h;
    start = s;
    end = e;
}

PatrolBoat::PatrolBoat(const PatrolBoat& rhs){
    length = rhs.length;
    hits = rhs.hits;
    start = rhs.start;
    end = rhs.end;
}

ostream& operator<<(ostream& o , PatrolBoat& rhs){
    o << rhs.hits << endl;
    return o;
}

void PatrolBoat::getType(){
    cout << "Patrol Boat" << endl;
}