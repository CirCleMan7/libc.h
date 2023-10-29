/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:51:30 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 10:51:31 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *str, int chr, size_t amount)
{
	char	*start;

	start = str;
	while (amount)
	{
		*(char *)str = (char)chr;
		amount--;
		str++;
	}
	return (start);
}
