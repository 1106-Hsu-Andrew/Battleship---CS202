#ifndef GAME_H
#define GAME_H
#include "player.h"

class Game{
    private:
        Player* players;
        int currentPlayerIndex;
        int numTurns;
    public:
        Game();
        Game(Player*, int, int);
        Game(const Game&);

        Game& operator=(const Game&);
        friend ostream& operator<<(ostream&, const Game&);

        int getNumTurns();
        int getCurrentPlayerIndex();
};
#endif