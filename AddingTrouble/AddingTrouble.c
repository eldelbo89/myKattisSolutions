/*
AddingTrouble.c
Kattis Solution for Kattis problem AddingTrouble
https://open.kattis.com/problems/addingtrouble
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int A, B, SUM;
    scanf("%d %d %d", &A, &B, &SUM);
    int realSUM = A + B;
    if (SUM == realSUM)
    {
        printf("correct!");
    }
    else
    {
        printf("wrong!");
    }

    return 0;
}