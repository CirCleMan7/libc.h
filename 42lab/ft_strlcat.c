#include <string.h>
#include <stdio.h>

char    *ft_strlcat(char *dest, char *src, int amount)
{
    char *start;
    int count = 0;

    start = dest;
    while (*dest)
    {
        dest++;
        amount--;
    }
    while (amount - 1 && amount > 0)
    {
        *dest = *src;
        dest++;
        src++;
        amount--;
    }
    *dest = 0;
    return (start);
}

int main()
{
    char a[10] = "got";
    char b[10] = "World";
    char x[10] = "got";
    char y[10] = "World";

    //strlcat(a, b, 5);
    ft_strlcat(x, y, 10);
    printf("ft_strlcpy = %s", x);
    //printf("strlcat    = %s", a);
}