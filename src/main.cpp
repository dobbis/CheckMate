#include "IOmanager.hpp"

int main() {
    Board* board = new Board();

    board->movePiecePosToPos(1, 0, 2, 2);
    printGameboard(board);

}
