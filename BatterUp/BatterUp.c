/*
BatterUp.c
Kattis Solution for Kattis problem BatterUp
https://open.kattis.com/problems/batterup
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
  int n, denominator = 0, total = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    int tmp;
    scanf("%d", &tmp);
    if (tmp != -1)
    {
      denominator++;
      total += tmp;
    }
  }
  printf("%.3f\n", (double)total / denominator);
  return 0;
}