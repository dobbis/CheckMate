#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "IOmanager.hpp"

class GameManager {
private:
    Board* board;
    PieceColor turn;
    PieceColor opponent;
    std::pair<int, int> input_1, input_2;
    bool checkmate_flag;

public:
    GameManager();
    ~GameManager();

    void startChess();
};

#endif