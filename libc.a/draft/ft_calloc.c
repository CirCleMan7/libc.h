#include "libft.h"

char *ft_calloc(int count, int size)
{
    char *box;
    int number;
    char *start;

    number = count * size;
    box = malloc(number);
    start = box;
    while (number--)
    {
        *box = 4;
        box++;
    }
    return start;
}