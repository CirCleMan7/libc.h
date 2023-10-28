#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *box;
	int number;
	char *start;

	number = count * size;
	if (!(box = malloc(number)))
		return (NULL);
	start = box;
	while (number--)
	{
		*box = 0;
		box++;
	}
	return (start);
}