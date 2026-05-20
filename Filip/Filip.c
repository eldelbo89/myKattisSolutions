/*
Filip.c
Kattis Solution for Kattis problem Filip
https://open.kattis.com/problems/filip
Author: eldelbo89
*/

#include <stdio.h>

static int reverse(int x)
{
    int reversed = 0;

    for (int i = 0; i < 3; i++)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return reversed;
}
int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    A = reverse(A);
    B = reverse(B);

    printf("%d\n", A > B ? A : B);

    return 0;
}