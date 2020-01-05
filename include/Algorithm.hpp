#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include "Enums.hpp"

#include <stdlib.h>

class Board;
class Piece;

bool availalbeMoveRook(int dx, int dy, Piece* rook, int count, Board* board);
bool availableMoveBishop(int dx, int dy, Piece* bishop, int count, Board* board);
bool availableMovePawn(int dx, int dy, Piece* pawn, Board* board);
bool availableMovePiece(int dx, int dy, Piece* piece, Board* board);

bool canMovePawnToPos(int dx, int dy, Piece* pawn, Board* board);
bool canMoveRookToPos(int dx, int dy, Piece* rook, Board* board);
bool canMoveKnightToPos(int dx, int dy, Piece* knight, Board* board);
bool canMoveBishopToPos(int dx, int dy, Piece* bishop, Board* board);
bool canMoveQueenToPos(int dx, int dy, Piece* queen, Board* board);
bool canMoveKingToPos(int dx, int dy, Piece* king, Board* board);

#endif