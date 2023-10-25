#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long int	number;
	int			minus;

	number = 0;
	minus = 0;
	while ((*str >= 7 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number += *str - 48;
		number *= 10;
		str++;
	}
	if (minus == 1)
		number *= -1;
	number /= 10;
	return (number);
}

// #include <stdlib.h>
// int main()
// {
//     printf("real atoi = %d\n", atoi("8"));
//     printf("fake atoi = %d", ft_atoi("8"));

// }
