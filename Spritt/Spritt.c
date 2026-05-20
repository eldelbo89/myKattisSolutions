/*
Spritt.c
Kattis Solution for Kattis problem Spritt
https://open.kattis.com/problems/spritt
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n, max, sum = 0;

    scanf("%d %d", &n, &max);

    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);

        sum += tmp;

        if (sum > max)
        {
            printf("Neibb");
            return 0;
        }
    }

    printf("Jebb");

    return 0;
}