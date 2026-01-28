/*
Contrarianism.c
Kattis Solution for Kattis problem Contrarianism
https://open.kattis.com/problems/andmal
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char input[11] = {0};
    fgets(input, sizeof(input), stdin);
    char ch = input[0];
    if (ch == 'Z' || ch == 'z' || ch == ' ' || '\n')
    {
        ch = 'a';
    }
    printf("%cany1\n", ++ch);
    return 0;
}
