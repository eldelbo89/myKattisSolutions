/*
Dagatal.c
Kattis Solution for Kattis problem Dagatal
https://open.kattis.com/problems/dagatal
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{ // 2019 not leap year feb is 28 days
    int month, months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d", &month);
    printf("%d\n", months[month - 1]);

    return 0;
}
