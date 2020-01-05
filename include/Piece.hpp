#ifndef PIECE_HPP
#define PIECE_HPP

#include "Enums.hpp"

#include <string>

class Board;

class Piece {
private:
    PieceClassify piece_class;
    PieceColor piece_color;
    int x_pos;
    int y_pos;
    bool first_move;
    bool dead_flag;
    
public:
    Piece();
    Piece(std::string piece_class, std::string piece_color, int xpos, int ypos);

    std::pair<int, int> getXYPos();
    bool getFirstMove();
    bool getDeadFlag();
    PieceClassify getPieceClass();
    PieceColor getPieceColor();


    void setXYPos(int x, int y);
    void setFirstMove();
    void setDeadFlag();
    
    bool canMovePieceToPos(int x, int y, Board* board);
};

#endif