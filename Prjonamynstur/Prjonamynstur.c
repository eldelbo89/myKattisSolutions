/*
Prjonamynstur.c
Kattis Solution for Kattis Prjonamynstur
https://open.kattis.com/problems/prjonamynstur
Author: eldelbo89
*/
/*
ch  |   pts |   dec
----+-------+--------
.   |   20  |   46
O   |   10  |   79
\   |   25  |   92
/   |   25  |   47
A   |   35  |   65
^   |   5   |   94
v   |   22  |   118
*/
#include <stdio.h>
#include <stdlib.h>

static int stitch_score(char c)
{
    static const int score[256] = {
        ['.'] = 20,
        ['O'] = 10,
        ['/'] = 25,
        ['\\'] = 25,
        ['A'] = 35,
        ['^'] = 5,
        ['v'] = 22};

    return score[(unsigned char)c];
}

int main()
{
    int n, m;
    int total = 0;
    scanf("%d %d", &n, &m);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            char c;

            scanf(" %c", &c);
            total += stitch_score(c);
        }
    }

    printf("%d\n", total);

    return 0;
}
