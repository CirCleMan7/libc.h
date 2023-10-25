#include "libft.h"

int backtrim(char const *s, char const *set)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (*s)
		s++;
	s--;
	while (*(set + i))
	{
		if (*(set + i) == *s)
		{
			s--;
			i = -1;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char *answer;
	int i;

	i = 0;
	if (*s == '\0')
		return "\0";
	while (*(set + i))
	{
		if (*(set + i) == *s)
		{
			s++;
			i = -1;
		}
		i++;
	}
	if (ft_strlen(s) == 0)
		return ((char *)s);
	if (!(answer = malloc((ft_strlen(s) - backtrim(s, set) + 1) * sizeof(char))))
		return NULL;
	ft_strlcpy(answer, (char *)s, ft_strlen(s) - backtrim(s, set) + 1);
	return (answer);
}