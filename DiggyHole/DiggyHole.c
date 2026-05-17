/*
DiggyHole.c
Kattis Solution for Kattis problem Diggy Hole
https://open.kattis.com/problems/grafaholur
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n, h, x, m, y;
    scanf("%d %d %d %d %d", &n, &h, &x, &m, &y);
    float dig_rate_per_worker = x / (float)(n * h);
    printf("%f\n", y / (m * dig_rate_per_worker));

    return 0;
}
