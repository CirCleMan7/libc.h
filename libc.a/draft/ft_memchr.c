/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:50:10 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 10:50:14 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *str, int c, size_t amount)
{
	while (amount--)
	{
		if (*(char *)str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
