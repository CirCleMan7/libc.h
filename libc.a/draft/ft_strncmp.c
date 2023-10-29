/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:07:39 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:07:40 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t amount)
{
	if (amount == 0)
		return (0);
	while (amount - 1 && *str1 == *str2 && *str1 && *str2)
	{
		str1++;
		str2++;
		amount--;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_strncmp("1", "1", 1));
// }
