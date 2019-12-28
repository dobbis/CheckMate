#include "IOmanager.hpp"

void printOneBoard(Board board, int x, int y) {
    Piece* piece = board.getPieceAtPos(x, y);
    if (piece == nullptr) {
        if ((x + y) % 2 == 0) {
            std::cout << "xx";
        } else {
            std::cout << "  ";
        }
    }
}

void printFirstGameboard(Board board) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

        } 
    }
}