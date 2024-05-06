#ifndef SHIP_H
#define SHIP_H
#include "coordinate.h"

class Ship{
    protected:
        int hits;
        Coordinate start;
        Coordinate end;

        virtual void getType() = 0;        
    public:
        int getHits();
        Coordinate getStart();
        Coordinate getEnd();

        void setHits(int);
        void setStart(Coordinate);
        void setEnd(Coordinate);

};
#endif