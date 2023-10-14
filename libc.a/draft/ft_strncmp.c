#include "libft.h"

int    ft_strncmp(const char *str1, const char *str2, size_t amount)
{
    if (amount == 0)
        return 0;
    while (amount - 1 && *str1 == *str2 && *str1 && *str2)
        {
            str1++;
            str2++;
            amount--;
        }
    return ((unsigned char)*str1 - (unsigned char)*str2);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d", ft_strncmp("1234", "1235", 3));
// }