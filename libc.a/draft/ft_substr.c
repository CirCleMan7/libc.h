/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:13:57 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:26:28 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_substr(char const *s, unsigned int start, size_t len)
{
	int	count;

	count = 0;
	while (*s && start)
	{
		s++;
		start--;
	}
	while (len-- && *s)
	{
		count++;
		s++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*collect_substr;

	substr = malloc((len_substr(s, start, len) + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start-- && *s)
		s++;
	collect_substr = substr;
	while (len-- && *s)
	{
		*substr = *s;
		s++;
		substr++;
	}
	*substr = '\0';
	return (collect_substr);
}
