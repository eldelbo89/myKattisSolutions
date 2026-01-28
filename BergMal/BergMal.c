/*
BergMal.c
Kattis Solution for Kattis problem BergMal
https://open.kattis.com/problems/bergmal
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char str[1001] = {0};
    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);
    return 0;
}