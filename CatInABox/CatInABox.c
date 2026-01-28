/*
CatInABox.c
Kattis Solution for Kattis problem CatInABox
https://open.kattis.com/problems/catinbox
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    long d;
    scanf("%d %d %d %ld", &a, &b, &c, &d);
    long e = a * b * c;
    if (e == d)
        printf("COZY\n");
    else if (e > d)
        printf("SO MUCH SPACE\n");
    else
        printf("TOO TIGHT\n");

    return 0;
}