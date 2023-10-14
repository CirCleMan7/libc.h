#include "libft.h"
#include <stdio.h>
#include <string.h>
char *ft_memmove(void *dest, char *src, size_t amount)
{
    char	*start;

    start = dest;
    while (amount)
    {
        *(char*)dest = *(char*)src;
        amount--;
        dest++;
        src++;
    } 
    return (start);
}