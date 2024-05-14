#ifndef AI_H
#define AI_H
#include <stdlib.h>
#include "player.h"

class AI: public Player{
    Board* gameBoard;
    Ship* ships;
    public:
        AI();
        AI(string, Board*, Ship*);
        AI(const AI&);

        void randomizeShips();
};

#endif