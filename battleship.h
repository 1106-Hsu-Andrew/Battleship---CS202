#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "ship.h"

class Battleship: public Ship{
    private:
        int length;
    public:
        Battleship();
        Battleship(int, int, Coordinate, Coordinate);
        Battleship(const Battleship&);

        friend ostream& operator<<(ostream&, const Battleship&);
        void getType() override;
};

#endif