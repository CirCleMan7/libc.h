#include "libft.h"

char *ft_strchr(char *str, char chr)
{
	while (*str != chr)
		str++;
	return (str);
}