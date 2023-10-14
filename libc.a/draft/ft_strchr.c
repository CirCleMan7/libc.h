#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char	*str;
	str = (char*)s;
	while (*str || (char)c == '\0')
	{
		if (*str == (char)c)
			return str;
		str++;
	}
	return NULL;
}