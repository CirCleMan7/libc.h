#include "libft.h"

int    ft_strncmp(char *str1, char *str2, int amount)
{
    int diff = 0;
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