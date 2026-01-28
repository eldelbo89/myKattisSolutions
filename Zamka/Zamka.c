/*
Zamka.c
Kattis Solution for Kattis problem Zamka
https://open.kattis.com/problems/zamka
Author: eldelbo89
*/

#include <stdio.h>

int digit_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    int L, D, X;
    scanf("%d", &L);
    scanf("%d", &D);
    scanf("%d", &X);

    int N = -1, M = -1;

    // find minimal N
    for (int i = L; i <= D; i++)
    {
        if (digit_sum(i) == X)
        {
            N = i;
            break;
        }
    }

    // find maximal M
    for (int i = D; i >= L; i--)
    {
        if (digit_sum(i) == X)
        {
            M = i;
            break;
        }
    }

    printf("%d\n%d\n", N, M);
    return 0;
}
