/*
ColdPuterScience.c
Kattis Solution for Kattis problem ColdPuterScience
https://open.kattis.com/problems/cold
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n, total = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d ", &t);
        total += t < 0 ? 1 : 0;
    }
    printf("%d\n", total);

    return 0;
}
