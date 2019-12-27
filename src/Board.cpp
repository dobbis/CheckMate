#include "Board.hpp"

Board::Board() {
    pieces = new Piece*[32];

    pieces[0] = new Piece("PAWN", "BLACK");
    pieces[1] = new Piece("PAWN", "BLACK"); 
    pieces[2] = new Piece("PAWN", "BLACK"); 
    pieces[3] = new Piece("PAWN", "BLACK");
    pieces[4] = new Piece("PAWN", "BLACK"); 
    pieces[5] = new Piece("PAWN", "BLACK");
    pieces[6] = new Piece("PAWN", "BLACK"); 
    pieces[7] = new Piece("PAWN", "BLACK");
    pieces[8] = new Piece("ROOK", "BLACK"); 
    pieces[9] = new Piece("KNIGHT", "BLACK");
    pieces[10] = new Piece("BISHOP", "BLACK");
    pieces[11] = new Piece("QUEEN", "BLACK");
    pieces[12]= new Piece("KING", "BLACK");
    pieces[13] = new Piece("BISHOP", "BLACK");
    pieces[14] = new Piece("KNIGHT", "BLACK");
    pieces[15] = new Piece("ROOK", "BLACK");
    pieces[16] = new Piece("PAWN", "WHITE");
    pieces[17] = new Piece("PAWN", "WHITE"); 
    pieces[18] = new Piece("PAWN", "WHITE"); 
    pieces[19] = new Piece("PAWN", "WHITE");
    pieces[20] = new Piece("PAWN", "WHITE"); 
    pieces[21] = new Piece("PAWN", "WHITE");
    pieces[22] = new Piece("PAWN", "WHITE"); 
    pieces[23] = new Piece("PAWN", "WHITE");
    pieces[24] = new Piece("ROOK", "WHITE"); 
    pieces[25] = new Piece("KNIGHT", "WHITE");
    pieces[26] = new Piece("BISHOP", "WHITE");
    pieces[27] = new Piece("QUEEN", "WHITE");
    pieces[28]= new Piece("KING", "WHITE");
    pieces[29] = new Piece("BISHOP", "WHITE");
    pieces[30] = new Piece("KNIGHT", "WHITE");
    pieces[31] = new Piece("ROOK", "WHITE");
    
    gameboard = new Piece**[8];
    for (int i = 0; i < 8; i++) {
        gameboard[i] = new Piece*[8];
    }

    for (int i = 0; i < 8; i++) {
        gameboard[0][i] = pieces[i + 8];
        gameboard[1][i] = pieces[i];
        gameboard[6][i] = pieces[i + 16];
        gameboard[7][i] = pieces[i + 24];
    }
}

Board::~Board() {
    for (int i = 0; i < 32; i++) {
        delete pieces[i];
    }
    delete pieces;

    for (int i = 0; i < 8; i++) {
        delete gameboard[i];
    }
    delete gameboard;
}