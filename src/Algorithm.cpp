#include "Algorithm.hpp"

bool canMocePawnToPos(int dx, int dy, PieceColor color) {
    if (color == PieceColor::BLACK) {
        
    }
}

bool canMoveRookToPos(int dx, int dy, int x, int y) {
    if (dx == 0) {
        if (dy < 0) {
            return availalbeMoveRook(MoveType::DOWN, dx, dy, x, y, 0);
        } else if (dy > 0) {
            return availalbeMoveRook(MoveType::UP, dx, dy, x, y, 0);
        } else {
            return false;
        }
    } else if (dy == 0) {
        if (dx > 0) {
            return availalbeMoveRook(MoveType::RIGHT, dx, dy, x, y, 0);
        } else if (dx < 0) {
            return availalbeMoveRook(MoveType::LEFT, dx, dy, x, y, 0);
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