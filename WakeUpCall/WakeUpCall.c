/*
WakeUpCall.c
Kattis Solution for Kattis problem Wake Up Call
https://open.kattis.com/problems/wakeupcall
Author: eldelbo89
*/

#include <stdio.h>

static long read_sum(int count)
{
    long sum = 0;
    for (int i = 0; i < count; i++)
    {
        int in;
        scanf("%d", &in);
        sum += in;
    }
    return sum;
}

int main(void)
{
    int N, M, line1 = 0, line2 = 0;
    scanf("%d %d ", &N, &M);
    line1 = read_sum(N);
    line2 = read_sum(M);

    if (line2 == line1)
    {
        printf("Oh no\n");
    }
    else
    {
        printf("Button %d\n", line1 > line2 ? 1 : 2);
    }

    return 0;
}
