/*
AboveAverage.c
Kattis Solution for Kattis problem AboveAverage
https://open.kattis.com/problems/aboveaverage
Author: eldelbo89
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int C;
    scanf("%d", &C);
    for (int i = 0; i < C; i++)
    {
        int N;
        float av = 0, result = 0;
        scanf("%d", &N);
        int *arr = (int *)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
            av += arr[j];
        }
        av /= N;
        for (int j = 0; j < N; j++)
        {
            if (arr[j] > av)
            {
                result++;
            }
        }
        printf("%.3f%%\n", (result * 100.0f) / N);
        free(arr);
    }
    return 0;
}