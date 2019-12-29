#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "Enums.hpp"

#include <stdlib.h>

class Board;

bool availalbeMoveRook(MoveType direction, int dx, int dy, int x, int y, int count, Board* board);
bool availableMoveBishop(MoveType direction, int dx, int dy, int x, int y, int count, Board* board);
bool availableMovePawn(MoveType direction, int x, int y, Board* board);

bool canMovePawnToPos(int dx, int dy, int x, int y, PieceColor color, bool first_move, Board* board);
bool canMoveRookToPos(int dx, int dy, int x, int y, Board* board);
bool canMoveKnightToPos(int dx, int dy);
bool canMoveBishopToPos(int dx, int dy, int x, int y, Board* board);
bool canMoveQueenToPos(int dx, int dy, int x, int y, Board* board);
bool canMoveKingToPos(int dx, int dy);

#endif