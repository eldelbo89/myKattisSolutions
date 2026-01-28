/*
CosmicPathOptimization.c
Kattis Solution for Kattis problem CosmicPathOptimization
https://open.kattis.com/problems/cosmicpathoptimization
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
  int M, total = 0;

  scanf("%d ", &M);
  for (int i = 0; i < M; i++)
  {
    int tmp;
    scanf("%d", &tmp);
    total += tmp;
  }

  printf("%d\n", total / M);

  return 0;
}