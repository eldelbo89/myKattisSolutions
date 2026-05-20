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

    printf("%s\n", (a % 10 == 0) ? "Jebb" : "Neibb");

    return 0;
}
