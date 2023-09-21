#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int main()
{
	char *a;

	a = "dwkopqdoqkqowkdopqkodkwk djqw dnjq wndi02dn 01294 801u 2-32203 .2. -/z-< ";
	printf("ft_strlen = %d\n", ft_strlen(a));
	printf("strlen = %lu\n", strlen(a));
}
