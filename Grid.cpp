//
// Created by wunderlina on 10/28/2024.
//

#include "Grid.h"
#include <iostream>

Grid::Grid(): pieces{} {
    for (int i = 0; i < 9; i++) {
        pieces[i] = nullptr;
    }
}

Piece* Grid::checkWin() const {
    //std::cout << "Checking for win" << std::endl;
    //check rows
    for (int i = 0; i < 9; i+=3) {
        //std::cout << i << std::endl;
        if (pieces[i] != nullptr && pieces[i+1] != nullptr && pieces[i+2] != nullptr &&
            pieces[i]->getType() == pieces[i+1]->getType() && pieces[i+1]->getType() == pieces[i+2]->getType()) {
            return pieces[i];
        }
    }
    //check columns
    for (int i = 0; i < 3; i++) {
        //std::cout << i << std::endl;
        if (pieces[i] != nullptr && pieces[i+3] != nullptr && pieces[i+6] != nullptr &&
            pieces[i]->getType() == pieces[i+3]->getType() && pieces[i+3]->getType() == pieces[i+6]->getType()) {
            return pieces[i];
        }
    }
    //check diagonals
    for (int i = 0; i < 3; i+=2) {
        //std::cout << i << std::endl;
        if (pieces[i] != nullptr && pieces[4] != nullptr && pieces[8-i] != nullptr &&
            pieces[i]->getType() == pieces[4]->getType() && pieces[4]->getType() == pieces[8-i]->getType()) {
            return pieces[i];
        }
    }
    //std::cout << "No win" << std::endl;
    return nullptr;
}


bool Grid::checkFull() const {
    //std::cout << "Checking for full" << std::endl;
    for (int i = 9; i > 0; i--) {
        if (pieces[i] == nullptr) {
            return false;
        }
    }
    return true;
}

bool Grid::resolveTurn(int x, int y, Piece* piece) {
    if (x < 0 || x > 2 || y < 0 || y > 2) {
        //std::cout << "Invalid move" << std::endl;
        return false;
    }
    const int index = x + y*3;
    if (pieces[index] == nullptr) {
        pieces[index] = piece;
        return true;
    }
    return false;
}

void Grid::printGrid() const {
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 3; ++j) {
            if (pieces[i + j] != nullptr) {
                std::cout << pieces[i + j]->getType();
            } else {
                std::cout << " ";
            }
            if (j < 2) {
                std::cout << "|";
            }
        }
        std::cout << std::endl;
        if (i < 6) {
            std::cout << "-----" << std::endl;
        }
    }

    // std::cout << "-----" << std::endl;
    // std::cout << pieces[0]->getType() << "|" << pieces[1]->getType() << "|" << pieces[2]->getType() << std::endl;
    // std::cout << "-----" << std::endl;
    // std::cout << pieces[3]->getType() << "|" << pieces[4]->getType() << "|" << pieces[5]->getType() << std::endl;
    // std::cout << "-----" << std::endl;
    // std::cout << pieces[6]->getType() << "|" << pieces[7]->getType() << "|" << pieces[8]->getType() << std::endl;
}

