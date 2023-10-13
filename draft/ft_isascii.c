#include "libft.h"

int ft_isascii(int nbr)
{
	if (nbr >= 0 && nbr <= 127)
		return 1;
	else
		return 0;
}