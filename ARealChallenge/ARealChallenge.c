/*
ARealChallenge.c
Kattis Solution for Kattis problem ARealChallenge
https://open.kattis.com/problems/areal
Author: eldelbo89
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    long a;
    scanf("%ld", &a);
    long double fence = 4 * sqrt(a);
    printf("%Lf\n", fence);
    return 0;
}