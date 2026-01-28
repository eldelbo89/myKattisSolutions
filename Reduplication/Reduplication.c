/*
Reduplication.c
Kattis Solution for Kattis problem Reduplication
https://open.kattis.com/problems/reduplikation
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n;      // to store a digit between 1 and 9
    char s[11]; // to store the string to be repeated 2<=|s|<=10

    scanf("%10s", s);
    scanf("%d", &n);
    while (n--)
    {
        printf("%s", s);
    }
    return 0;
}
