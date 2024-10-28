//
// Created by wunderlina on 10/28/2024.
//

#ifndef GRID_H
#define GRID_H
#include "Piece.h"


class Grid {
private:
    Piece piece[];
    Piece getSpot(int x, int y);
public:
    Piece checkWin();
    bool checkFull();
    bool resolveTurn(int x, int y, Piece piece);
    void printGrid();
};



#endif //GRID_H
