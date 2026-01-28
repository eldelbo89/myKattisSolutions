/*
ASCIIkassi.c
Kattis Solution for Kattis problem ASCIIkassi
https://open.kattis.com/problems/asciikassi
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n;
    char borders[] = {'|', '+'};
    char fill[] = {' ', '-'};

    scanf("%d", &n);
    for (int i = 0; i < n + 2; i++)
    {
        int index = (i == 0 || i == n + 1);
        //+-+
        printf("%c", borders[index]);
        for (int j = 0; j < n; j++)
            printf("%c", fill[index]);
        printf("%c\n", borders[index]);
    }

    return 0;
}