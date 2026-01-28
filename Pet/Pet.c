/*
Pet.c
Kattis Solution for Kattis problem Pet
https://open.kattis.com/problems/pet
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int total = -1, index = -1;
    for (int i = 1; i <= 5; i++)
    {
        int n1, n2, n3, n4;
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        int sum = n1 + n2 + n3 + n4;
        if (sum > total)
        {
            total = sum;
            index = i;
        }
    }
    printf("%d %d\n", index, total);

    return 0;
}
