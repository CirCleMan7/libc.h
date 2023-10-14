#include <stdio.h>
#include <strings.h>

char *ft_memset(char *str, int chr, int amount)
{
    char *start;

    start = str;
    while (amount)
    {
        *str = chr;
        amount--;
        str++;
    }
    
    return (start);
}

int main(void)
{
    char a[20] = "Hell\0o world";
    char b[20] = "Hell\0o world";

    a[1] = 'H';
    ft_memset(b, 'K', 5);
    memset(a, 'K', 5);
    printf("This is ft_memset = %s\n", b);
    printf("This is memset    = %s", a);
}