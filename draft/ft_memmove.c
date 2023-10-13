#include "libft.h"

char *ft_memcpy(char *dest, char *src, int amount)
{
    char *start;

    start = dest;
    while (amount)
    {
        *dest = *src;
        amount--;
        dest++;
        src++;
    }
    
    return (start);
}