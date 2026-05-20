/*
RectangleArea.c
Kattis Solution for Kattis problem Rectangle Area
https://open.kattis.com/problems/rectanglearea
Author: eldelbo89
*/
#include <stdio.h>

int main()
{
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float area = ((y2 - y1) * (x2 - x1));
    if (area < 0)
    {
        area = -area;
    }
    printf("%.3f\n", area);
    return 0;
}