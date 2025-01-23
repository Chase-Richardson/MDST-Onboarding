#include "Board.h"

Board::Board() : board(BOARDSIZE, std::vector<char>(BOARDSIZE, '.')) {}

void Board::setUpBoard() {
    for (int i = 0; i < BOARDSIZE; i++) {
        // opponent pawn
        board[1][i] = 'p';
        // player pawn
        board[6][i] = 'P'; 
    }
    // placing other pieces
    // player pieces
    board[7][0] = 'R';
    board[7][7] = 'R';
    board[7][1] = 'K';


    board[0][7] = 'r';
    board[0][0] = 'r';
}

void Board::printBoard() const {
    for (const auto& row : board) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}