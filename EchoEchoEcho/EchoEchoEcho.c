/*
EchoEchoEcho.c
Kattis Solution for Kattis problem EchoEchoEcho
https://open.kattis.com/problems/echoechoecho
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char word[16];

    scanf("%s", &word);
    printf("%s %s %s\n", word, word, word);

    return 0;
}