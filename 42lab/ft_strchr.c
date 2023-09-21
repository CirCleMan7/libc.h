#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, char chr)
{
	while (*str != chr)
		str++;
	return (str);
}

int main()
{
	char *a;

	a = "He  ee eee eeeee llo";
	printf("ft_strchr = %s\n", ft_strchr(a, 'l'));
	printf("strchr = %s", strchr(a, 'l'));
}
