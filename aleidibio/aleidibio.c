/*
aleidibio.c
Kattis Solution for Kattis problem aleidibio
https://open.kattis.com/problems/aleidibio
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", c - (a + b));
    return 0;
}
