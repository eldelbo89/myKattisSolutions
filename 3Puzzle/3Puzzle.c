/*
3Puzzle.c
Kattis Solution for Kattis problem 3Puzzle
https://open.kattis.com/problems/3puzzle
Author: eldelbo89
*/

#include <stdio.h>
int main(void)
{
    int empty_left = 0, empty_right = 0, result_left = 0, result_right = 0;
    char str_4_left[5] = "2-31";
    char str_4_right[5] = "2-31";
    for (int i = 0; i < 4; i++)
    {
        char ch;
        int j = i;
        scanf(" %c", &ch);
        if (i == 2)
            j = 3;
        if (i == 3)
            j = 2;
        if (ch == '-')
        {
            empty_left = j;
            empty_right = j;
        }
        str_4_left[j] = ch;
    }
    for (int i = 0; i < 4; i++)
    {
        str_4_right[i] = str_4_left[i];
    }
    while (!(str_4_right[0] == '1' && str_4_right[1] == '2' && str_4_right[3] == '3'))
    {
        result_right++;
        int r = empty_right + 1;
        if (r > 3)
            r = 0;
        str_4_right[empty_right] = str_4_right[r];
        str_4_right[r] = '-';
        empty_right = r;
    }
    while (!(str_4_left[0] == '1' && str_4_left[1] == '2' && str_4_left[3] == '3'))
    {
        result_left++;
        int l = empty_left - 1;
        if (l < 0)
            l = 3;
        str_4_left[empty_left] = str_4_left[l];
        str_4_left[l] = '-';
        empty_left = l;
    }
    if (result_right < result_left)
    {
        result_left = result_right;
    }
    printf("%d", result_left);
    return 0;
}