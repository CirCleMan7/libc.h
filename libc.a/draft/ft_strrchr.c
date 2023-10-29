/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:08:26 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:13:13 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*collect;

	collect = NULL;
	while (*str)
	{
		if (*str == (char)c)
			collect = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)collect);
}
