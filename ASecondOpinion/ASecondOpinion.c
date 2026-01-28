/*
ASecondOpinion.c
Kattis Solution for Kattis problem ASecondOpinion
https://open.kattis.com/problems/secondopinion
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int s;
    scanf("%d", &s);
    int h, m;
    h = s / 3600;
    s = s % 3600;
    m = s / 60;
    s = s % 60;
    printf("%d : %d : %d\n", h, m, s);
    return 0;
}