#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
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