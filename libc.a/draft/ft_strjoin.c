/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:05:13 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:05:39 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*start;
	char	*answer;

	answer = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!answer)
		return (NULL);
	start = answer;
	while (*s1)
	{
		*answer = *s1;
		s1++;
		answer++;
	}
	while (*s2)
	{
		*answer = *s2;
		s2++;
		answer++;
	}
	*answer = '\0';
	return (start);
}
