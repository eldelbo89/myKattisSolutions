/*
FindingAnA.c
Kattis Solution for Kattis problem FindingAnA
https://open.kattis.com/problems/findingana
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    char input[1001] = {0};
    fgets(input, sizeof(input), stdin);
    int print = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (print)
        {
            putchar(input[i]);
        }
        else if (input[i] == 'a')
        {
            print = 1;
            i--;
        }
    }

    return 0;
}