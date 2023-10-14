#include <stdio.h>
#include <ctype.h>

int ft_isprint(int nbr)
{
	if (nbr >= 32 && nbr <= 126)
		return 1;
	else
		return 0;
}

int main()
{
	for(int i = -1000; i<=1000; i++)
	{
		if (ft_isprint(i) == isprint(i))
			printf("%d Correct %d %d\n", i, ft_isprint(i), isprint(i));
		else
			printf("%d False   %d %d\n", i, ft_isprint(i), isprint(i));
	}
}
