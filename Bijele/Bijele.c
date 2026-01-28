/*
Bijele.c
Kattis Solution for Kattis problem Bijele
https://open.kattis.com/problems/bijele
Author: eldelbo89
*/

#include <stdio.h>
int main(void)
{
    int chess[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++)
    {
        int pieces;
        scanf("%d", &pieces);
        printf("%d ", chess[i] - pieces);
    }
    return 0;
}