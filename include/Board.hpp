#ifndef BOARD_HPP
#define BOARD_HPP

#include "Piece.hpp"

class Board {
private:
    Piece*** gameboard;
    Piece** pieces;
public:
    Board();
    ~Board();

    void printGameboard();
};

#endif