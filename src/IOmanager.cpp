#include "IOmanager.hpp"

std::string getOneBlock(Piece* piece, int x, int y) {
    if (piece == nullptr) {
        if ((x + y) % 2 == 0) {
            return "■■";
        } else if ((x + y) % 2 == 1) {
            return "  ";
        }
    } else if (piece->getPieceColor() == PieceColor::BLACK) {
        if (piece->getPieceClass() == PieceClassify::KING) {
            return "BK";
        } else if (piece->getPieceClass() == PieceClassify::QUEEN) {
            return "BQ";
        } else if (piece->getPieceClass() == PieceClassify::BISHOP) {
            return "BB";
        } else if (piece->getPieceClass() == PieceClassify::KNIGHT) {
            return "BN";
        } else if (piece->getPieceClass() == PieceClassify::ROOK) {
            return "BR";
        } else if (piece->getPieceClass() == PieceClassify::PAWN) {
            return "BP";
        }
    } else if (piece->getPieceColor() == PieceColor::WHITE) {
        if (piece->getPieceClass() == PieceClassify::KING) {
            return "WK";
        } else if (piece->getPieceClass() == PieceClassify::QUEEN) {
            return "WQ";
        } else if (piece->getPieceClass() == PieceClassify::BISHOP) {
            return "WB";
        } else if (piece->getPieceClass() == PieceClassify::KNIGHT) {
            return "WN";
        } else if (piece->getPieceClass() == PieceClassify::ROOK) {
            return "WR";
        } else if (piece->getPieceClass() == PieceClassify::PAWN) {
            return "WP";
        }
    }
}

void printGameboard(Board* board) {
    std::cout << " 0  1  2  3  4  5  6  7  8" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for (int i = 0; i < 8; i++) {
        std::cout << "|";
        for (int j = 0; j < 8; j++) {
            std::cout << getOneBlock(board->getPieceAtPos(j, i), j, i) << "|";
        }
        std::cout << " " << i << std::endl << "-------------------------" << std::endl;
    }
}

