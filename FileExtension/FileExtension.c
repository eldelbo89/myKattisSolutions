/*
FileExtension.c
Kattis Solution for Kattis problem FileExtension
https://open.kattis.com/problems/nafnauki
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char s[33] = {0};
    fgets(s, sizeof(s), stdin);

    char *dot = NULL;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];

        if (c == '.')
            dot = &s[i];
    }

    printf("%s\n", dot);

    return 0;
}