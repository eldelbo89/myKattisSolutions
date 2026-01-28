/*
ATMMaintenance.c
Kattis Solution for Kattis problem ATMMaintenance
https://open.kattis.com/problems/atmmaintenance
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if (k - tmp >= 0)
        {
            k -= tmp;
            putchar('1');
        }
        else
        {
            putchar('0');
        }
    }

    return 0;
}