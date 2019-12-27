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

std::pair<int, int> Piece::getXYPos() {
    return std::make_pair(x_pos, y_pos);
}

void Piece::setXYPos(int x, int y) {
    x_pos = x;
    y_pos = y;
}

bool Piece::canMovePieceToPos(int x, int y) {
    int dx, dy;
    dx = x - x_pos;
    dy = y - y_pos;

    if (piece_class == PieceClassify::KING) {

    } else if (piece_class == PieceClassify::QUEEN) {

    } else if (piece_class == PieceClassify::BISHOP) {

    } else if (piece_class == PieceClassify::KNIGHT) {

    } else if (piece_class == PieceClassify::ROOK) {

    } else if (piece_class == PieceClassify::PAWN) {

    } else {
        return false;
    }
}

bool canMocePawnToPos(int dx, int dy, PieceColor color) {
    if (color == PieceColor::BLACK) {
        
    }
}

bool canMoveRookToPos(int dx, int dy) {
    if (dx == 0) {
        if (dy == 0) {
            return false;
        } else {
            return true;
        }
    } else if (dy == 0) {
        return true;
    } else {
        return false;
    }
}

bool canMoveKnightToPos(int dx, int dy) {
    if (abs(dx) == 1) {
        if (abs(dy) == 2) {
            return true;
        } else {
            return false;
        }
    } else if (abs(dy) == 1) {
        if (abs(dx) == 2) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool canMoveBishopToPos(int dx, int dy) {
    if (abs(dx) == abs(dy)) {
        if (dx == 0 && dy == 0) {
            return false;
        } else {
            return true;
        }
    } else {
        return false;
    }
}

bool canMoveQueenToPos(int dx, int dy) {
    if (dx == 0 && dy == 0) {
        return false;
    } else if (abs(dx) == abs(dy)) {
        return true;
    } else if (dx == 0 || dy == 0) {
        return true;
    } else {
        return false;
    }
}

bool canMoveKingToPos(int dx, int dy) {
    if (abs(dx) + abs(dy) == 1) {
        return true;
    } else {
        return false;
    }
}