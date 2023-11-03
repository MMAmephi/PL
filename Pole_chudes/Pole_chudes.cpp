#include "Game.h"

int main() {
    Game game;
    game.start();
    while (game.suggest() == 1) {
        game.game();
    }
    game.y.goodbye();
}