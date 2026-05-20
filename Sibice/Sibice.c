/*
Sibice.c
Kattis Solution for Kattis problem Sibice
https://open.kattis.com/problems/sibice
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int N, W, H;
    scanf("%d %d %d", &N, &W, &H);

    int max_length_squared = W * W + H * H;

    for (int i = 0; i < N; i++)
    {
        int length_of_match;
        scanf("%d", &length_of_match);

        if (length_of_match * length_of_match <= max_length_squared)
            printf("DA\n");
        else
            printf("NE\n");
    }

    return 0;
}