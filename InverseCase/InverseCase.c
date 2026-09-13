/*
InverseCase.c
Kattis Solution for Kattis problem InverseCase
https://open.kattis.com/problems/inversecase
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char s[1001] = {0};
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        // in ASCII: A to Z is 65 to 90, a to z is 97 to 122
        char c = s[i];
        if (c >= 65 && c <= 90) // uppercase
        {
            c = c + 32; // convert to lowercase
        }
        else if (c >= 97 && c <= 122) // lowercase
        {
            c = c - 32; // convert to uppercase
        }

        printf("%c", c);
    }
    printf("\n");

    return 0;
}