#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream> 
#include "Piece.h"

constexpr int BOARDSIZE = 8;

class Board {
public:
    Board();  
    void setUpBoard();  
    void printBoard() const;  


private:
    // 2D vector representing the board
    std::vector<std::vector<char>> board;

};

#endif // BOARD_H