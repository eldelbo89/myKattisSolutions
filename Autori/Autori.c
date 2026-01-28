/*
Autori.c
Kattis Solution for Kattis problem Autori
https://open.kattis.com/problems/autori
Author: eldelbo89
*/

#include <stdio.h>
int main()
{
    char input[101];
    fgets(input, 101, stdin);
    putchar(input[0]);
    for (int i = 1; input[i + 1] != '\0'; i++)
    {
        if (input[i] == '-')
        {
            putchar(input[i + 1]);
        }
    }
    return 0;
}
