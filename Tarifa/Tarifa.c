/*
Tarifa.c
Kattis Solution for Kattis problem Tarifa
https://open.kattis.com/problems/tarifa
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int X, N, total_spent = 0;
    scanf("%d %d", &X, &N);

    for (int i = 0; i < N; i++)
    {
        int data_spent;
        scanf("%d", &data_spent);
        total_spent += data_spent;
    }

    printf("%d\n", ((N + 1) * X) - total_spent);

    return 0;
}