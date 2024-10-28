//
// Created by wunderlina on 10/28/2024.
//

#ifndef GAME_H
#define GAME_H
#include "Game.cpp"
#include "Grid.cpp"


class Game {
public:
  Game();
  void play();

private:
  Grid grid;
  void takeTurn();
};



#endif //GAME_H
