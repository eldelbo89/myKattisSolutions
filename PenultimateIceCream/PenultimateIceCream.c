/*
PenultimateIceCream.c
Kattis Solution for Kattis problem PenultimateIceCream
https://open.kattis.com/problems/penultimateicecream
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n, max = 1, secondMax = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int price;
        scanf(" %d", &price);
        if (price > max)
        {
            secondMax = max;
            max = price;
        }
        else if (price > secondMax)
        {
            secondMax = price;
        }
    }
    printf("%d\n", secondMax);
    return 0;
}
