#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *start;
	char *answer;

	if (!(answer = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	start = answer;
	while (*s1)
	{
		*answer = *s1;
		s1++;
		answer++;
	}
	while (*s2)
	{
		*answer = *s2;
		s2++;
		answer++;
	}
	*answer = '\0';
	return (start);
}