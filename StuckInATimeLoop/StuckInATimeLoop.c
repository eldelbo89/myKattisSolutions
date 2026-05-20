/*
StuckInATimeLoop.c
Kattis Solution for Kattis problem Stuck In A Time Loop
https://open.kattis.com/problems/timeloop
Author: eldelbo89
*/

#include <stdio.h>
int main(void)
{
  int x;
  scanf("%d", &x);

  for (int i = 1; i <= x; i++)
    printf("%d Abracadabra\n", i);

  return 0;
}
