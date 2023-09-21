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
    char a[20] = "Hell\0o world";
    char b[10] = "Please";
    char x[20] = "Hell\0o world";
    char y[10] = "Please";

    ft_memcpy(x, x + 3, 8);
    memcpy(a, a + 3, 8);
    printf("This is ft_memset = %s\n", x);
    printf("This is memset    = %s", a);
}