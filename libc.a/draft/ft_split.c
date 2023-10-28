#include "libft.h"

int	strings_len(char *s, char c)
{
	int	count;
	int str = 0;

	count = 0;
	while (*s)
	{
		if (*s != c && str == 0 && *s)
		{
			str = 1;
			count++;
		}
		else if (*s != c && *s)
			s++;
		else if (*s)
		{
			str = 0;
			s++;
		}
	}
	// printf("strings_len = %d\n", count);
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
	// printf("string_len = %d\n", count);
	return (count);
}

char *collectstring(char *s, char c)
{
    char *collect;
	char *start;

    if (!(collect = malloc((string_len(s, c) + 1) * sizeof(char))))
        return (NULL);
    start = collect;
	// if (*s == c)
	// 	s++;
	// printf("s in collectstring : %s\n", s);
    while (*s && *s != (char)c)
    {
        *collect = *s;
		// printf("*collect : %c\n", *collect);
		// printf("collect : %c\n", *collect);
        collect++;
        s++;
    }
    *collect = 0;
	// printf("start : %s\n", start);
    return (start);
}

char	**ft_split(char *s, char c)
{
	char	**answer;
	char	**start;
	int		i;
	int		len;

	answer = malloc((strings_len(s, c) + 1) * sizeof(char*));
	if (!answer)
		return (NULL);
	start = answer;
	i = 0;
	len = strings_len(s, c);
	while (*s)
	{
		if (*s != (char)c && *s && len > 0) 
		{
			answer[i] = collectstring(s, c);
			if (len-- > 1)
				s = ft_strchr(s, c);
			i++;
		}
		else
			s++;;
	}
	answer[i] = 0;
	return (answer);
}

// int	main(void)
// {
// 	char s[100] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	char **test;

// 	test = ft_split(s, ' ');
// 	for (int i = 0; test[i]; i++)
// 		printf("This array[%d] = %s\n", i, test[i]);
// }
