#pragma once
#include <string.h>
using namespace std;
class Player {
    public:
        Player(std::string name);
        
        int stacksize();
        int cardesTaken();
        
    private:
        std::string name;
}; 

