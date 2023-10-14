#include "libft.h"

size_t ft_strlen(const char *s)
{
	int	count;
	char	*str;

	str = (char*)s;
	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
