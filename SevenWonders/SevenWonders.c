/*
SevenWonders.c
Kattis Solution for Kattis problem Seven Wonders
https://open.kattis.com/problems/sevenwonders
Author: eldelbo89
*/

#include <stdio.h>
#define MAX 51

int main()
{
    char strInput[MAX] = {0};
    fgets(strInput, sizeof(strInput), stdin);
    int T = 0, C = 0, G = 0, additional = 0;
    for (int i = 0; strInput[i] != '\0'; i++)
    {
        if (strInput[i] == 'T')
        {
            T++;
        }
        else if (strInput[i] == 'C')
        {
            C++;
        }
        else if (strInput[i] == 'G')
        {
            G++;
        }
    }
    // check the additional points (bonus)
    // check the minimum of T, C, G
    int min = (T < C) ? T : C;
    min = (min < G) ? min : G;

    // additional points = min * 7
    additional = min * 7;

    int total = additional + T * T + C * C + G * G;

    printf("%d\n", total);
    return 0;
}
