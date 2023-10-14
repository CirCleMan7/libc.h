#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int nbr)
{
	if ((nbr >= 65 && nbr <= 90) || (nbr >= 97 && nbr <= 122) || (nbr >= 48 && nbr <= 57))
		return 1;
	else
		return 0;
}

int main()
{
	for(int i = 0; i<=1000; i++)
	{
		if (ft_isalnum(i) == isalnum(i))
			printf("%d Correct %d %d\n", i, ft_isalnum(i), isalnum(i));
		else
			printf("%d False   %d %d\n", i, ft_isalnum(i), isalnum(i));
	}
}
