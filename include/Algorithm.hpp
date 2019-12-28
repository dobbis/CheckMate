#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "Enums.hpp"
#include "Board.hpp"

#include <stdlib.h>

bool availalbeMoveRook(MoveType direction, int dx, int dy, int x, int y, int count);
bool availableMoveBishop();
bool availableMoveQueen();

bool canMovePawnToPos(int dx, int dy, PieceColor color);
bool canMoveRookToPos(int dx, int dy, int x, int y, Board board);
bool canMoveKnightToPos(int dx, int dy);
bool canMoveBishopToPos(int dx, int dy, int x, int y, Board board);
bool canMoveQueenToPos(int dx, int dy, int x, int y, Board board);
bool canMoveKingToPos(int dx, int dy);

#endif