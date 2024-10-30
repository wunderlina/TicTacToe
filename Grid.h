//
// Created by wunderlina on 10/28/2024.
//

#ifndef GRID_H
#define GRID_H
#include "Piece.h"


class Grid {
private:
    Piece* pieces[9];
    Piece* getSpot(int x, int y);
public:
    Grid();
    Piece* checkWin() const;
    bool checkFull() const;

    bool resolveTurn(int x, int y, Piece* piece);
    void printGrid() const;
};



#endif //GRID_H
