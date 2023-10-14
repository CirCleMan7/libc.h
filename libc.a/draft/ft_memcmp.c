#include "libft.h"

int    ft_memcmp(const void *str1, const void *str2, size_t amount)
{
    unsigned char *s1;
    unsigned char *s2;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    if (amount == 0)
        return 0;
    while (amount-- - 1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}