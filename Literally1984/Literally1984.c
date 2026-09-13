/*
Literally1984.c
Kattis Solution for Kattis problem Literally1984
https://open.kattis.com/problems/bokstaflega1984
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("%s\n", n == 1984 ? "Literally 1984" : "Not 1984... yet");

    return 0;
}
