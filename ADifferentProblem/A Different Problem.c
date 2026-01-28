/*
A Different Problem.c
Kattis Solution for Kattis problem A Different Problem
https://open.kattis.com/problems/different
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    long long a, b;
    while (scanf("%lld%lld", &a, &b) == 2)
    {
        int c = 1;
        if (b > a)
        {
            c = -1;
        }
        long long result = (c * a) - (c * b);
        printf("%lld\n", result);
    }
}