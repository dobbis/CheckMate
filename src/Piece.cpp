#include "Piece.hpp"
#include "Board.hpp"
#include "Algorithm.hpp"

Piece::Piece() {
    piece_class = PieceClassify::EMPTY;
    piece_color = PieceColor::EMPTY;
    x_pos = 0;
    y_pos = 0;
    first_move = true;
    dead_flag = false;
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
    } else if (piece_class_ == "QUEEN") {
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
    first_move = true;
    dead_flag = false;
}

std::pair<int, int> Piece::getXYPos() {
    return std::make_pair(x_pos, y_pos);
}

bool Piece::getFirstMove() {
    return first_move;
}

bool Piece::getDeadFlag() {
    return dead_flag;
}

PieceClassify Piece::getPieceClass() {
    return piece_class;
}

PieceColor Piece::getPieceColor() {
    return piece_color;
}

PieceColor Piece::getOpponentPieceColor() {
    if (piece_color == PieceColor::BLACK) {
        return PieceColor::WHITE;
    } else if (piece_color == PieceColor::WHITE) {
        return PieceColor::BLACK;
    } else {
        return PieceColor::EMPTY;
    }
}

void Piece::setXYPos(int x, int y) {
    x_pos = x;
    y_pos = y;
}

void Piece::setFirstMove(bool flag) {
    first_move = flag;
}

void Piece::setDeadFlag(bool flag) {
    dead_flag = flag;
}

bool Piece::canMovePieceToPos(int x, int y, Board* board) {
    int dx, dy;
    dx = x - x_pos;
    dy = y - y_pos;

    if (piece_class == PieceClassify::KING) {
        return canMoveKingToPos(dx, dy, this, board);
    } else if (piece_class == PieceClassify::QUEEN) {
        return canMoveQueenToPos(dx, dy, this, board);
    } else if (piece_class == PieceClassify::BISHOP) {
        return canMoveBishopToPos(dx, dy, this, board);
    } else if (piece_class == PieceClassify::KNIGHT) {
        return canMoveKnightToPos(dx, dy, this, board);
    } else if (piece_class == PieceClassify::ROOK) {
        return canMoveRookToPos(dx, dy, this, board);
    } else if (piece_class == PieceClassify::PAWN) {
        return canMovePawnToPos(dx, dy, this, board);
    } else {
        return false;
    }
}
