/*
99problems.c
Kattis Solution for Kattis problem 99problems
https://open.kattis.com/problems/99problems
Author: eldelbo89
*/

#include <stdio.h>
int main(void)
{
    int n;

    scanf("%d", &n);

    if (n < 100)
    {
        printf("99\n");
        return 0;
    }
    int x = (n - (n % 100)) + 99;
    if (x - n > 50)
    {
        x -= 100;
    }
    printf("%d\n", x);

    return 0;
}
