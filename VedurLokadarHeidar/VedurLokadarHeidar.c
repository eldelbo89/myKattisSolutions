/*
VedurLokadarHeidar.c
Kattis Solution for Kattis problem VedurLokadarHeidar
https://open.kattis.com/problems/vedurheidar
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int v, n;
    scanf("%d %d", &v, &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        char input[1001] = {0};
        scanf("%s %d", input, &temp);
        if (temp < v)
        {
            printf("%s lokud\n", input);
        }
        else
        {
            printf("%s opin\n", input);
        }
    }
    return 0;
}