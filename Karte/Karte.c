/*
Karte.c
Kattis Solution for Kattis problem Karte
https://open.kattis.com/problems/karte
Author: eldelbo89
*/

#include <stdio.h>

int P[13] = {0}, K[13] = {0}, H[13] = {0}, T[13] = {0};
int pc = 0, kc = 0, hc = 0, tc = 0;
int chek(char suit, int number)
{
    /*
    returns:
    0:ok
    1:duplicate found
    */
    switch (suit)
    {
    case 'P':
        if (P[number] == 1)
            return 1;
        P[number] = 1;
        pc++;
        break;
    case 'K':
        if (K[number] == 1)
            return 1;
        K[number] = 1;
        kc++;
        break;
    case 'H':
        if (H[number] == 1)
            return 1;
        H[number] = 1;
        hc++;
        break;
    case 'T':
        if (T[number] == 1)
            return 1;
        T[number] = 1;
        tc++;
        break;
    }
}

int main()
{
    char input[1001] = {0};
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != 0; i += 3)
    {
        char suit = input[i];
        int number = (input[i + 1] - '0') * 10 + (input[i + 2] - '0');
        if (chek(suit, number) == 1)
        {
            printf("GRESKA\n");
            return 0;
        }
    }
    printf("%d %d %d %d\n", 13 - pc, 13 - kc, 13 - hc, 13 - tc);

    return 0;
}
