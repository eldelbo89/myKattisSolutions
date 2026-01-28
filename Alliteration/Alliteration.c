/*
Alliteration.c
Kattis Solution for Kattis problem Alliteration
https://open.kattis.com/problems/alliteration
Author: eldelbo89
*/

#include <stdio.h>

void printAlphabetOcurrence(int alphabetOcurencxe[])
{
    int max = -1, index = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alphabetOcurencxe[i] > max)
        {
            max = alphabetOcurencxe[i];
            index = i;
        }
        alphabetOcurencxe[i] = 0; // reset for next line
    }
    printf("%c\n", 'a' + index);
}

int main(void)
{
    int n;
    int alphabetOcurencxe[26] = {0};
    scanf("%d", &n);
    getchar(); // consume the newline after the number
    for (int i = 0; i < n; i++)
    {
        int newWord = 1;
        while (1)
        {
            int c = getchar();
            if (c == ' ' || c == '\t')
            { // new word
                newWord = 1;
            }
            else if (c == '\n')
            { // new line
                printAlphabetOcurrence(alphabetOcurencxe);
                break;
            }
            else if (c >= 'a' && c <= 'z' && newWord)
            {
                alphabetOcurencxe[c - 'a']++;
                newWord = 0;
            }
        }
    }

    return 0;
}
