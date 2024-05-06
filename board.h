
#ifndef BOARD_H 
#define BOARD_H
#include <iostream>
using namespace std;

class Board{
    private:
        char* grid;
        int size, maxSize;
    public:
        Board();
        Board(char*, int, int);
        Board(const Board&);
        ~Board();

        Board& operator=(const Board&);
        friend ostream& operator<<(ostream&, Board&);

        char* getGrid();
        int getSize();
        int getMaxSize();

        void addGrid();

};
#endif