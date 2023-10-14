#include <unistd.h>
#include <stdio.h>
#include "ft_libc.h"

void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    
}

int main()
{
    char s[20] = "Hello";
    char a[20] = "World";
    ft_putstr_fd(s, 1);
    ft_putstr_fd(a, 1);
}