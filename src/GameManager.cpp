#include "GameManager.hpp"

GameManager::GameManager() {
    board = new Board();
    turn = PieceColor::BLACK;
    opponent = PieceColor::WHITE;
    checkmate_flag = false;
}

GameManager::~GameManager() {
    delete board;
}

void GameManager::startChess() {
    int x1, y1, x2, y2;
    PieceColor temp;
    while (!checkmate_flag) {
        printGameboard(board);
        if (turn == PieceColor::BLACK) {
            std::cout << "Black's turn" << std::endl;
        } else if (turn == PieceColor::WHITE) {
            std::cout << "White's turn" << std::endl;
        } else {
            std::cout << "turn bug occur" << std::endl;
        }
        input_1 = getKeyboardInput();
        if (board->getPieceAtPos(input_1.first, input_1.second) == nullptr) {
            std::cout << "Wrong choice! Please choose again" << std::endl;
            continue;
        } else if (board->getPieceAtPos(input_1.first, input_1.second)->getPieceColor() != turn) {
            std::cout << "Wrong choice! Please choose again" << std::endl;
            continue;
        }
        printGameboard(board, board->getPieceAtPos(input_1.first, input_1.second));
        input_2 = getKeyboardInput();

        x1 = input_1.first;
        y1 = input_1.second;
        x2 = input_2.first;
        y2 = input_2.second;

        if (!board->movePiecePosToPos(x1, y1, x2, y2, false)) {
            std::cout << "You can't move there" << std::endl;
            continue;
        }
        if (board->getPieceAtPos(x2, y2)->canPromotePawn()) {
            // mouse input
        }
        if (board->isChecked(turn)) {
            checkmate_flag = board->isCheckMate(turn);
        }

        temp = turn;
        turn = opponent;
        opponent = temp;
    }
    printGameboard(board);
}