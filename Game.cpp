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
    Piece* piece = new X();
    std::cout << "Welcome to Tic Tac Toe!" << std::endl;
    Piece *winner = nullptr;
    while((winner = grid.checkWin()) == nullptr && !grid.checkFull()) {
        std::cout << "It's " << piece->getType() << "'s turn!" << std::endl;
        takeTurn(piece);
        if(piece->getType() == 'X') {
            piece = new O();
        }else {
            piece = new X();
        }
    }
    if (winner != nullptr) {
        std::cout << winner->getType() << " wins!" << std::endl;
    } else {
        std::cout << "Draw! No more valid moves." << std::endl;
    }

    // if(grid.checkWin()->getType() == 'X' || grid.checkWin()->getType() == 'O') {
    //     std::cout << grid.checkWin()->getType() << " wins!" << std::endl;
    // }else {
    //     std::cout << "Draw! No more valid moves." << std::endl;
    // }
}

void Game::takeTurn(Piece* piece) {
    int x, y;
    std::cout << "Where would you like to make your move?\nEnter coordinates as \"x y\" starting from top left, with 0 indexing" << std::endl;
    while (true) {
        //grid.printGrid();
        std::cin >> x;
        std::cin >> y;
        if (grid.resolveTurn(x, y, piece)) {
            break;
        }
        std::cout << "Invalid move. Try again." << std::endl;
    }
    grid.printGrid();

    // int x = -1;
    // int y = -1;
    // while(!grid.resolveTurn(x, y, piece)) {
    //     grid.printGrid();
    //     std::cout << "Where would you like to make your move?\nEnter as \"x y\"";
    //     std::cin >> x;
    //     std::cin >> y;
    // }
};
