/*
Apaxiaaaaaaaaaaaans.c
Kattis Solution for Kattis problem Apaxiaaaaaaaaaaaans
https://open.kattis.com/problems/apaxiaaans
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char input[251];

    fgets(input, sizeof(input), stdin);
    int i = 0;
    for (i = 0; input[i + 1] != '\0'; i++)
    {
        if (input[i] != input[i + 1])
        {
            putchar(input[i]);
        }
    }
    putchar(input[i]);

    return 0;
}