#include "libft.h"

int	ft_toupper(int nbr)
{
	if (nbr >= 97 && nbr <= 122)
		nbr -= 32;
	return (nbr);
}
