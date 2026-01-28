/*
Faktor.c
Kattis Solution for Kattis problem Faktor
https://open.kattis.com/problems/faktor
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int A, I;

    scanf("%d %d", &A, &I);
    printf("%d\n", A * I - A + 1);

    return 0;
}