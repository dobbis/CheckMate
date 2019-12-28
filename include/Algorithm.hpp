#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "Enums.hpp"

#include <stdlib.h>

bool canMovePawnToPos(int dx, int dy, PieceColor color);
bool canMoveRookToPos(int dx, int dy);
bool canMoveKnightToPos(int dx, int dy);
bool canMoveBishopToPos(int dx, int dy);
bool canMoveQueenToPos(int dx, int dy);
bool canMoveKingToPos(int dx, int dy);

#endif