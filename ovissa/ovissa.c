/*
ovissa.c
Kattis Solution for Kattis problem ovissa
https://open.kattis.com/problems/ovissa
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char in[100000];
    scanf("%s", in);
    int i = 0;
    while (in[i] != '\0')
        i++;
    printf("%d\n", i);
    return 0;
}