#include "libft.h"

char	*ft_memset(void *str, int chr, size_t amount)
{
	char	*start;

	start = str;
	while (amount)
	{
		*(char *)str = (char)chr;
		amount--;
		str++;
	}
	return (start);
}
