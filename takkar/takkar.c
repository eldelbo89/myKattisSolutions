/*
takkar.c
Kattis Solution for Kattis problem takkar
https://open.kattis.com/problems/takkar
Author: eldelbo89
*/

#include <stdio.h>
#define TRUMP "MAGA!"
#define KIM "FAKE NEWS!"
#define WAR "WORLD WAR 3!"
int main(void)
{
  int trump, kim;
  scanf("%d %d", &trump, &kim);
  if (trump > kim)
    printf("%s\n", TRUMP);
  else if (kim > trump)
    printf("%s\n", KIM);
  else
    printf("%s\n", WAR);
  return 0;
}
