#include "libft.h"

int	strings_len(char *s, char c)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	printf("strings_len = %d\n", count);
	return (count);
}

int	string_len(char *s, char c)
{
	int	count;

	count = 0;
	while (*s && *s != c)
	{
		s++;
		count++;
	}
	printf("string_len = %d\n", count);
	return (count);
}

char *collectstring(char *s, char c)
{
    char *collect;
    int i;

    i = 0;
    if (!(collect = malloc(100)))
        return (NULL);
    while (*s != c && *s)
    {
        *collect = *s;
        collect++;
        s++;
    }
    *collect = '\0';
    return (collect);
}

char	**ft_split(char *s, char c)
{
	char	**answer;
	char	**start;
	int		j;
	int		i;

	if (!(answer = malloc(strings_len(s, c) * sizeof(char) + 1)))
		return (NULL);
	start = answer;
	i = 0;
	while (*s)
	{
		answer[i] = collectstring(s, c);
		printf("the string in function : %s\n", answer[i]);
		i++;
        while (*(s - 1) != c && *s)
		    s++;
	}
	return (answer);
}

int	main(void)
{
	char s[100] = ",,,wor,ld,hello,worel,wffe,home,9";
	char **test;

	test = ft_split(s, ',');
	printf("\n%s\n", test[0]);
	for (int i = 0; i < 9; i++)
		printf("This array[%d] = %s\n", i, test[i]);
}