#ifndef DESTROYER_H
#define DESTROYER_H
#include "ship.h"

class Destroyer: public Ship{
    private:
        int length;
    public:
        Destroyer();
        Destroyer(int, int, Coordinate, Coordinate);
        Destroyer(const Destroyer&);

        friend ostream& operator<<(ostream&, Destroyer&);
        void getType() override;
};
#endif