/*
Aaah.c
Kattis Solution for Kattis problem Aaah!
https://open.kattis.com/problems/aaah
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    char output = 'g';
    char input1[1001] = {0};
    char input2[1001] = {0};
    fgets(input1, sizeof(input1), stdin);
    fgets(input2, sizeof(input2), stdin);
    int size1 = 0, size2 = 0;
    for (size1 = 0; input1[size1] != '\0'; size1++)
        ;
    for (size2 = 0; input2[size2] != '\0'; size2++)
        ;
    if (size2 > size1)
    {
        output = 'n';
    }
    printf("%co", output);
    return 0;
}