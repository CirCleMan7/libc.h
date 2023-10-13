#include "libft.h"

int ft_tolower(int nbr)
{
	if (nbr >= 65 && nbr <= 90)
		nbr +=32;
	return (nbr);
}
