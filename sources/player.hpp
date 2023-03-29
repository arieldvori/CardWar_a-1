#pragma once
#include <string>
using namespace std;

class Player{
    private:
        std::string name;
    public:
        Player(){};
        Player(std::string name){
            this->name = name;
        }

        int stacksize();
        int cardesTaken();
};