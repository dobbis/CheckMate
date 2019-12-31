#include "IOmanager.hpp"

int main() {
    int x1, x2, y1, y2;
    char instruction;

    Board* board = new Board(false);
    printGameboard(board);

    std::cin >> instruction;
    while (instruction != 'q') {
        std::cin >> x1 >> y1 >> x2 >> y2;
        if (board->movePiecePosToPos(x1, y1, x2, y2)) {
            std::cout << "move " << getOneBlock(board->getPieceAtPos(x2, y2), x1, y1) << " (x1, y1) -> (x2, y2) is success" << std::endl;
        } else {
            std::cout << "moving is failed" << std::endl;
        }
        printGameboard(board);
        std::cin >> instruction;
    }
}
