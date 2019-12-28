#ifnedf IOMANAGER_HPP
#define IOMANAGER_HPP

#include "Board.hpp"

#include <iostream>

void printOneBlock(Board board, int x, int y);
void printFirstGameboard(Board board);
void printGameboardAfterMove(Board board, int x1, int y1, int x2, int y2);

#endif