#ifndef BOARD_H
#define BOARD_H
#include "ship.h"

class Board{
    private:
        int numRows, numCols, numShips, maxRows, maxCols, maxShips; 
        char* grid;
        Ship* ships;
    public:
        Board();
        Board(char*, Ship*, int, int, int, int, int, int);
        Board(const Board*);
        ~Board();

        char* getGrid();
        Ship* getShip();
        int getRows();
        int getCols();

        void setRows(int);
        void setCols(int);

        friend ostream& operator<<(ostream&, const Board&);
        Board& operator=(const Board&);
};

#endif