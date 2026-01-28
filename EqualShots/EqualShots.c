/*
EqualShots.c
Kattis Solution for Kattis problem EqualShots
https://open.kattis.com/problems/equalshots
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int a, b, index;

    scanf("%d %d", &a, &b);
    int total = 0, sign = 1;
    for (int i = 0; i < a + b; i++)
    {
        int v, c;
        scanf("%d %d", &v, &c);
        if (i >= a)
            sign = -1;
        total = total + sign * v * c;
    }

    if (!total)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}
