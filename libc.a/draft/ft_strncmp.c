#include "libft.h"

int    ft_strncmp(const char *str1, const char *str2, size_t amount)
{
    if (amount == 0)
        return 0;
    while (amount && *str1 == *str2 && *str1 && *str2)
        {
            str1++;
            str2++;
            amount--;
        }
    return (*str1 - *str2);
}