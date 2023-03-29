#ifndef PLAYER_HPP
#define PLAYER_HPP

//#include "card.hpp"

class Player {
    public:
        Player(string name);
        
        void stacksize();
        void cardesTaken();
        
    private:
        string name;
}; 
