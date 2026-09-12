/*
OddManOut.c
Kattis Solution for Kattis problem OddManOut
https://open.kattis.com/problems/oddmanout
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int N;

    scanf("%d ", &N);
    for (int i = 0; i < N; i++)
    {
        int G, xor = 0;
        scanf("%d ", &G);

        for (int j = 0; j < G; j++)
        {
            int C;
            scanf("%d", &C);
            xor ^= C;
        }
        printf("Case #%d: %d\n", i + 1, xor);
    }

    return 0;
}
