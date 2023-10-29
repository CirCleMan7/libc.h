/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:07:52 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:08:09 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *target, size_t amount)
{
	if (!(*target))
		return ((char *)str);
	while (*str && amount)
	{
		if (ft_strncmp(str, target, ft_strlen(target)) == 0
			&& amount >= ft_strlen(target))
			return ((char *)str);
		str++;
		amount--;
	}
	return (NULL);
}
