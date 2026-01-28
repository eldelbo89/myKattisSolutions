/*
Hakkari.c
Kattis Solution for Kattis problem Hakkari
https://open.kattis.com/problems/hakkari
Author: eldelbo89
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m = 0, mine = 0;
    int *r, *c;
    scanf("%d %d", &n, &m);
    int max = n * m;
    r = calloc(max, sizeof(int));
    c = calloc(max, sizeof(int));
    getchar(); // new line
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char ch = getchar();
            if (ch == '*')
            {
                r[mine] = i;
                c[mine] = j;
                mine++;
            }
        }
        getchar(); // new line
    }
    printf("%d\n", mine);
    for (int k = 0; k < mine; k++)
    {
        printf("%d %d\n", r[k], c[k]);
    }
    free(r);
    free(c);
    return 0;
}