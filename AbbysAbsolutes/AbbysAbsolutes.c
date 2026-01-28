/*
AbbysAbsolutes.c
Kattis Solution for Kattis problem AbbysAbsolutes
https://open.kattis.com/problems/abbysabsolutes
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= K; i++)
    {
        int order, bought = 1, middle;
        scanf("%d", &order);
        middle = (N / 2) + (N % 2);
        if (order > middle)
        {
            bought = N;
        }
        printf("%d ", bought);
    }
    return 0;
}