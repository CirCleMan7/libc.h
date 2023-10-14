#include "libft.h"

char *ft_memset(char *str, int chr, int amount)
{
    char *start;

    start = str;
    while (amount)
    {
        *str = chr;
        amount--;
        str++;
    }    
    return (start);
}
