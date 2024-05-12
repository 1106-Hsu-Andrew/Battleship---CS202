#ifndef GAME_H
#define GAME_H
#include "player.h"

class Game{
    private:
        int currentPlayerIndex, numTurns, numPlayers, maxPlayers;
    public:
        Game();
        Game(int, int, int, int);
        Game(const Game&);
        ~Game();

        friend ostream& operator<<(ostream&, const Game&);
        Game& operator=(const Game&);

        int getCurrentPlayerIndex();
        int getNumTurns();
        int getNumPlayers();
        int getMaxPlayers();

        void setCurrentPlayerIndex(int);
        void setNumTurns(int);
};

#endif