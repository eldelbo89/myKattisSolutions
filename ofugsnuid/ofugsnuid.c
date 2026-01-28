/*
ofugsnuid.c
Kattis Solution for Kattis problem ofugsnuid
https://open.kattis.com/problems/ofugsnuid
Author: eldelbo89
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int *array = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
