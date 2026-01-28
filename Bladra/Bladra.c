/*
Bladra.c
Kattis Solution for Kattis problem Bladra
https://open.kattis.com/problems/bladra2
Author: eldelbo89
*/

#include <stdio.h>
void main()
{
    int v, a, t;
    scanf("%d %d %d", &v, &a, &t);
    float result = v * t + a * t * t * 1 / 2.0;
    printf("%.5f\n", result);
}
