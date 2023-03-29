#pragma once
#include "player.hpp"
namespace ariel{


class Game{
    public:
        Player p1;
        Player p2;
        Game(Player p1, Player p2);

        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();


};
}
