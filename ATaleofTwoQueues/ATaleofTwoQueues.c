/*
ATaleofTwoQueues.c
Kattis Solution for Kattis problem ATaleofTwoQueues
https://open.kattis.com/problems/ataleoftwoqueues
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int n, m, left = 0, right = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n + m; i++)
    {
        int entry;
        scanf("%d", &entry);
        if (i < n)
        {
            left += entry;
        }
        else
        {
            right += entry;
        }
    }
    if (right == left)
        printf("either");
    else
        printf("%s", (right < left) ? "right" : "left");
    return 0;
}