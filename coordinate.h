#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate{
    private:
        int startX, startY, endX, endY;
    public:
        Coordinate();
        Coordinate(int, int);
        Coordinate(const Coordinate&);

        friend ostream& operator<<(ostream&, const Coordinate&);

        int getStartX();
        int getStartY();
        int getEndX();
        int getEndY();

        void setStartX(int);
        void setStartY(int);
        void setEndX(int);
        void setEndY(int);
};

#endif