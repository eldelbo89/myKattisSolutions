/*
ChanukahChallenge.c
Kattis Solution for Kattis problem ChanukahChallenge
https://open.kattis.com/problems/chanukah
Author: eldelbo89
*/

#include <stdio.h>

int main(void)
{
  int P;

  scanf("%d", &P);
  for (int i = 0; i < P; i++)
  {
    int K, N;
    scanf("%d %d", &K, &N);
    printf("%d %d\n", K, N * (N + 1) / 2 + N);
  }
  return 0;
}