/*
takkfyrirmig.c
Kattis Solution for Kattis problem takkfyrirmig
https://open.kattis.com/problems/takkfyrirmig
Author: eldelbo89
*/

#include <stdio.h>

int main(void) {
    int i;
    scanf("%d", &i);

    for (int counter = 0; counter < i; counter++) {
        char name[256];
        scanf("%s", name);
        printf("Takk %s\n", name);
    }

    return 0;
}
