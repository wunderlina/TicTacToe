//
// Created by wunderlina on 10/28/2024.
//

#ifndef PIECE_H
#define PIECE_H



class Piece {
    char type;
public:
    virtual char getType() const;
    Piece(char type);
    virtual ~Piece();
};

class X: public Piece {
    char type;
public:
    X(): Piece('X') {}
    char getType() const override;
    ~X() override;
};

class O: public Piece {
    char type;
public:
    O(): Piece('O') {}
    char getType() const override;
    ~O() override;
};


#endif //PIECE_H
