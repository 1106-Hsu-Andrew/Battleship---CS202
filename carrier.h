#ifndef CARRIER_H
#define CARRIER_H
#include "ship.h"

class Carrier: public Ship{
    private:
        int length;
    public:
        Carrier();
        Carrier(int, int, Coordinate, Coordinate);
        Carrier(const Carrier&);

        friend ostream& operator<<(ostream&, Carrier&);
        void getType() override;
};
#endif