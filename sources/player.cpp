#include "player.hpp"
#include <string.h>
using namespace std;
class Player {
    public:
        std::string name;
        Player(){};
        Player(std::string name) {
            this->name = name;
        }
        
        int Player::stacksize(){
            return 10;
        }
        int Player::cardesTaken(){
            return 10;
        }
}; 

