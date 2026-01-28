/*
BlandadBest.c
Kattis Solution for Kattis problem BlandadBest
https://open.kattis.com/problems/blandadbest
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int N;
    char input[11];
    char first[11];
    int mixed = 0;

    scanf("%d", &N);
    scanf("%s", first);

    for (int i = 1; i < N; i++)
    {
        scanf("%s", input);
        if (input[0] != first[0])
            mixed = 1;
    }

    if (mixed)
        printf("blandad best\n");
    else
        printf("%s\n", first);

    return 0;
}
