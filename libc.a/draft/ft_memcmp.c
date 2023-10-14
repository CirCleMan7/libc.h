#include "libft.h"

int    ft_memcmp(const void *str1, const void *str2, size_t amount)
{
    if (amount == 0)
        return 0;
    while (amount && *(int*)str1 == *(int*)str2)
        {
            str1++;
            str2++;
            amount--;
        }
    return (*(int*)str1 - *(int*)str2);
}