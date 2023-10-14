#include "libft.h"

char *ft_memchr(const void *str, int c, size_t amount)
{
	while (amount)
	{
		if (*(int*)str == c)
			return (char*)str;
		str++;
		amount--;
	}
	return 0;
}