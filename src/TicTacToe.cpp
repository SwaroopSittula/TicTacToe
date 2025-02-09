#include <iostream>
#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
{
    char num = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = num++;

    currentPlayer = 1;
    currentMarker = 'X';
}

void TicTacToe::drawBoard()
{
    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";
        if (i < 2)
            cout << "---|---|---\n";
    }
    cout << "\n";
}

bool TicTacToe::placeMarker(int position)
{
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = currentMarker;
        return true;
    }

    return false;
}

bool TicTacToe::checkWinner()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

bool TicTacToe::isDraw()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void TicTacToe::switchPlayer()
{
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
    currentMarker = (currentMarker == 'X') ? 'O' : 'X';
}

void TicTacToe::playGame()
{
    int position;
    drawBoard();

    while (true)
    {
        cout << "Player " << currentPlayer << " (" << currentMarker << "), Enter your move (1-9): ";
        cin >> position;

        if (position < 1 || position > 9 || !placeMarker(position))
        {
            cout << "Invalid move! Please try again...\n";
            continue;
        }

        drawBoard();

        if (checkWinner())
        {
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (isDraw())
        {
            cout << "Draw match!\n";
            break;
        }

        switchPlayer();
    }
}