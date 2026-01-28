/*
AToweringProblem.c
Kattis Solution for Kattis problem AToweringProblem
https://open.kattis.com/problems/towering
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int boxes[6], tower1, tower2;
    scanf("%d %d %d %d %d %d %d %d", &boxes[0], &boxes[1], &boxes[2], &boxes[3], &boxes[4], &boxes[5], &tower1, &tower2);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if (boxes[j] < boxes[j + 1])
            {
                int temp = boxes[j];
                boxes[j] = boxes[j + 1];
                boxes[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (boxes[i] + boxes[j] + boxes[k] == tower1)
                {
                    printf("%d %d %d ", boxes[i], boxes[j], boxes[k]);
                    boxes[i] = boxes[j] = boxes[k] = 0;
                    for (int l = 0; l < 6; l++)
                    {
                        if (boxes[l])
                        {
                            printf("%d ", boxes[l]);
                        }
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}
