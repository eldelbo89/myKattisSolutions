/*
ABC.c
Kattis Solution for Kattis problem ABC
https://open.kattis.com/problems/abc
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
    int arr[3];
    char ch1, ch2, ch3;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    scanf(" %c %c %c", &ch1, &ch2, &ch3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d %d %d", arr[ch1 - 'A'], arr[ch2 - 'A'], arr[ch3 - 'A']);
    return 0;
}