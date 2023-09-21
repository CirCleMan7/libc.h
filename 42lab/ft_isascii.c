#include <stdio.h>
#include <ctype.h>

int ft_isascii(int nbr)
{
	if (nbr >= 0 && nbr <= 127)
		return 1;
	else
		return 0;
}

int main()
{
	for(int i = -1000; i<=1000; i++)
	{
		if (ft_isascii(i) == isascii(i))
			printf("%d Correct %d %d\n", i, ft_isascii(i), isascii(i));
		else
			printf("%d False   %d %d\n", i, ft_isascii(i), isascii(i));
	}
}
