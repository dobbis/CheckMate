#ifndef ENUMS_HPP
#define ENUMS_HPP

enum class PieceClassify {
    KING,
    QUEEN,
    BISHOP,
    KNIGHT,
    ROOK,
    PAWN,
    EMPTY
};

enum class PieceColor {
    BLACK,
    WHITE,
    EMPTY
};

enum class MoveType {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    LEFTUP,
    LEFTDOWN,
    RIGHTUP,
    RIGHTDOWN
};

#endif