#ifndef GAME_H
#define GAME_H
#include "player.h"

class Game{
    private:
        Player* players;
        int currentPlayerIndex, numTurns, numPlayers, maxPlayers;
    public:
        Game();
        Game(Player*, int, int, int, int);
        Game(const Player&);
        ~Game();

        friend ostream& operator<<(ostream&, const Game&);
        Game& operator=(const Game&);

        Player* getPlayers();
        int getCurrentPlayerIndex();
        int getNumTurns();
        int getNumPlayers();
        int getMaxPlayers();

        void setCurrentPlayerIndex(int);
        void setNumTurns(int);
};

#endif