/*
Bestagjofin.c
Kattis Solution for Kattis problem Bestagjofin
https://open.kattis.com/problems/bestagjofin
Author: eldelbo89
*/

#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    int mostFun = -1;
    char name[21] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char tempName[21];
        int tempFun;
        scanf("%s %d", tempName, &tempFun);
        if (mostFun < tempFun)
        {
            mostFun = tempFun;
            strcpy(name, tempName);
        }
    }
    printf("%s\n", name);
}
