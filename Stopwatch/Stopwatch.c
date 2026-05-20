/*
Stopwatch.c
Kattis Solution for Kattis problem Stopwatch
https://open.kattis.com/problems/stopwatch
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N % 2)
    {
        printf("still running");
        return 0;
    }

    int total = 0;

    for (int i = 0; i < N; i += 2)
    {
        int start, stop;
        scanf("%d %d", &start, &stop);

        total += stop - start;
    }
    printf("%d\n", total);

    return 0;
}