/*
TheRecipe.c
Kattis Solution for Kattis problem TheRecipe
https://open.kattis.com/problems/receptet
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int N, total = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int H, B, K;

        scanf("%d %d %d", &H, &B, &K);

        int missing = H - B;

        if (missing < 0)
        {
            total += (-1) * K * missing;
        }
    }
    printf("%d\n", total);

    return 0;
}
