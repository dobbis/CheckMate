#ifndef BOARD_HPP
#define BOARD_HPP

#include "Enums.hpp"

#include <vector>

class Piece;

class LogFile {
private:
    Piece* piece_1;
    Piece* piece_2;
    bool first_move_flag, dead_flag;
    int x1, y1, x2, y2;
    
    friend class Board;
};

class Board {
private:
    Piece*** gameboard;
    Piece** pieces;
    LogFile* log;
public:
    Board();
    ~Board();

    Piece* getPieceAtPos(int x, int y);

    void saveLogFile(int x1, int y1, int x2, int y2);
    void loadLogFile();

    bool movePiecePosToPos(int x1, int y1, int x2, int y2, bool possibility);
    bool isChecked(PieceColor color);
    std::vector<std::pair<int, int>> getAvailableMove(Piece* piece);
};

#endif