/*
Cetvrta.c
Kattis Solution for Kattis problem Cetvrta
https://open.kattis.com/problems/cetvrta
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int X1, Y1, X2, Y2, X3, Y3;
    scanf("%d %d %d %d %d %d", &X1, &Y1, &X2, &Y2, &X3, &Y3);

    int X4 = X1 ^ X2 ^ X3;
    int Y4 = Y1 ^ Y2 ^ Y3;

    printf("%d %d\n", X4, Y4);

    return 0;
}