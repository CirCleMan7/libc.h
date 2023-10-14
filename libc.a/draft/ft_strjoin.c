#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *start;
    char *answer;

    answer = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
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