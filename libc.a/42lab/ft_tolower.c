#include <stdio.h>
#include <ctype.h>

int ft_tolower(int nbr)
{
	if (nbr >= 65 && nbr <= 90)
		nbr +=32;
	return (nbr);
}

int main()
{
	for(int i = -100; i<=500; i++)
	{
		if (ft_tolower(i) == tolower(i))
			printf("%d Correct %d %d\n", i, ft_tolower(i), tolower(i));
		else
			printf("%d False   %d %d\n", i, ft_tolower(i), tolower(i));
	}
}
