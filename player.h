#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"
#include "ship.h"

class Player{
    private:
        string name;
        Board* board;
        Ship* ships;
        int numShips;
    public:
        Player();
        Player(string, Board*, Ship*, int);
        Player(const Player&);
        ~Player();

        Player& operator=(const Player&);
        friend ostream& operator<<(ostream&, Player&);

        string getName();
        Board* getBoard();
        Ship* getShip();
        int getNumShips();

        void setName(string);
        void setNumShips(int);


};
#endif