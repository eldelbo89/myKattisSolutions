/*
CountTheVowels.c
Kattis Solution for Kattis problem CountTheVowels
https://open.kattis.com/problems/countthevowels
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    char input[81] = {0};
    fgets(input, sizeof(input), stdin);
    int sum = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        int ch = (int)input[i];
        if (ch > 85) // 'U'
        {
            ch -= 32; // to lower
        }
        if (ch == 85 || ch == 79 || ch == 73 || ch == 69 || ch == 65)
            sum++;
    }
    printf("%d\n", sum);

    return 0;
}
