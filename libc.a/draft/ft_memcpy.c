#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_memcpy(void *dest, const void *src, size_t amount)
{
	char *start;

	start = dest;
	while (amount)
	{
		*(char *)dest = *(char *)src;
		amount--;
		dest++;
		src++;
	}
	return (start);
}