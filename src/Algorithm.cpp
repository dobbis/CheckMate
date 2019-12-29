#include "Algorithm.hpp"
#include "Board.hpp"

bool availableMoveRook(MoveType direction, int dx, int dy, int x, int y, int count, Board* board) {
    if (direction == MoveType::DOWN) {
        if (count == dy) {
            return true;
        } else if (board->getPieceAtPos(x, y + (count++)) == nullptr) {
            return availableMoveRook(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else if (direction == MoveType::UP) {
        if (count == -dy) {
            return true;
        } else if (board->getPieceAtPos(x, y - (count++)) == nullptr) {
            return availableMoveRook(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else if (direction == MoveType::LEFT) {
        if (count == -dx) {
            return true;
        } else if (board->getPieceAtPos(x - (count++), y) == nullptr) {
            return availableMoveRook(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else if (direction == MoveType::RIGHT) {
        if (count == dx) {
            return true;
        } else if (board->getPieceAtPos(x + (count++), y) == nullptr) {
            return availableMoveRook(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool availableMoveBishop(MoveType direction, int dx, int dy, int x, int y, int count, Board* board) {
    if (direction == MoveType::RIGHTDOWN) {
        if (count == dx) {
            return true;
        } else if (board->getPieceAtPos(x + (count++), y + (count++)) == nullptr) {
            return availableMoveBishop(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else if (direction == MoveType::RIGHTUP) {
        if (count == dx) {
            return true;
        } else if (board->getPieceAtPos(x + (count++), y - (count++)) == nullptr) {
            return availableMoveBishop(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else if (direction == MoveType::LEFTDOWN) {
        if (count == -dx) {
            return true;
        } else if (board->getPieceAtPos(x - (count++), y + (count++)) == nullptr) {
            return availableMoveBishop(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else if (direction == MoveType::LEFTUP) {
        if (count == -dx) {
            return true;
        } else if (board->getPieceAtPos(x - (count++), y - (count++)) == nullptr) {
            return availableMoveBishop(direction, dx, dy, x, y, count, board);
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool availableMovePawn(MoveType direction, int x, int y, Board* board) {
    if (direction == MoveType::RIGHTDOWN) {
        if (board->getPieceAtPos(x + 1, y + 1) == nullptr) {
            return false;
        } else {
            return true;
        }
    } else if (direction == MoveType::RIGHTUP) {
        if (board->getPieceAtPos(x + 1, y - 1) == nullptr) {
            return false;
        } else {
            return true;
        }
    } else if (direction == MoveType::LEFTDOWN) {
        if (board->getPieceAtPos(x - 1, y + 1) == nullptr) {
            return false;
        } else {
            return true;
        }
    } else if (direction == MoveType::LEFTUP) {
        if (board->getPieceAtPos(x - 1, y - 1) == nullptr) {
            return false;
        } else {
            return true;
        }
    } else {
        return false;
    }
}

bool canMovePawnToPos(int dx, int dy, int x, int y, PieceColor color, bool first_move, Board* board) {
    if (color == PieceColor::BLACK) {
        if (dx == 0 && dy == 2) {
            return first_move;
        } else if (dx == 0 && dy == 1) {
            return true;
        } else if (abs(dx) == 1 && dy == 1) {
            if (dx > 0) {
                return availableMovePawn(MoveType::RIGHTDOWN, x, y, board);
            } else if (dx < 0) {
                return availableMovePawn(MoveType::LEFTDOWN, x, y, board);
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else if (color == PieceColor::WHITE) {
        if (dx == 0 && dy == -2) {
            return first_move;
        } else if (dx == 0 && dy == -1) {
            return true;
        } else if (abs(dx) == 1 && dy == -1) {
            if (dx > 0) {
                return availableMovePawn(MoveType::RIGHTUP, x, y, board);
            } else if (dx < 0) {
                return availableMovePawn(MoveType::LEFTUP, x, y, board);
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool canMoveRookToPos(int dx, int dy, int x, int y, Board* board) {
    if (dx == 0) {
        if (dy < 0) {
            return availableMoveRook(MoveType::DOWN, dx, dy, x, y, 1, board);
        } else if (dy > 0) {
            return availableMoveRook(MoveType::UP, dx, dy, x, y, 1, board);
        } else {
            return false;
        }
    } else if (dy == 0) {
        if (dx > 0) {
            return availableMoveRook(MoveType::RIGHT, dx, dy, x, y, 1, board);
        } else if (dx < 0) {
            return availableMoveRook(MoveType::LEFT, dx, dy, x, y, 1, board);
        } else {
            return false;
        }
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

bool canMoveBishopToPos(int dx, int dy, int x, int y, Board* board) {
    if (abs(dx) == abs(dy)) {
        if (dx == 0 && dy == 0) {
            return false;
        } else if (dx > 0 && dy > 0) {
            return availableMoveBishop(MoveType::RIGHTDOWN, dx, dy, x, y, 1, board);
        } else if (dx > 0 && dy < 0) {
            return availableMoveBishop(MoveType::RIGHTUP, dx, dy, x, y, 1, board);
        } else if (dx < 0 && dy > 0) {
            return availableMoveBishop(MoveType::LEFTDOWN, dx, dy, x, y, 1, board);
        } else if (dx < 0 && dy < 0) {
            return availableMoveBishop(MoveType::LEFTUP, dx, dy, x, y, 1, board);
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool canMoveQueenToPos(int dx, int dy, int x, int y, Board* board) {
    if (dx == 0 && dy == 0) {
        return false;
    } else if (abs(dx) == abs(dy)) {
        if (dx > 0 && dy > 0) {
            return availableMoveBishop(MoveType::RIGHTDOWN, dx, dy, x, y, 1, board);
        } else if (dx > 0 && dy < 0) {
            return availableMoveBishop(MoveType::RIGHTUP, dx, dy, x, y, 1, board);
        } else if (dx < 0 && dy > 0) {
            return availableMoveBishop(MoveType::LEFTDOWN, dx, dy, x, y, 1, board);
        } else if (dx < 0 && dy < 0) {
            return availableMoveBishop(MoveType::LEFTUP, dx, dy, x, y, 1, board);
        } else {
            return false;
        }
    } else if (dx == 0 || dy == 0) {
        if (dx == 0) {
            if (dy < 0) {
                return availableMoveRook(MoveType::DOWN, dx, dy, x, y, 1, board);
            } else if (dy > 0) {
                return availableMoveRook(MoveType::UP, dx, dy, x, y, 1, board);
            } else {
                return false;
            }
        } else if (dy == 0) {
            if (dx > 0) {
                return availableMoveRook(MoveType::RIGHT, dx, dy, x, y, 1, board);
            } else if (dx < 0) {
                return availableMoveRook(MoveType::LEFT, dx, dy, x, y, 1, board);
            } else {
                return false;
            }
        } else {
            return false;
        }
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