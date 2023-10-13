#include "libft.h"

int ft_strlen(char *str);

char *ft_substr(char *s, unsigned int start, int len)
{
    char *substr;
    char *collect_substr;

    while (start--)
    {
        s++;
    }
    substr = malloc(ft_strlen(s));
    collect_substr = substr;
    while (len--)
    {
        *substr = *s;
        s++;
        substr++;
    }
    *substr = 0;
    return collect_substr;
    
}