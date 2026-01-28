/*
ASCIIAddition.c
Kattis Solution for Kattis problem ASCIIAddition
https://open.kattis.com/problems/asciiaddition
Author: eldelbo89
*/

/*
 This solution relies on the fact that ASCII digits in the problem
 input have fixed width (5 columns) and height (7 rows), with known redundancies.

 Instead of matching full glyphs, the program:
 - ignores rows that do not add information
 - counts the number of 'x' characters in selected rows
 - uses that count to uniquely identify most digits
 - resolves ambiguous cases (2/3/5 and 6/9) by checking specific pixels

 This approach is optimized for the fixed input format of the problem and is not intended as a general ASCII digit parser.
*/

#include <stdio.h>
#include <string.h>
#define INPUT 200
static const char *glyphs[11][7] = {
    // 0
    {
        "xxxxx",
        "x...x",
        "x...x",
        "x...x",
        "x...x",
        "x...x",
        "xxxxx"},
    // 1
    {
        "....x",
        "....x",
        "....x",
        "....x",
        "....x",
        "....x",
        "....x"},
    // 2
    {
        "xxxxx",
        "....x",
        "....x",
        "xxxxx",
        "x....",
        "x....",
        "xxxxx"},
    // 3
    {
        "xxxxx",
        "....x",
        "....x",
        "xxxxx",
        "....x",
        "....x",
        "xxxxx"},
    // 4
    {
        "x...x",
        "x...x",
        "x...x",
        "xxxxx",
        "....x",
        "....x",
        "....x"},
    // 5
    {
        "xxxxx",
        "x....",
        "x....",
        "xxxxx",
        "....x",
        "....x",
        "xxxxx"},
    // 6
    {
        "xxxxx",
        "x....",
        "x....",
        "xxxxx",
        "x...x",
        "x...x",
        "xxxxx"},
    // 7
    {
        "xxxxx",
        "....x",
        "....x",
        "....x",
        "....x",
        "....x",
        "....x"},
    // 8
    {
        "xxxxx",
        "x...x",
        "x...x",
        "xxxxx",
        "x...x",
        "x...x",
        "xxxxx"},
    // 9
    {
        "xxxxx",
        "x...x",
        "x...x",
        "xxxxx",
        "....x",
        "....x",
        "xxxxx"}};

void print_ascii_number(int n)
{
    char buf[32];
    sprintf(buf, "%d", n);

    for (int row = 0; row < 7; row++)
    {
        for (int i = 0; buf[i]; i++)
        {
            int d = buf[i] - '0';
            printf("%s", glyphs[d][row]);

            if (buf[i + 1])
                printf(".");
        }
        printf("\n");
    }
}

int main(void)
{
    char line1[INPUT] = {0};
    char line2[INPUT] = {0};
    char line3[INPUT] = {0};
    char line4[INPUT] = {0};
    char line5[INPUT] = {0};

    fgets(line1, sizeof(line1), stdin);
    fgets(line2, sizeof(line2), stdin);
    fgets(line3, sizeof(line3), stdin);
    fgets(line4, sizeof(line4), stdin);
    fgets(line5, sizeof(line5), stdin);
    fgets(line2, sizeof(line2), stdin); // 2 6 7  to ignore
    fgets(line2, sizeof(line2), stdin);
    int size;
    for (size = 0; line1[size] != '\0'; size++)
    {
        ;
    }
    int count = 0;
    int result = 0;
    int operand = 0;
    char operator = 0;
    int fiveCounter = 5;
    for (int i = 0; i < size; i++)
    {
        /*
        Lines 2, 6, and 7 have no impact on identifying the numbers.
        Line 2 is always the same as line 3, lines 5 and 6 are always the same,
        and line 7 has no impact.

        After eliminating them, we count the number of x's in each 5-column block.
        We found the following patterns:

        4  x's  -> 1
        7  x's  -> +
        8  x's  -> 7
        10 x's  -> 4
        11 x's  -> 0
        12 x's  -> 2 or 3 or 5
        13 x's  -> 6 or 9
        14 x's  -> 8
        */

        char c1 = line1[i];
        char c3 = line3[i];
        char c4 = line4[i];
        char c5 = line5[i];

        if (c1 == 'x')
        {
            count++;
        }
        if (c3 == 'x')
        {
            count++;
        }
        if (c4 == 'x')
        {
            count++;
        }
        if (c5 == 'x')
        {
            count++;
        }

        if (--fiveCounter == 0)
        {
            int temp;
            switch (count)
            {
            case 4:
                operand = operand * 10 + 1;
                break;
            case 7:
                operator = 1;
                result += operand;
                operand = 0;
                break;
            case 8:
                operand = operand * 10 + 7;
                break;
            case 10:
                operand = operand * 10 + 4;
                break;
            case 11:
                operand = operand * 10;
                break;
            case 12:
                if (line3[i - 4] == 'x') // 5
                {
                    temp = 5;
                }
                else // 2 or 3
                {
                    if (line5[i - 4] == 'x')
                    {
                        temp = 2;
                    }
                    else
                    {
                        temp = 3;
                    }
                }
                operand = operand * 10 + temp;
                break;
            case 13:
                if (line5[i - 4] == 'x')
                {
                    temp = 6;
                }
                else
                {
                    temp = 9;
                }
                operand = operand * 10 + temp;
                break;
            case 14:
                operand = operand * 10 + 8;
                break;
            default:
                break;
            }
            count = 0;
            i++; // Skip the separating column between characters.
            fiveCounter = 5;
        }
    }
    result += operand;
    print_ascii_number(result);
    return 0;
}
