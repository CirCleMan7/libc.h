#include "libft.h"

void ft_bzero(void *s, size_t amount)
{
	char *str;

	str = s;
	while (amount)
	{
		*str = 0;
		str++;
		amount--;
	}
}