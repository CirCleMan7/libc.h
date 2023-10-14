#include <stdio.h>
#include <unistd.h>
#include "ft_itoa.c"


void    ft_putnbr_fd(int n, int fd)
{
    char *charnum;

    charnum = ft_itoa(n);
    while (*charnum)
    {
        write(fd, charnum, 1);
        charnum++;
    }
}

int main()
{
    int a;
    a = 12002334;
    ft_putnbr_fd(a, 1);
}