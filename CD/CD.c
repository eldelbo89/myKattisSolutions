/*
CD.c
Kattis Solution for Kattis problem CD
https://open.kattis.com/problems/CD
Author: eldelbo89
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    int *Jack = NULL;
    int *Jill = NULL;
    int capN = 0, capM = 0;

    while (1)
    {
        scanf("%d %d", &N, &M);
        if (!N && !M)
            break;

        if (N > capN)
        {
            Jack = realloc(Jack, N * sizeof(int));
            capN = N;
        }
        if (M > capM)
        {
            Jill = realloc(Jill, M * sizeof(int));
            capM = M;
        }
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Jack[i]);
        }
        for (int i = 0; i < M; i++)
        {
            scanf("%d", &Jill[i]);
        }

        int i = 0, j = 0, results = 0;
        while (i < N && j < M)
        {
            if (Jack[i] == Jill[j])
            {
                results++;
                i++;
                j++;
            }
            else if (Jack[i] < Jill[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        printf("%d\n", results);
    }

    free(Jack);
    free(Jill);
    return 0;
}
