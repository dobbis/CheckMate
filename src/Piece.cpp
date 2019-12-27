#include "Piece.hpp"

Piece::Piece() {
    piece_class = PieceClassify::EMPTY;
    piece_color = PieceColor::EMPTY;
    x_pos = 0;
    y_pos = 0;
}

Piece::Piece(std::string piece_class_, std::string piece_color_, int xpos, int ypos) {
    PieceColor pcolor;
    PieceClassify pclass;

    if (piece_color_ == "BLACK") {
        pcolor = PieceColor::BLACK;
    } else if (piece_color_ == "WHITE") {
        pcolor = PieceColor::WHITE;
    } else {
        pcolor = PieceColor::EMPTY;
    }

    if (piece_class_ == "PAWN") {
        pclass = PieceClassify::PAWN;
    } else if (piece_class_ == "ROOK") {
        pclass = PieceClassify::ROOK;
    } else if (piece_class_ == "KNIGHT") {
        pclass = PieceClassify::KNIGHT;
    } else if (piece_class_ == "BISHOP") {
        pclass = PieceClassify::BISHOP;
    } else if (piece_class_ == "QUENN") {
        pclass = PieceClassify::QUEEN;
    } else if (piece_class_ == "KING") {
        pclass = PieceClassify::KING;
    } else {
        pclass = PieceClassify::EMPTY;
    }

    piece_class = pclass;
    piece_color = pcolor;
    x_pos = xpos;
    y_pos = ypos;
}