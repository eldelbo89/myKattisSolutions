/*
whichisgreater.c
Kattis Solution for Kattis problem whichisgreater
https://open.kattis.com/problems/whichisgreater
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", A > B ? 1 : 0);

    return 0;
}
