/*
Kornislav.c
Kattis Solution for Kattis problem Kornislav
https://open.kattis.com/problems/kornislav
Author: eldelbo89
*/

#include <stdio.h>

static void sort4(int *a, int *b, int *c, int *d)
{
    /*
    Sort four integers in ascending order without using a built-in function or
    writing a full sorting algorithm. This approach is faster and sufficient for
    four integers.
    */
    int t;

    if (*a > *b)
    {
        t = *a;
        *a = *b;
        *b = t;
    }
    if (*c > *d)
    {
        t = *c;
        *c = *d;
        *d = t;
    }

    if (*a > *c)
    {
        t = *a;
        *a = *c;
        *c = t;
    }
    if (*b > *d)
    {
        t = *b;
        *b = *d;
        *d = t;
    }

    if (*b > *c)
    {
        t = *b;
        *b = *c;
        *c = t;
    }
}

int main(void)
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    sort4(&A, &B, &C, &D);
    printf("%d\n", A * C);

    return 0;
}
