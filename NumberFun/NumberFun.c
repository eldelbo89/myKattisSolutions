/*
NumberFun.c
Kattis Solution for Kattis problem NumberFun
https://open.kattis.com/problems/numberfun
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b == c || a - b == c || b - a == c || a * b == c || b == a * c || a == b * c)
        {
            printf("Possible\n");
        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}
