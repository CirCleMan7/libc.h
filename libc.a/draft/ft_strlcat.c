#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t amount)
{
	size_t len;

	len = ft_strlen(dest) + ft_strlen(src);
	if (amount <= ft_strlen(dest))
		return (ft_strlen(src) + amount);
	while (*dest)
	{
		dest++;
		amount--;
	}
	while (amount-- - 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (len);
}