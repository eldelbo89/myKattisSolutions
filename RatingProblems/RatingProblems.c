/*
RatingProblems.c
Kattis Solution for Kattis problem Rating Problems
https://open.kattis.com/problems/ratingproblems
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int n, k;
    float answer = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < k; i++)
    {
        int value;
        scanf("%d", &value);
        answer += value;
    }

    printf("%.4f %.4f\n", (answer - 3 * (n - k)) / n, (answer + 3 * (n - k)) / n);
}