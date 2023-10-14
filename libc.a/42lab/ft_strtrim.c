#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strnstr.c"

char *ft_strnstr(char *str, char *target, int amount);
int ft_strlen(char *str);

char *ft_strtrim(char *s, char *set)
{
    char *start;
    char *answer;
    char *remove_point;

    remove_point = ft_strnstr(s, set, ft_strlen(s));
    answer = malloc(ft_strlen(s) - ft_strlen(set));
    start = answer;
    while (*s)
    {
        if (s == remove_point)
            s += ft_strlen(set);
        *answer = *s;
        s++;
        answer++;
    }
    return start;
}

int main()
{
    char test[20] = "Hello gotWorld";
    char set[20] = "Hello";
    char *output;

    output = ft_strtrim(test, set);
    printf("output = %s", output);
}