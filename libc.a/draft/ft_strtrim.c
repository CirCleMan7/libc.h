#include "libft.h"

char *ft_strtrim(char const *s, char const *set)
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