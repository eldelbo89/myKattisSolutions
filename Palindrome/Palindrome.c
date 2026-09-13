/*
Palindrome.c
Kattis Solution for Kattis problem Palindrome
https://open.kattis.com/problems/palindrome
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char s[100001] = {0};
    fgets(s, sizeof(s), stdin);

    int lengthOfs;
    for (lengthOfs = 0; s[lengthOfs] != '\0' && s[lengthOfs] != '\n'; lengthOfs++)
        ;

    for (int i = 0; i < lengthOfs / 2; i++)
    {
        if (s[i] != s[lengthOfs - 1 - i])
        {
            printf("Nothing special about this string :(");
            return 0;
        }
    }

    printf("Palindrome!\n");

    return 0;
}