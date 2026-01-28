/*
3DPrintedStatues.c
Kattis Solution for Kattis problem 3DPrintedStatues
https://open.kattis.com/problems/3dprinter
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n, days = 0, printers = 1;
    scanf("%d", &n);
    while (printers < n)
    {
        printers *= 2; // print printers
        days++;
    }
    printf("%d\n", days + 1); // add one day for printing the statues
    return 0;
}