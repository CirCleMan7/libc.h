#include "libft.h"

char	*ft_memchr(const void *str, int c, size_t amount)
{
	while (amount--)
	{
		if (*(char *)str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}