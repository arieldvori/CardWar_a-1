#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <stdexcept>

TEST_CASE("Creating players with their names") {
    ariel::Player p1("Alice");
    ariel::Player p2("Bob");

    CHECK(p1.name == "Alice");
    CHECK(p2.name == "Bob");
}
TEST_CASE("if they are starting with the same stack size:") {
    ariel::Player p1 ("Ariel");
    ariel::Player p2 ("Bob");
    Game game(p1,p2);
    CHECK(p1.stacksize()==p2.stacksize());
}
TEST_CASE("if they are taking the same amount:") {
    ariel::Player p1 ("Ariel");
    ariel::Player p2 ("Bobsfog");
    Game game(p1,p2);
    CHECK(p1.cardesTaken()==1);
    CHECK(p2.cardesTaken()==1);

}

