/*
trik.c
Kattis Solution for Kattis problem trik
https://open.kattis.com/problems/trik
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char input[51] = {0};
    fgets(input, sizeof(input), stdin);
    int ball = 0; // most left
    for (int i = 0; input[i + 1] != '\0'; i++)
    {
        int ch = (int)input[i] - 65; // A:0 B:1 C:2
        if (ball == ch)
            ball = (ch + 1) % 3;
        else if (ball == (ch + 1) % 3)
            ball = ch;
    }
    printf("%d\n", ball + 1);
    return 0;
}
