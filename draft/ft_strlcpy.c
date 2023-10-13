#include "libft.h"

char    *ft_strlcpy(char *dest, char *src, int amount)
{
    char *start;

    start = dest;
    while (amount - 1)
    {
        *dest = *src;
        dest++;
        src++;
        amount--;
    }
    *dest = 0;
    return (start);
}