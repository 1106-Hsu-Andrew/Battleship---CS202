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
        Ship* shipType;
    public:
        Ship();
        Ship(string, char, Coordinate, Coordinate, int, int, bool, Ship*);
        Ship(const Ship&);
        ~Ship();

        friend ostream& operator<<(ostream&, const Ship&);
        Ship& operator=(const Ship&);

        string getName();
        char getOrientation();
        Coordinate getStart();
        Coordinate getEnd();
        int getLengths();
        int getHits();
        bool getIsSunk();
        Ship* getShipType();

        void setName(string);
        void setOrientation(char);
        void setStart(Coordinate);
        void setEnd(Coordinate);
        void setLength(int);
        void setHits(int);
        void setIsSunk(bool);
};

#endif