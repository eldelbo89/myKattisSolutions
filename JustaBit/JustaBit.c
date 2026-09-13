/*
JustaBit.c
Kattis Solution for Kattis problem JustaBit
https://open.kattis.com/problems/justabit
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char s[21] = {0};
    fgets(s, sizeof(s), stdin);
    int ones = 0, zeros = 0, i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '1')
            ones++;
        else if (s[i] == '0') // avoid counting the newline character, and dont want to use string.h functions, nor compliocated logic to check for newline character, so just check for 0 and 1
            zeros++;
    }
    printf("%d %d\n", zeros, ones);
    return 0;
}