#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char *collect;

	collect = NULL;
	while (*str)
	{
		if (*str == (char)c)
			collect = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)collect);
}