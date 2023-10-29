/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:09:08 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:26:20 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	backtrim(char const *s, char const *set)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*s)
		s++;
	s--;
	while (*(set + i))
	{
		if (*(set + i) == *s)
		{
			s--;
			i = -1;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*answer;
	int		i;
	int		len;

	i = 0;
	len = 1;
	while (*(set + i))
	{
		if (*(set + i) == *s)
		{
			s++;
			i = -1;
		}
		i++;
	}
	if (backtrim(s, set) > (int)ft_strlen(s))
		len = 0;
	answer = malloc((ft_strlen(s) - (backtrim(s, set) * len) + 1)
			* sizeof(char));
	if (!answer)
		return (NULL);
	ft_strlcpy(answer, (char *)s, ft_strlen(s) - (backtrim(s, set) * len) + 1);
	return (answer);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%s", ft_strtrim("", "cdef"));
// }