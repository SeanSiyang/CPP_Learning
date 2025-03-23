/**
 * 声明一个表示国际象棋棋盘的数组；该数组的类型应为枚举，该枚举定义了可能出现在棋盘方格中的棋子
 */

#include <iostream>

enum Square {
    Empty = 0,
    King,
    Queen,
    Rook,
    Bishop,
    Knight,
    Pawn
};

int main()
{
    const int ARRAY_SIZE = 8;
    Square chessBoard[ARRAY_SIZE][ARRAY_SIZE];

    chessBoard[0][0] = chessBoard[0][7] = Rook;
    chessBoard[7][0] = chessBoard[7][7] = Rook;

    return 0;
}