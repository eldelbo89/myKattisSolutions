/*
DFyrirDreki.c
Kattis Solution for Kattis problem DFyrirDreki
https://open.kattis.com/problems/dfyrirdreki
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int a, b, c, result = 0;

    scanf("%d %d %d", &a, &b, &c);

    int delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        result = 2;
    }
    else if (!delta)
    {
        result = 1;
    }

    printf("%d\n", result);

    return 0;
}
