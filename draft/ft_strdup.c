#include "libft.h"

char *ft_strdup(char *orginal)
{
    char    *start;
    char    *copy;
    int amount;

    amount = ft_strlen(orginal);
    copy = malloc(amount);
    start = copy;
    while (amount--)
    {
        *copy = *orginal;
        copy++;
        orginal++;
    }
    return start;
}