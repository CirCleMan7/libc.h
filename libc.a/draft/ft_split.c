/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:15:35 by srungsar          #+#    #+#             */
/*   Updated: 2023/11/05 15:19:59 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strings_len(char *s, char c)
{
	int	count;
	int	str;

	str = 0;
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
	return (count);
}

char	*collectstring(char **s, char c)
{
	char	*collect;
	char	*start;

	collect = malloc((string_len(*s, c) + 1));
	if (!collect)
		return (NULL);
	start = collect;
	while (**s == c && **s)
		(*s)++;
	while (**s && **s != (char)c)
	{
		*collect = **s;
		collect++;
		(*s)++;
	}
	while (**s == c && **s)
		(*s)++;
	*collect = 0;
	return (start);
}

void	free_split(char **answer, int i)
{
	int	len;

	len = 0;
	while (len < i)
	{
		free(answer[len]);
		len++;
	}
	free(answer);
}

char	**ft_split(char *s, char c)
{
	char	**answer;
	int		i;
	int		len;

	answer = ft_calloc((strings_len(s, c) + 1), sizeof(char *));
	if (!answer)
		return (NULL);
	i = 0;
	len = strings_len(s, c);
	while (*s && *s == c)
		s++;
	while (*s && len-- > 0)
	{
		answer[i] = collectstring(&s, c);
		if (!answer[i])
		{
			free_split(answer, i);
			return (NULL);
		}
		i++;
	}
	return (answer);
}
