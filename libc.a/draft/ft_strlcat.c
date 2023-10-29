/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:05:54 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:06:14 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t amount)
{
	size_t	len;

	len = ft_strlen(dest) + ft_strlen(src);
	if (amount <= ft_strlen(dest))
		return (ft_strlen(src) + amount);
	while (*dest)
	{
		dest++;
		amount--;
	}
	while (amount-- - 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (len);
}
