/*
Biladlyklabord.c
Kattis Solution for Kattis problem bilad lyklabord
https://open.kattis.com/problems/biladlyklabord
Author: eldelbo89
*/

#include <stdio.h>
#define MAX_N 100000
int main(void)
{

    char str_input[MAX_N + 2] = {0};

    fgets(str_input, sizeof(str_input), stdin);

    for (int i = 0; str_input[i + 1] != '\0'; i++)
    {
        if (str_input[i] != str_input[i + 1])
        {
            putchar(str_input[i]);
        }
    }
    putchar('\n');
    return 0;
}