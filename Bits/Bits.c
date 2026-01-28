/*
Bits.c
Kattis Solution for Kattis problem Bits
https://open.kattis.com/problems/bits
Author: eldelbo89
*/
#include <stdio.h>

int main()
{
    int T, n, i, j;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        int max_count = 0;
        scanf("%d", &n);
        while (n)
        {
            int count = 0, p = n;
            while (p)
            {
                count += (p & 1);
                p >>= 1;
            }
            if (count > max_count)
            {
                max_count = count;
            }
            n /= 10;
        }
        printf("%d\n", max_count);
    }
}