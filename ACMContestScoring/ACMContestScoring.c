/*
ACMContestScoring.c
Kattis Solution for Kattis problem ACMContestScoring
https://open.kattis.com/problems/acm
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int penalties[26] = {0};
    int result = 0;
    int correct = 0;
    while (1)
    {
        int m;
        char c;
        char answer[6];
        scanf("%d", &m);
        if (m == -1)
            break;
        scanf(" %c", &c);
        int index = c - 'A';
        scanf("%s", answer);
        if (answer[0] == 'r')
        {
            correct++;
            result = result + m + penalties[index];
        }
        else
        {
            penalties[index] += 20;
        }
    }
    printf("%d %d", correct, result);
    return 0;
}