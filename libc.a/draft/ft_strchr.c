#include "libft.h"

char *ft_strchr(const char *s, int chr)
{
	char	*str;
	str = (char*)s;
	while (*str != chr)
		str++;
	return str;
}