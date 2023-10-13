#include <stdio.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(1, "\n", 1);
}

int main()
{
    char s[20] = "Hello";
    char a[20] = "World";
    ft_putendl_fd(s, 1);
    ft_putendl_fd(a, 1);
}