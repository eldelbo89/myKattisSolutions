/*
Betting.c
Kattis Solution for Kattis problem Betting
https://open.kattis.com/problems/betting
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
  int a;

  scanf("%d", &a);
  printf("%f\n%f\n", (100.0) / a, (100.0 / (100 - a)));

  return 0;
}