#include "libft.h"
#include <string.h>

char	*ft_strlcat(char *dest, char *src, size_t amount)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
		amount--;
	}
	while (amount-- - 1 && amount > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (start);
}

int	main(void)
{
}