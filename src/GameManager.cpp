#include "GameManager.hpp"

GameManager::GameManager() {
    board = new Board();
    turn = PieceColor::BLACK;
    opponent = PieceColor::WHITE;
    checkmate_flag = false;
    check_flag = PieceColor::EMPTY;
}

GameManager::~GameManager() {
    delete board;
}

bool GameManager::startChess() {
    int x1, y1, x2, y2;
    PieceColor temp;
    printGameboard(board);
    while (!checkmate_flag) {
        if (turn == PieceColor::BLACK) {
            std::cout << "Black's turn" << std::endl;
        } else if (turn == PieceColor::WHITE) {
            std::cout << "White's turn" << std::endl;
        } else {
            std::cout << "turn bug occur" << std::endl;
        }
        input_1 = getKeyboardInput();
        std::cout << "input_1 | x : " << input_1.first << ", y : " << input_1.second << std::endl;
        if (board->getPieceAtPos(input_1.first, input_1.second)->getPieceColor() != turn) {
            continue;
        }
        input_2 = getKeyboardInput();
        std::cout << "input_2 | x : " << input_2.first << ", y : " << input_2.second << std::endl;

        x1 = input_1.first;
        y1 = input_1.second;
        x2 = input_2.first;
        y2 = input_2.second;

        board->saveLogFile(x1, y1, x2, y2);
        if (!board->movePiecePosToPos(x1, y1, x2, y2)) {
            continue;
        }
        if (board->isChecked(opponent)) {
            board->loadLogFile();
            continue;
        }
        if (board->isChecked(turn)) {
            check_flag = turn;
        }

        printGameboard(board);
        temp = turn;
        turn = opponent;
        opponent = temp;
    }
}