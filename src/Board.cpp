#include "Board.hpp"
#include "Piece.hpp"
#include "Algorithm.hpp"

Board::Board() {
    pieces = new Piece*[32];

    pieces[0] = new Piece("PAWN", "BLACK", 0, 1);
    pieces[1] = new Piece("PAWN", "BLACK", 1, 1); 
    pieces[2] = new Piece("PAWN", "BLACK", 2, 1); 
    pieces[3] = new Piece("PAWN", "BLACK", 3, 1);
    pieces[4] = new Piece("PAWN", "BLACK", 4, 1); 
    pieces[5] = new Piece("PAWN", "BLACK", 5, 1);
    pieces[6] = new Piece("PAWN", "BLACK", 6, 1); 
    pieces[7] = new Piece("PAWN", "BLACK", 7, 1);
    pieces[8] = new Piece("ROOK", "BLACK", 0, 0); 
    pieces[9] = new Piece("KNIGHT", "BLACK", 1, 0);
    pieces[10] = new Piece("BISHOP", "BLACK", 2, 0);
    pieces[11] = new Piece("QUEEN", "BLACK", 3, 0);
    pieces[12]= new Piece("KING", "BLACK", 4, 0);
    pieces[13] = new Piece("BISHOP", "BLACK", 5, 0);
    pieces[14] = new Piece("KNIGHT", "BLACK", 6, 0);
    pieces[15] = new Piece("ROOK", "BLACK", 7, 0);
    pieces[16] = new Piece("PAWN", "WHITE", 0, 6);
    pieces[17] = new Piece("PAWN", "WHITE", 1, 6); 
    pieces[18] = new Piece("PAWN", "WHITE", 2, 6); 
    pieces[19] = new Piece("PAWN", "WHITE", 3, 6);
    pieces[20] = new Piece("PAWN", "WHITE", 4, 6); 
    pieces[21] = new Piece("PAWN", "WHITE", 5, 6);
    pieces[22] = new Piece("PAWN", "WHITE", 6, 6); 
    pieces[23] = new Piece("PAWN", "WHITE", 7, 6);
    pieces[24] = new Piece("ROOK", "WHITE", 0, 7); 
    pieces[25] = new Piece("KNIGHT", "WHITE", 1, 7);
    pieces[26] = new Piece("BISHOP", "WHITE", 2, 7);
    pieces[27] = new Piece("QUEEN", "WHITE", 3, 7);
    pieces[28]= new Piece("KING", "WHITE", 4, 7);
    pieces[29] = new Piece("BISHOP", "WHITE", 5, 7);
    pieces[30] = new Piece("KNIGHT", "WHITE", 6, 7);
    pieces[31] = new Piece("ROOK", "WHITE", 7, 7);

    gameboard = new Piece**[8];
    for (int i = 0; i < 8; i++) {
        gameboard[i] = new Piece*[8];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            gameboard[i][j] = nullptr;
        }
    }
    for (int i = 0; i < 8; i++) {
        gameboard[0][i] = pieces[i + 8];
        gameboard[1][i] = pieces[i];
        gameboard[6][i] = pieces[i + 16];
        gameboard[7][i] = pieces[i + 24];
    }

    log = new LogFile();
}

Board::~Board() {
    for (int i = 0; i < 32; i++) {
        delete pieces[i];
    }
    delete[] pieces;

    for (int i = 0; i < 8; i++) {
        delete[] gameboard[i];
    }
    delete[] gameboard;
    delete log;
}

Piece* Board::getPieceAtPos(int x, int y) {
    return gameboard[y][x];    
}

void Board::saveLogFile(int x1, int y1, int x2, int y2) {
    log->piece_1 = gameboard[y1][x1];
    log->piece_2 = gameboard[y2][x2];

    log->x1 = x1;
    log->y1 = y1;
    log->x2 = x2;
    log->y2 = y2;
    
    if (log->piece_1 != nullptr) {
        log->first_move_flag = log->piece_1->getFirstMove();
    }
    if (log->piece_2 != nullptr) {
        log->dead_flag = log->piece_2->getDeadFlag();
    }
}

void Board::loadLogFile() {
    gameboard[log->y1][log->x1] = log->piece_1;
    gameboard[log->y2][log->x2] = log->piece_2;

    if (log->piece_1 != nullptr) {
        log->piece_1->setFirstMove(log->first_move_flag);
        log->piece_1->setXYPos(log->x1, log->y1);
    }
    if (log->piece_2 != nullptr) {
        log->piece_2->setDeadFlag(log->dead_flag);
        log->piece_2->setXYPos(log->x2, log->y2);
    }

}

bool Board::movePiecePosToPos(int x1, int y1, int x2, int y2, bool possibility) {
    Piece* selected_piece = gameboard[y1][x1];

    if (selected_piece == nullptr) {
        return false;
    } else {
        if (selected_piece->canMovePieceToPos(x2, y2, this)) {
            saveLogFile(x1, y1, x2, y2);
            if (selected_piece->getFirstMove()) {
                selected_piece->setFirstMove(false);
            }
            if (gameboard[y2][x2] != nullptr) {
                gameboard[y2][x2]->setDeadFlag(true);
            }
            gameboard[y2][x2] = selected_piece;
            gameboard[y1][x1] = nullptr;
            
            selected_piece->setXYPos(x2, y2);
            if (isChecked(selected_piece->getOpponentPieceColor())) {
                loadLogFile();
                return false;
            } else {
                if (possibility) {
                    loadLogFile();
                }
                return true;
            }
        } else {
            return false;
        }
    }
}

bool Board::isChecked(PieceColor color) {
    int king_x, king_y;
    if (color == PieceColor::BLACK) {
        king_x = pieces[28]->getXYPos().first;
        king_y = pieces[28]->getXYPos().second;
        for (int i = 0; i < 16; i++) {
            if (pieces[i]->getDeadFlag()) {
                continue;
            }
            if (pieces[i]->canMovePieceToPos(king_x, king_y, this)) {
                return true;
            }
        }
    } else if (color == PieceColor::WHITE) {
        king_x = pieces[12]->getXYPos().first;
        king_y = pieces[12]->getXYPos().second;
        for (int i = 16; i < 32; i++) {
            if (pieces[i]->getDeadFlag()) {
                continue;
            }
            if (pieces[i]->canMovePieceToPos(king_x, king_y, this)) {
                return true;
            }
        }
    }
    return false;
}

std::vector<std::pair<int, int>> Board::getAvailableMove(Piece* piece) {
    std::vector<std::pair<int, int>> avail_move;
    int x1, y1;
    x1 = piece->getXYPos().first;
    y1 = piece->getXYPos().second;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (movePiecePosToPos(x1, y1, j, i, true)) {
                avail_move.push_back(std::make_pair(i, j));
            }
        }
    }
    return avail_move;
}