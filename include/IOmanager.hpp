#ifndef IOMANAGER_HPP
#define IOMANAGER_HPP

#include "Board.hpp"
#include "Piece.hpp"

#include <iostream>
#include <string>

std::string getOneBlock(Piece* piece, int x, int y);
void printGameboard(Board* board);
void printGameboard(Board* board, Piece* piece);
std::pair<int, int> getKeyboardInput();

#endif