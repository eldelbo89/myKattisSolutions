/*
ALittleLeftoverPizza.c
Kattis Solution for Kattis problem ALittleLeftoverPizza
https://open.kattis.com/problems/alittleleftoverpizza
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int N;
    int S = 6, M = 8, L = 12;
    int s = 0, m = 0, l = 0;
    int boxes = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        char type;
        scanf(" %c", &type);
        int pizzaSlices;
        scanf("%d", &pizzaSlices);
        if (type == 'S')
        {
            s += pizzaSlices;
        }
        if (type == 'M')
        {
            m += pizzaSlices;
        }
        if (type == 'L')
        {
            l += pizzaSlices;
        }
    }
    boxes = s / S + (s % S != 0) + m / M + (m % M != 0) + l / L + (l % L != 0);
    printf("%d\n", boxes);
    return 0;
}