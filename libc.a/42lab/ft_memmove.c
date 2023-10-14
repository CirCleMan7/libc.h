#include <stdio.h>
#include <strings.h>

char *ft_memcpy(char *dest, char *src, int amount)
{
    char *start;

    start = dest;
    while (amount)
    {
        *dest = *src;
        amount--;
        dest++;
        src++;
    }
    
    return (start);
}

int main(void)
{
    char a[10] = "Hell\0o world";
    char b[20] = "Don't Do it";
    char x[10] = "Hell\0o world";
    char y[20] = "Don't Do it";

    ft_memcpy(x, y, 5);
    memcpy(a, b, 5);
    printf("This is ft_memset = %s\n", x);
    printf("This is memset    = %s", a);
}