/*
SkipCounting.c
Kattis Solution for Kattis problem Skip Counting
https://open.kattis.com/problems/counting
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d\n", (n * i));
    }

    return 0;
}