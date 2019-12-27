#ifndef PIECE_HPP
#define PIECE_HPP

#include "Enums.hpp"

#include <string>

class Piece {
private:
    PieceClassify piece_class;
    PieceColor piece_color;
public:
    Piece();
    Piece(std::string piece_class, std::string piece_color);
};

#endif