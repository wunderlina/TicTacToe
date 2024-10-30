//
// Created by wunderlina on 10/28/2024.
//

#include "Piece.h"

Piece::Piece() : type(' ') {}
Piece::Piece(char type) : type(type) {}
Piece::~Piece() {}

X::X() : Piece('X') {}
char X::getType() const {return 'X';}
X::~X() {}

O::O() : Piece('O') {}
char O::getType() const {return 'O';}
O::~O() {}
