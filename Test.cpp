#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include "doctest.h"
#include <stdexcept>
TEST_CASE("Test if the program creates two named players") {
    Player p1("Alice");
    Player p2("Bob");
    CHECK(p1.getName() == "Alice");
    CHECK(p2.getName() == "Bob");
}

TEST_CASE("Test if the game is starting correctly:"){
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p2);
    CHECK(game.getPlayer1().getName() == "Alice");
    CHECK(game.getPlayer2().getName() == "Bob");
    CHECK(game.getCurrentTurn() == 0);
}

TEST_CASE("Test if the program creates two named players") {
    Player p1("Alice");
    Player p2("Bob");
    CHECK(p1.getName() == "Alice");
    CHECK(p2.getName() == "Bob");
}

