#ifndef SHIP_H
#define SHIP_H
#include "coordinate.h"

class Ship{
    private:
        string name;
        char orientation;
        Coordinate start, end;
        int length, hits;
        bool isSunk;
    public:
        Ship();
        Ship(string, char, Coordinate, int, int, bool);
        Ship(const Ship&);

        friend ostream& operator<<(ostream&, const Ship&);

        string getName();
        char getOrientation();
        Coordinate getStart();
        Coordinate getEnd();
        int getLength();
        int getHits();
        bool getIsSunk();

        void setName(string);
        void setOrientation(char);
        void setStart(Coordinate);
        void setEnd(Coordinate);
        void setLength(int);
        void setHits(int);
        void setIsSunk(bool);
};

#endif