#ifndef PIECE_HPP
#define PIECE_HPP

#include "Enums.hpp"
#include "Algorithm.hpp"

#include <string>

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

#endif