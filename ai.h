#ifndef AI_H
#define AI_H
#include "player.h"

class AI: public Player{
    public:
        AI();
        AI(string, Board*, Ship*);
        AI(const AI&);

        void randomizeShips();
};

#endif