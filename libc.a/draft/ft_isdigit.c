#include "libft.h"

int	ft_isdigit(int nbr)
{
	if (nbr >= 48 && nbr <= 57)
		return (1);
	else
		return (0);
}
