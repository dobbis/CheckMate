#ifndef BOARD_HPP
#define BOARD_HPP

#include "Piece.hpp"

class Board {
private:
    Piece** gameboard;
public:
    Board();

    void printGameboard();
};

#endif