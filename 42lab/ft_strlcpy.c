#include <string.h>
#include <stdio.h>

char    *ft_strlcpy(char *dest, char *src, int amount)
{
    char *start;

    start = dest;
    while (amount - 1)
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
    char a[10] = "Hellokdw";
    char b[10] = "World";
    char x[10] = "Hellokdw";
    char y[10] = "World";

    //strlcpy(a, b, 4);
    ft_strlcpy(x, y, 4);
    printf("ft_strlcpy = %s\n", x);
    //printf("strlcpy    = %s", a);
}