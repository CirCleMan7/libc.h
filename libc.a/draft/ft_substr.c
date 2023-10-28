#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	char *collect_substr;

	if (!(substr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (start-- && *s)
		s++;
	collect_substr = substr;
	while (len-- && *s)
	{
		*substr = *s;
		s++;
		substr++;
	}
	*substr = '\0';
	return (collect_substr);
}

// int main()
// {
//     char *a;
//     a = ft_substr("hola", 0, 185);
//     printf("%s", a);
// }