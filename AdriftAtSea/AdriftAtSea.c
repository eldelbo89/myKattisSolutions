/*
AdriftAtSea.c
Kattis Solution for Kattis problem AdriftAtSea
https://open.kattis.com/problems/adriftatsea
Author: eldelbo89
*/

#include <stdio.h>
#include <string.h>

int direction_to_index(const char *dir)
{
    static const char *keys[8] = {
        "N", "NE", "E", "SE", "S", "SW", "W", "NW"};

    for (int i = 0; i < 8; i++)
    {
        if (strcmp(dir, keys[i]) == 0)
        {
            return i;
        }
    }
    return -1; // Not found
}

int main(void)
{
    char curDir[4], desiredDir[4];
    if (fgets(curDir, sizeof(curDir), stdin))
        curDir[strcspn(curDir, "\n")] = '\0';
    if (fgets(desiredDir, sizeof(desiredDir), stdin))
        desiredDir[strcspn(desiredDir, "\n")] = '\0';
    int curIndex = direction_to_index(curDir);
    int desiredIndex = direction_to_index(desiredDir);

    if (curIndex != -1 && desiredIndex != -1)
    {
        int diff = desiredIndex - curIndex;
        if (diff > 4)
            diff -= 8;
        if (diff < -4)
            diff += 8;

        if (!diff)
        {
            printf("Keep going straight\n");
        }
        else if (diff == 4 || diff == -4)
        {
            printf("U-turn\n");
        }
        else
        {
            int d = diff * 45;
            int degrees = d < 0 ? -d : d;

            printf("Turn %d degrees %s\n", degrees, (diff < 0) ? "port" : "starboard");
        }
    }

    return 0;
}
