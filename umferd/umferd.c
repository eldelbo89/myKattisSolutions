/*
umferd.c
Kattis Solution for Kattis problem umferd
https://open.kattis.com/problems/umferd
Author: eldelbo89
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n, emptylanes = 0;
    scanf("%d %d", &m, &n);
    int totalLanes = m * n;
    char *lanes = malloc(m * sizeof(char));
    for (int i = 0; i < n; i++)
    {
        scanf("%s", lanes);
        int i = 0;
        while (lanes[i] != '\0')
        {
            if (lanes[i++] == '.')
                emptylanes++;
        }
    }
    printf("%f\n", emptylanes / (float)totalLanes);
    return 0;
}
