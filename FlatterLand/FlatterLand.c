/*
FlatterLand.c
Kattis Solution for Kattis problem FlatterLand
https://open.kattis.com/problems/flatterland
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int N, C;

    scanf("%d %d", &N, &C);
    printf("%d\n", C * (N - 1));

    return 0;
}
