#ifndef PATROLBOAT_H 
#define PATROLBOAT_H
#include "ship.h"

class PatrolBoat: public Ship{
    private:
        int length;
    public:
        PatrolBoat();
        PatrolBoat(int, int, Coordinate, Coordinate);
        PatrolBoat(const PatrolBoat&);

        friend ostream& operator<<(ostream&, PatrolBoat&);
        void getType() override;
};
#endif