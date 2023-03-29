#ifndef GAME_HPP
#define GAME_HPP

#include "sources/player.hpp"

class Game{
    public:
        Game(Player p1, Player p2);

        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();

    private:
        Player p1;
        Player p2;
};
#endif //GAME_H