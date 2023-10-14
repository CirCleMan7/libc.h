#include "libft.h"

char    *ft_strlcat(char *dest, char *src, int amount)
{
    char *start;
    
    start = dest;
    while (*dest)
    {
        dest++;
        amount--;
    }
    while (amount - 1 && amount > 0)
    {
        *dest = *src;
        dest++;
        src++;
        amount--;
    }
    *dest = 0;
    return (start);
}