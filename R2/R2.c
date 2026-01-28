/*
R2.c
Kattis Solution for Kattis problem R2
https://open.kattis.com/problems/r2
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{

    int R1, S;

    scanf("%d %d", &R1, &S);
    printf("%d\n", 2 * S - R1);

    return 0;
}
