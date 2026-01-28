/*
Barcelona.c
Kattis Solution for Kattis problem Barcelona
https://open.kattis.com/problems/barcelona
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n, k, index;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        int bag;
        scanf("%d", &bag);
        if (k == bag)
        {
            index = i + 1;
            break;
        }
    }
    if (index == 1)
    {
        printf("fyrst\n");
    }
    else if (index == 2)
    {
        printf("naestfyrst\n");
    }
    else
    {
        printf("%d fyrst\n", index);
    }

    return 0;
}
