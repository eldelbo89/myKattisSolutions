/*
vidsnuningur.c
Kattis Solution for Kattis problem vidsnuningur
https://open.kattis.com/problems/vidsnuningur
Author: eldelbo89
*/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main(void)
{
    int i, length;
    char input[MAX_LENGTH];
    scanf("%s", input);
    length = strlen(input);

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", input[i]);
    }

    return 0;
}
