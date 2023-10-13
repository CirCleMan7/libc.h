#include "libft.h"

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