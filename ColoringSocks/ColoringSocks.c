/*
ColoringSocks.c
Kattis Solution for Kattis problem ColoringSocks
https://open.kattis.com/problems/color
Author: eldelbo89
*/
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void)
{
    int S, C, K;
    scanf("%d %d %d", &S, &C, &K);

    int *D = malloc(sizeof(int) * S);
    for (int i = 0; i < S; i++)
        scanf("%d", &D[i]);

    qsort(D, S, sizeof(int), cmp);

    int result = 0;
    int i = 0;

    while (i < S)
    {
        result++;
        int first_color = D[i];
        int count = 0;

        while (i < S && count < C && D[i] - first_color <= K)
        {
            i++;
            count++;
        }
    }

    printf("%d\n", result);
    free(D);
    return 0;
}
