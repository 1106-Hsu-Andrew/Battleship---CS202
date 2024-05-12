#ifndef BOARD_H
#define BOARD_H
#include "ship.h"

class Board{
    private:
        int numRows, numCols, maxRows, maxCols; 
        char** grid;
    public:
        Board();
        Board(char**, int, int, int, int);
        Board(const Board&);
        ~Board();

        char** getGrid();
        int getRows();
        int getCols();

        void setRows(int);
        void setCols(int);

        friend ostream& operator<<(ostream&, const Board&);
        Board& operator=(const Board&);
};

#endif