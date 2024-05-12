#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"

class Player{
    private:
        string name;
        Board* board;
        Ship* ships;

        virtual void randomizeShips() = 0;
    public:
        Player();
        Player(string);
        Player(const Player&);
        ~Player();

        Player& operator=(const Player&);
        friend ostream& operator<<(ostream&, const Player&);

        string getName() const;
        Ship* getShips() const;

        void setName(const string);
};

#endif