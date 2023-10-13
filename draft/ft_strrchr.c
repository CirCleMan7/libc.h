#include "libft.h"

char *ft_strrchr(char *str, char chr)
{
	char	*collect;

	while (*str != 0)
	{
		if (*str == chr)
			collect = str;
		str++;
	}
	return (collect);
}
