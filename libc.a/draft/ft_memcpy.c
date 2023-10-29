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

void	*ft_memcpy(void *dest, const void *src, size_t amount)
{
	void	*start;

	start = dest;
	if (!dest && !src)
		return (NULL);
	while (amount--)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
	}
	return (start);
}

// int	main()
// {
// 	char s[] = "";
// 	printf("%s", ft_memcpy(((void *)0), ((void *)0), 3));
// }
