#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate{
    private:
        int x;
        int y;
    public:
        Coordinate();
        Coordinate(int, int);
        Coordinate(const Coordinate&);

        friend ostream& operator<<(ostream&, const Coordinate&);

        int getX();
        int getY();
        int setX(int);
        int setY(int);
};
#endif