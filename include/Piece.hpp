#ifndef PIECE_HPP
#define PIECE_HPP

#include "Enums.hpp"

#include <string>
#include <stdlib.h>

class Piece {
private:
    PieceClassify piece_class;
    PieceColor piece_color;
    int x_pos;
    int y_pos;
    
public:
    Piece();
    Piece(std::string piece_class, std::string piece_color, int xpos, int ypos);

    std::pair<int, int> getXYPos();
    void setXYPos(int x, int y);

    bool canMovePieceToPos(int x, int y);
};

bool canMovePawnToPos(int dx, int dy, PieceColor color);
bool canMoveRookToPos(int dx, int dy);
bool canMoveKnightToPos(int dx, int dy);
bool canMoveBishopToPos(int dx, int dy);
bool canMoveQueenToPos(int dx, int dy);
bool canMoveKingToPos(int dx, int dy);

#endif