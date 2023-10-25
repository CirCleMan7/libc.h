#include "libft.h"

char	*ft_strdup(const char *orginal)
{
	char *start;
	char *copy;
	int amount;

	amount = ft_strlen(orginal);
	if (!(copy = malloc(amount * sizeof(char) + 1)))
		return (NULL);
	start = copy;
	while (amount--)
	{
		*copy = *orginal;
		copy++;
		orginal++;
	}
	*copy = '\0';
	return (start);
}