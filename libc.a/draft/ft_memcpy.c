/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:18:33 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:19:40 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_memcpy(void *dest, const void *src, size_t amount)
{
	char	*start;

	start = dest;
	if (*(char *)dest == '\0' && *(char *)src == '\0')
		return (start);
	while (amount--)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
	}
	return (start);
}

//int	main()
//{
	//printf("%s", ft_memcpy(((void *)0), ((void *)0), 3));
//}
