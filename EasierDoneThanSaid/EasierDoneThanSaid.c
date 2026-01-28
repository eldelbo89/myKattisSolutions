/*
EasierDoneThanSaid.c
Kattis Solution for Kattis problem EasierDoneThanSaid
https://open.kattis.com/problems/easierdonethansaid
Author: eldelbo89
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char pass[21];
    while ((fgets(pass, sizeof(pass), stdin)))
    {
        int vowels = 0, consonants = 0, hasVowel = 0, acceptable = 1;

        pass[strcspn(pass, "\n")] = '\0';

        // skip empty lines
        if (pass[0] == '\0')
        {
            continue;
        }

        if (strcmp(pass, "end") == 0)
        {
            break;
        }
        int i = 0;
        while (pass[i] != '\0')
        {
            char ch = pass[i];
            if (pass[i + 1] != '\0')
            {
                char ch1 = pass[i + 1];
                if (ch == ch1 && (ch != 'e' && ch != 'o'))
                {
                    acceptable = 0;
                    break;
                }
            }
            if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
            {
                vowels++;
                consonants = 0;
                hasVowel = 1;
            }
            else
            {
                consonants++;
                vowels = 0;
            }
            if (vowels >= 3 || consonants >= 3)
            {
                acceptable = 0;
                break;
            }
            i++;
        }
        if (!hasVowel)
        {
            acceptable = 0;
        }
        printf("<%s> is%sacceptable.\n", pass, acceptable ? " " : " not ");
    }
    return 0;
}
