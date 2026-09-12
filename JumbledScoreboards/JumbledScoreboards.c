/*
JumbledScoreboards.c
Kattis Solution for Kattis problem JumbledScoreboards
https://open.kattis.com/problems/jumbledscoreboards
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n, mina = 0, minb = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a < mina || b < minb)
        {
            printf("no\n");
            return 0;
        }
        mina = a;
        minb = b;
    }
    printf("yes\n");
    return 0;
}
