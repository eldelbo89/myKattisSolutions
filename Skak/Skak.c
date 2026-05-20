/*
Skak.c
Kattis Solution for Kattis problem Skak
https://open.kattis.com/problems/skak
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int xh, yh, xp, yp;

    scanf("%d %d %d %d", &xh, &yh, &xp, &yp);

    printf("%d\n", (xh == xp || yh == yp) ? 1 : 2);

    return 0;
}
