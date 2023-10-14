#include "libft.h"

char *ft_strrchr(const char *str, const char chr)
{
	const char	*collect;

	while (*str != 0)
	{
		if (*str == chr)
			collect = str;
		str++;
	}
	return ((char*)collect);
}
