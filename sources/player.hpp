#pragma once
#include <string>
using namespace std;
namespace ariel{
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
}
