/*
Countdown.c
Kattis Solution for Kattis problem Countdown
https://open.kattis.com/problems/countdown2
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (; n > 0; n--)
        printf("%d\n", n);

    return 0;
}
