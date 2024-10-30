//
// Created by wunderlina on 10/28/2024.
//

#ifndef PIECE_H
#define PIECE_H



class Piece {
protected:
    char type;
public:
    Piece();
    Piece(char type);
    virtual char getType() const = 0;
    virtual ~Piece();
};

class X: public Piece {
    //char type;
public:
    X();
    char getType() const override;
    ~X() override;
};

class O: public Piece {
    //char type;
public:
    O();
    char getType() const override;
    ~O() override;
};


#endif //PIECE_H
