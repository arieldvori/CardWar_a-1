#pragma once
#include <string.h>
#include "player.hpp"
namespace ariel{

    class Game{
    private:
        Player p1;
        Player p2;
    public:

        Game(){}
        Game(Player p1, Player p2){
            this->p1 = p1;
            this->p2 = p2;
        }

        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
    };
}