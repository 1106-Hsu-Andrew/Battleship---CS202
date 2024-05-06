#ifndef SUBMARINE_H 
#define SUBMARINE_H
#include "ship.h"

class Submarine: public Ship{
    private:
        int length;
    public:
        Submarine();
        Submarine(int, int, Coordinate, Coordinate);
        Submarine(const Submarine&);

        friend ostream& operator<<(ostream&, Submarine&);
        void getType() override;
};
#endif