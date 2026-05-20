/*
Spavanac.c
Kattis Solution for Kattis problem Spavanac
https://open.kattis.com/problems/spavanac
Author: eldelbo89
*/

#include <stdio.h>

#define MINUTES 45
int main()
{
    int h, m;

    scanf("%d %d", &h, &m);

    if (m >= MINUTES)
    {
        m -= MINUTES;
    }
    else
    {
        if (!h)
        {
            h = 24;
        }
        h -= 1;
        m = 60 - (MINUTES - m);
    }

    printf("%d %d\n", h, m);

    return 0;
}