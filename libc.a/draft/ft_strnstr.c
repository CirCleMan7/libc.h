#include "libft.h"

char	*ft_strnstr(const char *str, const char *target, size_t amount)
{
	char *answer;
	const char *reset_target;
	int reverse;

	answer = (char *)str;
	reset_target = target;
	if (*target == 0)
		return (answer);
	while (*str && amount--)
	{
		reverse = 0;
		while (*str == *target && (int)amount-- != -1)
		{
			answer = (char *)str;
			str++;
			target++;
			if (*target == 0)
			{
				return ((char *)(answer - reverse));
				reverse = 0;
			}
			reverse += 1;
		}
		target = reset_target;
		str++;
	}
	return (0);
}