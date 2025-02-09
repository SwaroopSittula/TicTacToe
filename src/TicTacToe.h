#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
private:
    char board[3][3];
    char currentMarker;
    int currentPlayer;

public:
    TicTacToe();
    void drawBoard();
    bool placeMarker(int position);
    bool checkWinner();
    bool isDraw();
    void switchPlayer();
    void playGame();
};

#endif