/*
Canadianseh.c
Kattis Solution for Kattis problem Canadians, eh?!
https://open.kattis.com/problems/canadianseh
Author: eldelbo89
*/

#include <stdio.h>
#define CANADIAN "Canadian!"
#define NOT_CANADIAN "Imposter!"
int main(void)
{

    char input[1001] = {0};
    fgets(input, sizeof(input), stdin);
    int length;
    for (length = 0; input[length] != '\0'; length++)
        ;
    if (input[length - 4] == 'e' && input[length - 3] == 'h' && input[length - 2] == '?')
    {
        printf("%s\n", CANADIAN);
    }
    else
    {
        printf("%s\n", NOT_CANADIAN);
    }
    return 0;
}