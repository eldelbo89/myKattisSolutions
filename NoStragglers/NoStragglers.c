/*
NoStragglers.c
Kattis Solution for Kattis problem NoStragglers
https://open.kattis.com/problems/nostragglers
Author: eldelbo89
*/

#include <stdio.h>
// input: STU FAC VIS // IN OUT // 0 -> 16383
// output NO STRAGGLERS or number of struglers
int main(void)
{
    int N, total = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char who[4] = {0}; // STU FAC VIS to be ignored
        char inout[4] = {0};
        int persons;
        scanf("%s %s %d", who, inout, &persons);
        if (inout[0] == 'I')
        {
            total += persons;
        }
        else
        {
            total -= persons;
        }
    }
    if (total == 0)
    {
        printf("NO STRAGGLERS\n");
    }
    else
    {
        printf("%d\n", total);
    }

    return 0;
}