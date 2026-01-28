/*
DecimalDeletion.c
Kattis Solution for Kattis problem DecimalDeletion
https://open.kattis.com/problems/decimaldeletion
Author: eldelbo89
*/

#include <stdio.h>
// It is possible to use roundf from <math.h>.

int main(void)
{
    float N;
    scanf("%f", &N);
    if ((int)(N * 10) % 10 >= 5)
    {
        N += 1;
    }
    printf("%d\n", (int)N);
    return 0;
}
