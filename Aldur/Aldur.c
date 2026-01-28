/*
Aldur.c
Kattis Solution for Kattis problem Aldur
https://open.kattis.com/problems/aldur
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n;
    int age = 1000000; // 0<=age<=10^5
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (age > temp)
        {
            age = temp;
        }
    }
    printf("%d\n", age);
    return 0;
}