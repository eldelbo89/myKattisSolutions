/*
upprodun.c
Kattis Solution for Kattis problem upprodun
https://open.kattis.com/problems/upprodun
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int rooms, teams, i, j;
    scanf("%d %d", &rooms, &teams);
    int min_teams_per_room = teams / rooms;
    int teams_left = teams - (min_teams_per_room * rooms);
    for (i = 0; i < rooms; i++)
    {
        for (j = 0; j < min_teams_per_room; j++)
        {
            printf("*");
        }
        if (teams_left-- > 0)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
