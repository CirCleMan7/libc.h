#include "libft.h"

int ft_isalnum(int nbr)
{
	if ((nbr >= 65 && nbr <= 90) || (nbr >= 97 && nbr <= 122) || (nbr >= 48 && nbr <= 57))
		return 1;
	else
		return 0;
}