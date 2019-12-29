#ifndef PIECE_HPP
#define PIECE_HPP

#include "Enums.hpp"
#include "Algorithm.hpp"

#include <string>

class Board;

class Piece {
private:
    PieceClassify piece_class;
    PieceColor piece_color;
    int x_pos;
    int y_pos;
    bool first_move;
    
public:
    Piece();
    Piece(std::string piece_class, std::string piece_color, int xpos, int ypos);

    std::pair<int, int> getXYPos();
    bool getFirstMove();
    PieceClassify getPieceClass();
    PieceColor getPieceColor();

    void setXYPos(int x, int y);
    void setFirstMove();

    bool canMovePieceToPos(int x, int y, Board* board);
};

#endif