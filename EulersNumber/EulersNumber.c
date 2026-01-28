/*
EulersNumber.c
Kattis Solution for Kattis problem EulersNumber
https://open.kattis.com/problems/eulersnumber
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n;
    double e = 1.0;

    scanf("%d", &n);

    double factorial = 1.0;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("%.16f\n", e);

    return 0;
}