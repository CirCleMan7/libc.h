#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int nbr)
{
	if (nbr >= 48 && nbr <= 57)
		return 1;
	else
		return 0;
}

int main()
{
	for(int i = 0; i<=1000; i++)
	{
		if (ft_isdigit(i) == isdigit(i))
			printf("%d Correct %d %d\n", i, ft_isdigit(i), isdigit(i));
		else
			printf("%d False   %d %d\n", i, ft_isdigit(i), isdigit(i));
	}
}
