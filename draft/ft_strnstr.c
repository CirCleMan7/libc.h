#include "libft.h"

char    *ft_strnstr(char *str, char *target, int amount)
{
    char    *answer;
    char    *reset_target;
    int     reverse;

    answer = str;
    reset_target = target;
    if (*target == 0)
        return answer;
    while (*str && amount--)
    {
        reverse = 0;
        printf("amount first loop = %d\n", amount);
        while (*str == *target && amount-- != -1)
        {
            printf("amount first loop = %d\n", amount);
            printf("amount second loop = %c and target = %c\n", *str, *target);
            answer = str;
            str++;
            target++;
            if (*target == 0)
            {
                return (answer - reverse);
                reverse = 0;
            }
            reverse += 1;
        }
        target = reset_target;
        str++;
        printf("final cha = %c\n", *str);
    }
    return 0;
}