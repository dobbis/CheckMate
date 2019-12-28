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

    Piece* getPieceAtPos(int x, int y);

    bool movePiecePosToPos(int x1, int y1, int x2, int y2);
    void printGameboard();
};

#endif