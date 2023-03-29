#pragma once
#include <string>

class Player {
    public:
        Player(std::string name);
        
        void stacksize();
        void cardesTaken();
        
    private:
        std::string name;
}; 
