/*
KingArthursRoundTable.c
Kattis Solution for Kattis problem KingArthursRoundTable
https://open.kattis.com/problems/kingarthur
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
  float d, w, pi = 3.14159;
  int n;

  scanf("%f %f %d", &d, &w, &n);
  float circumference = pi * d;

  if (n * w <= circumference)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}