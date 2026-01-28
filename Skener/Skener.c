/*
Skener.c
Kattis Solution for Kattis problem Skener
https://open.kattis.com/problems/skener
Author: eldelbo89
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int R, C, Zr, Zc;
    scanf("%d %d %d %d", &R, &C, &Zr, &Zc);
    char *row = malloc((C + 1) * sizeof(char));
    char *newRow = NULL;

    for (int i = 0; i < R; i++)
    {
        scanf("%s", row);

        newRow = realloc(newRow, (C * Zc + 1) * sizeof(char));
        int index = 0;
        for (int j = 0; j < C; j++)
        {
            for (int k = 0; k < Zc; k++)
            {
                newRow[index++] = row[j];
            }
        }
        newRow[index] = '\0';
        for (int l = 0; l < Zr; l++)
        {
            printf("%s\n", newRow);
        }
    }
    free(row);
    free(newRow);

    return 0;
}
