#include "Algorithm.hpp"
#include "Board.hpp"
#include "Piece.hpp"

bool availableMoveRook(int dx, int dy, Piece* rook, int count, Board* board) {
    int x, y;
    x = rook->getXYPos().first;
    y = rook->getXYPos().second;

    if (abs(dx + dy) == count) {
        if (board->getPieceAtPos(x + dx, y + dy) == nullptr) {
            return true;
        } else {
            return rook->getPieceColor() != board->getPieceAtPos(x + dx, y + dy)->getPieceColor();
        }
    }

    int coef_x = dx, coef_y = dy;
    if (coef_x != 0) {
        coef_x /= abs(coef_x);
    }
    if (coef_y != 0) {
        coef_y /= abs(coef_y);
    }

    if (board->getPieceAtPos(x + coef_x * count, y + coef_y * count) == nullptr) {
        return availableMoveRook(dx, dy, rook, count + 1, board);
    } else {
        return false;
    }
}

bool availableMoveBishop(int dx, int dy, Piece* bishop, int count, Board* board) {
    int x, y;
    x = bishop->getXYPos().first;
    y = bishop->getXYPos().second;

    if (abs(dx) == count) {
        if (board->getPieceAtPos(x + dx, y + dy) == nullptr) {
            return true;
        } else {
            return bishop->getPieceColor() != board->getPieceAtPos(x + dx, y + dy)->getPieceColor();
        }
    }

    int coef_x = (dx / abs(dx)), coef_y = (dy / abs(dy));
    if (board->getPieceAtPos(x + coef_x * count, y + coef_y * count) == nullptr) {
        return availableMoveBishop(dx, dy, bishop, count + 1, board);
    } else {
        return false;
    } 
}

bool availableMovePawn(int dx, int dy, Piece* pawn, Board* board) {
    int x, y;
    x = pawn->getXYPos().first;
    y = pawn->getXYPos().second;
    Piece* piece = board->getPieceAtPos(x + dx, y + dy);
    
    if (dx == 0) {
        if (abs(dy) == 1) {
            if (piece == nullptr) {
                return true;
            } else {
                return false;
            }
        } else if (abs(dy) == 2) {
            if (board->getPieceAtPos(x, y + (dy / 2)) == nullptr && piece == nullptr) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else if (dy < 0) {
        if (piece->getPieceColor() == PieceColor::BLACK) {
            return true;
        } else {
            return false;
        }
    } else if (dy > 0) {
        if (piece->getPieceColor() == PieceColor::WHITE) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool availableMovePiece(int dx, int dy, Piece* piece, Board* board) {
    int x, y;
    x = piece->getXYPos().first;
    y = piece->getXYPos().second; 

    if (board->getPieceAtPos(x + dx, y + dy) == nullptr) {
            return true;
        } else {
            return piece->getPieceColor() != board->getPieceAtPos(x + dx, y + dy)->getPieceColor();
    }
}

bool canMovePawnToPos(int dx, int dy, Piece* pawn, Board* board) {
    if (pawn->getPieceColor() == PieceColor::BLACK) {
        if (dx == 0 && dy == 2) {
            if (pawn->getFirstMove()) {
                return availableMovePawn(dx, dy, pawn, board);
            } else {
                return false;
            }
        } else if (dx == 0 && dy == 1) {
            return availableMovePawn(dx, dy, pawn, board);
        } else if (abs(dx) == 1 && dy == 1) {
            return availableMovePawn(dx, dy, pawn, board);
        } else {
            return false;
        }
    } else if (pawn->getPieceColor() == PieceColor::WHITE) {
        if (dx == 0 && dy == -2) {
            if (pawn->getFirstMove()) {
                return availableMovePawn(dx, dy, pawn, board);
            } else {
                return false;
            }
        } else if (dx == 0 && dy == -1) {
            return availableMovePawn(dx, dy, pawn, board);
        } else if (abs(dx) == 1 && dy == -1) {
            return availableMovePawn(dx, dy, pawn, board);
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool canMoveRookToPos(int dx, int dy, Piece* rook, Board* board) {
    if (dx == 0 && dy == 0) {
        return false;
    } else if (dx * dy == 0) {
        return availableMoveRook(dx, dy, rook, 1, board);
    } else {
        return false;
    }
}

bool canMoveKnightToPos(int dx, int dy, Piece* knight, Board* board) {
    if (abs(dx) == 1 && abs(dy) == 2) {
        return availableMovePiece(dx, dy, knight, board);
    } else if (abs(dy) == 1 && abs(dx) == 2) {
        return availableMovePiece(dx, dy, knight, board);
    } else {
        return false;
    }
}

bool canMoveBishopToPos(int dx, int dy, Piece* bishop, Board* board) {
    if (abs(dx) == abs(dy)) {
        if (dx == 0 && dy == 0) {
            return false;
        } else {
            return availableMoveBishop(dx, dy, bishop, 1, board);
        }
    } else {
        return false;
    }
}

bool canMoveQueenToPos(int dx, int dy, Piece* queen, Board* board) {
    if (dx == 0 && dy == 0) {
        return false;
    } else if (abs(dx) == abs(dy)) {
        return availableMoveBishop(dx, dy, queen, 1, board);
    } else if (dx * dy == 0) {
        return availableMoveRook(dx, dy, queen, 1, board);
    } else {
        return false;
    }
}

bool canMoveKingToPos(int dx, int dy, Piece* king, Board* board) {
    if (dx == 0) {
        if (abs(dy) == 1) {
            return availableMovePiece(dx, dy, king, board);
        } else {
            return false;
        }
    } else if (abs(dx) == 1) {
        if (dy == 0 || abs(dy) == 1) {
            return availableMovePiece(dx, dy, king, board);
        } else {
            return false;
        }
    } else {
        return false;
    }
}