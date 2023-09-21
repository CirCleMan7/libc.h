#include <stdio.h>
#include <ctype.h>

int ft_toupper(int nbr)
{
	if (nbr >= 97 && nbr <= 122)
		nbr -=32;
	return (nbr);
}

int main()
{
	for(int i = -100; i<=500; i++)
	{
		if (ft_toupper(i) == toupper(i))
			printf("%d Correct %d %d\n", i, ft_toupper(i), toupper(i));
		else
			printf("%d False   %d %d\n", i, ft_toupper(i), toupper(i));
	}
}
