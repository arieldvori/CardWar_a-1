#pragma once
#include <string.h>
#include "player.hpp"

    class Game{
    private:
        ariel::Player p1;
        ariel::Player p2;
    public:

        Game(){}
        Game(ariel::Player p1, ariel::Player p2){
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
