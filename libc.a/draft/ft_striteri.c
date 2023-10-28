#include "libft.h"
#include <stdio.h>

// void    upper(unsigned int nbr, char *s)
// {
//     *s = ft_toupper(*s);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int main()
// {
//     char a[] = "hello";
//     ft_striteri(a, upper);
//     printf("%s", a);
// }