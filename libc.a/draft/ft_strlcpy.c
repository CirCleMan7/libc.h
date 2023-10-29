/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:06:25 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:06:30 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t amount)
{
	size_t	lensrc;

	lensrc = ft_strlen(src);
	while (amount - 1 && amount > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		amount--;
	}
	if (amount > 0)
		*dest = 0;
	return (lensrc);
}

// #include <string.h>
// int main()
// {
//     char a[10] = "Hellokdw";
//     char b[10] = "Wor\0ld";
//     char x[10] = "Hellokdw";
//     char y[10] = "Wor\0ld";

//     printf("ft_strlcpy = %s and %zu\n", x, ft_strlcpy(x, y, 6));
//     printf("strlcpy    = %s and %lu\n", a, strlcpy(a, b, 6));
//     for (int i = 0; i < 10; i++)
//         printf("ft_strlcpy[%d] = %c\n", i, x[i]);
//     for (int i = 0; i < 10; i++)
//         printf("strlcpy[%d] = %c\n", i, a[i]);
// }
