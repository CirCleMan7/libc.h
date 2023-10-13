#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

int ft_strlen(char *str);

char *ft_strjoin(char *s1, char *s2)
{
    char *start;
    char *answer;

    answer = malloc(ft_strlen(s1) + ft_strlen(s2));
    start = answer;
    while (*s1)
    {
        *answer = *s1;
        s1++;
        answer++;
    }
    while (*s2)
    {
        *answer = *s2;
        s2++;
        answer++;
    }
    return start;
}

int main()
{
    char    a[20] = "Hello ";
    char    b[20] = "Ball";
    char    *c = ft_strjoin(a, b);

    printf("The answer is : %s", c);
}