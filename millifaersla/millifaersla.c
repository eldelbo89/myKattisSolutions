/*
millifaersla.c
Kattis Solution for Kattis problem millifaersla
https://open.kattis.com/problems/millifaersla
Author: eldelbo89
*/

#include <stdio.h>
int main(void)
{
    int i, index = 0, a, minimum = 1000000000;
    const char services[3][18] = {
        "Monnei", "Fjee", "Dolladollabilljoll"};
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        if (a < minimum)
        {
            minimum = a;
            index = i;
        }
    }
    printf("%s\n", services[index]);
    return 0;
}
