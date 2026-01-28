/*
SnakeyString.c
Kattis Solution for Kattis problem SnakeyString
https://open.kattis.com/problems/snakeystring
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    fgetc(stdin); // to consume the newline character
    char string[101] = {0};
    string[c] = '\0';
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char c = fgetc(stdin);
            if (c != '.')
                string[j] = c;
        }
        fgetc(stdin); // to consume the newline character
    }
    printf("%s\n", string);
    return 0;
}
