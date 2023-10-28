#include "libft.h"
#include <stdio.h>

// char    upper(unsigned int nbr, char s)
// {
//     return (ft_toupper(s));
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*collect;
	int		i;

	i = 0;
	if (!(str = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	collect = str;
	while (*s)
	{
		*str = f(i++, *s);
		str++;
		s++;
	}
	*str = '\0';
	return (collect);
}

// int main()
// {
//     printf("%s", ft_strmapi("hello", upper));
// }