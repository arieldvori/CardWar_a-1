#pragma once
#include <string>
using namespace std;
namespace ariel{
class Player{
    public:
        std::string name;
        Player(){};
        Player(std::string name){
            this->name = name;
        }

        int stacksize();
        int cardesTaken();
};
}
