#include <stdio.h>
#include <string.h>

char *ft_strrchr(char *str, char chr)
{
	char	*collect;

	while (*str != 0)
	{
		if (*str == chr)
			collect = str;
		str++;
	}
	return (collect);
}

int main()
{
	char *a;

	a = "He  ee eele eeedsfdmfopsopekowfeokwfee llo";
	printf("ft_strrchr = %s\n", ft_strrchr(a, 'f'));
	printf("strrchr = %s", strrchr(a, 'f'));
}
