/*
Shandy.c
Kattis Solution for Kattis problem Shandy
https://open.kattis.com/problems/shandy
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int B, L;

    scanf("%d %d", &B, &L);
    int result = L;
    if (B < L)
        result = B;
    printf("%d\n", 2*result);

    return 0;
}