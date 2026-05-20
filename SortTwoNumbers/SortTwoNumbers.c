/*
SortTwoNumbers.c
Kattis Solution for Kattis problem Sort Two Numbers
https://open.kattis.com/problems/sorttwonumbers
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("%d %d", x, y);

    return 0;
}