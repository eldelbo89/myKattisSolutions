/*
SafeSquares.c
Kattis Solution for Kattis problem SafeSquares
https://open.kattis.com/problems/safesquares
Author: eldelbo89
*/

#include <stdio.h>

#define CHESSBOARD_SIZE 8

int main()
{
    int rows[CHESSBOARD_SIZE] = {0}, cols[CHESSBOARD_SIZE] = {0};
    int rowsLeft = CHESSBOARD_SIZE, colsLeft = CHESSBOARD_SIZE;

    for (int r = 0; r < CHESSBOARD_SIZE; r++)
    {
        for (int c = 0; c < CHESSBOARD_SIZE; c++)
        {

            char ch = getchar();
            if (ch == 'R')
            {
                rows[r] = cols[c] = 1;
            }
        }
        getchar(); // \n
    }
    for (int i = 0; i < CHESSBOARD_SIZE; i++)
    {
        rowsLeft -= rows[i];
        colsLeft -= cols[i];
    }

    printf("%d\n", rowsLeft * colsLeft);
    return 0;
}
