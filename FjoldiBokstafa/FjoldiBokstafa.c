/*
FjoldiBokstafa.c
Kattis Solution for Kattis problem FjoldiBokstafa
https://open.kattis.com/problems/fjoldibokstafa
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    char input[101] = {0};
    int sum = 0;
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0'; i++)
    {
        int ch = (int)input[i];
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
            sum++;
    }
    printf("%d\n", sum);
    return 0;
}
