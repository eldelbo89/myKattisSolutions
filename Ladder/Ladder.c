/*
Ladder.c
Kattis Solution for Kattis problem Ladder
https://open.kattis.com/problems/ladder
Author: eldelbo89
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int h, v;

    scanf("%d %d", &h, &v);
    double pi = acos(-1.0);
    double angle_rad = v * pi / 180.0;
    double hypotenuse = h / sin(angle_rad);
    printf("%d\n", (int)ceil(hypotenuse));

    return 0;
}
