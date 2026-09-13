/*
FancyMultiplication.c
Kattis Solution for Kattis problem FancyMultiplication
https://open.kattis.com/problems/fancymultiplication
Author: eldelbo89
*/

#include <stdio.h>

long multiply(long a, long b)
{
    long result = 0;
    long loop = a;
    long num = b;

    if (b < a)
    {
        loop = b;
        num = a;
    }

    for (; loop > 0; loop--)
    {
        result += num;
    }
    return result;
}

int main()
{
    long x, y;

    scanf("%ld %ld", &x, &y);
    printf("%ld\n", multiply(x, y));

    return 0;
}
