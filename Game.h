//
// Created by wunderlina on 10/28/2024.
//

#ifndef GAME_H
#define GAME_H
#include "Grid.h"


class Game {
public:
  Game();
  void play();

private:
  Grid grid;
  void takeTurn(Piece piece);
};

#endif //GAME_H
