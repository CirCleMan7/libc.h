#include "libft.h"

int ft_atoi(char *str)
{
    int number;
    int count;

    number = 0;
    count = 0;
    
    while ((*str >= 7 && *str <= 13) || *str == 32)
        str++;
    while (*str == '-')
    {
        count++;
        str++;
    }
    while ((*str >= '0' && *str <= '9') && (count == 1 || count == 0))
    {
        number += *str - 48;
        number *= 10;
        str++;
    }
    if (count == 1)
        number *= -1;
    number /= 10;
    return (number);
}