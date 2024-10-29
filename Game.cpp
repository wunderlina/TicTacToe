//
// Created by wunderlina on 10/28/2024.
//
#include "Game.h"
#include "Grid.h"
#include "Piece.h"
#include <iostream>


Game::Game() {
    this->grid = *new Grid();
}
void Game::play() {
    Piece piece = *new X();
    while(grid.checkWin() == nullptr && !grid.checkFull) {
        takeTurn(piece);
        if(piece.getType() == 'X') {
            piece = *new O();
        }else {
            piece = *new X();
        }
    }
    if(grid.checkWin()->getType() == 'X' || grid.checkWin()->getType() == 'O') {
        std::cout << grid.checkWin()->getType() << " wins!" << std::endl;
    }else {
        std::cout << "Draw! No more valid moves." << std::endl;
    }
}

void Game::takeTurn(Piece piece){
    int x = -1;
    int y = -1;
    while(!grid.resolveTurn(x, y, piece)) {
        grid.printGrid();
        std::cout << "Where would you like to make your move?\nEnter as \"x y\"";
        std::cin >> x;
        std::cin >> y;
    }
};
