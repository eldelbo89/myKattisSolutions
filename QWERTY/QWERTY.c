/*
QWERTY.c
Kattis Solution for Kattis problem QWERTY
https://open.kattis.com/problems/qwerty
Author: eldelbo89
*/

#include <stdio.h>

int main()
{
    int N;
    char qwerty[] = {
        'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
        'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
        'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    scanf("%d ", &N);

    for (int i = 0; i < N; i++)
    {
        char c;
        scanf("%c", &c);
        if (c >= 'a' && c <= 'z')
        {
            c = qwerty[c - 'a'];
        }

        printf("%c", c);
    }
    printf("\n");
    return 0;
}

/*

#include <stdio.h>

char realKey(char c){
    switch (c){
        case 'a': return 'q';
        case 'b': return 'w';
        case 'c': return 'e';
        case 'd': return 'r';
        case 'e': return 't';
        case 'f': return 'y';
        case 'g': return 'u';
        case 'h': return 'i';
        case 'i': return 'o';
        case 'j': return 'p';
        case 'k': return 'a';
        case 'l': return 's';
        case 'm': return 'd';
        case 'n': return 'f';
        case 'o': return 'g';
        case 'p': return 'h';
        case 'q': return 'j';
        case 'r': return 'k';
        case 's': return 'l';
        case 't': return 'z';
        case 'u': return 'x';
        case 'v': return 'c';
        case 'w': return 'v';
        case 'x': return 'b';
        case 'y': return 'n';
        case 'z': return 'm';
        default: return c;
    }
}
int main()
{
    int N;

    scanf("%d ", &N);
    for(int i = 0; i < N; i++){
        char c;
        scanf("%c", &c);
        printf("%c", realKey(c));
    }
    printf("\n");
    return 0;
}
*/