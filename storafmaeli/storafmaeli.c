/*
storafmaeli.c
Kattis Solution for Kattis problem storafmaeli
https://open.kattis.com/problems/storafmaeli
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a % 10)
    {
        printf("Neibb\n");
    }
    else
    {
        printf("Jebb\n");
    }

    return 0;
}
