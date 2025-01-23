#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include "Piece.h"

class ChessPiece {

public:

    enum class pieceType {
        EMPTY,
        PAWN,
        ROOK,
        KNIGHT,
        BISHOP,
        QUEEN,
        KING
    };

    enum class pieceColor {
        NONE, 
        WHITE,
        BLACK
    };

    ChessPiece(pieceType type = pieceType::EMPTY, pieceColor color = pieceColor::NONE)
        : type(type), color(color) {}

    pieceType getType() const { return type; }
    pieceColor getColor() const { return color; }
    char getSymbol() const;

private:
    pieceType type;
    pieceColor color;
};

char ChessPiece::getSymbol() const {
    if (color == pieceColor::WHITE) {
        switch (type) {
            case pieceType::PAWN: return 'P';
            case pieceType::ROOK: return 'R';
            case pieceType::KNIGHT: return 'N';
            case pieceType::BISHOP: return 'B';
            case pieceType::QUEEN: return 'Q';
            case pieceType::KING: return 'K';
            default: return '.';
        }
    } else if (color == pieceColor::BLACK) {
        switch (type) {
            case pieceType::PAWN: return 'p';
            case pieceType::ROOK: return 'r';
            case pieceType::KNIGHT: return 'n';
            case pieceType::BISHOP: return 'b';
            case pieceType::QUEEN: return 'q';
            case pieceType::KING: return 'k';
            default: return '.';
        }
    }
    return '.';
}

#endif // CHESS_PIECE_H