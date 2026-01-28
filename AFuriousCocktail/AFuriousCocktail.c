/*
AFuriousCocktail.c
Kattis Solution for Kattis problem AFuriousCocktail
https://open.kattis.com/problems/cocktail
Author: eldelbo89
*/

/*
    Problem and solution Explanation:
    Each potion needs the same time to drink (T). Once the previous potion is finished being drunk, the next one starts.
    Each potion has a duration (t).
    In my clarification:
        each unit of the potion's duration (t) is shown as "#".
        each unit of drinking time (T) is shown as "_".

    NT = NxT is the time for the last potion to wait for its turn to be drunk plus its drinking time.
    So we subtract that time from each potion's duration, along with its waiting time and its drinking duration.
    Again we cannot start drinking the next potion until we finish drinking the current one.
    Formula: (i + 1) * T + array[i] - NT


    Input 1:
    5 1
    1
    2
    3
    4
    5

    Rearranged to 5 4 3 2 1
    N = 5, T = 1 -> NT = 5
    Formula: (i + 1) * T + array[i] - NT

    p1: 5  _|# # # # #       : 1 x 1 + 5 - 5 = 1
    p2: 4   |_|# # # #       : 2 x 1 + 4 - 5 = 1
    p3: 3     |_|# # #       : 3 x 1 + 3 - 5 = 1
    p4: 2       |_|# #       : 4 x 1 + 2 - 5 = 1
    p5: 1         |_|#       : 5 x 1 + 1 - 5 = 1

    Answer is YES.

    Input 2:
    3 2
    4
    3
    2

    Rearranged to 4 3 2
    N = 3, T = 2 -> NT = 6
    Formula: (i + 1) * T + array[i] - NT

    p1: 4  __|# # # #       : 1 x 2 + 4 - 6 = 0, which causes the loop to break
    p2: 3    |__|# # #      : 2 x 2 + 3 - 6 = 1
    p3: 2       |__|# #     : 3 x 2 + 2 - 6 = 2

    Answer is NO.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, T, result = 0;
    scanf("%d %d", &N, &T);
    int NT = N * T;
    int *array = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    // sort descending
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (((i + 1) * T) + array[i] - NT <= 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    free(array);
    return 0;
}
