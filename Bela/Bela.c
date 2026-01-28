/*
Bela.c
Kattis Solution for Kattis problem Bela
https://open.kattis.com/problems/bela
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int N, sum = 0;
    char B;
    scanf("%d %c", &N, &B);

    for (int i = 0; i < N * 4; i++)
    {
        char ch, b;
        scanf(" %c%c", &ch, &b);

        switch (ch)
        {
        case 'A':
            sum += 11;
            break;
        case 'K':
            sum += 4;
            break;
        case 'Q':
            sum += 3;
            break;
        case 'T':
            sum += 10;
            break;
        case '9':
            if (b == B)
                sum += 14;
            break;
        case 'J':
            sum += 2;
            if (b == B)
                sum += 18;
            break;

        default:
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
