/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:50:41 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 10:51:18 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dest, const void *src, size_t amount)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest < src)
		ft_memcpy(dest, src, amount);
	else if (d > s)
	{
		{
			while (amount--)
				d[amount] = s[amount];
		}
	}
	return (dest);
}

// int main()
// {
//     char s[] = "123456789";

//     printf("%s", ft_memmove(&s[1], s, 4));
// }

/*
	char s[] = "123456789";

		char s[] = "123456789";
		char s[] =   "3456789";

					012345678
		char s[] = "123456789";
		char s[] =   "3456789";

					012345678
		char s[] = "123456789";
		dst s[0] = "345678909"
		src s[2] =


					012345678
		char s[] = "123456789";
		dst s[2] = "  12121212"
		src s[0] =

					012345678
		char s[] = "123456789";
		dst s[2] = "  3456789"
		src s[0] = "123456789"

		px00000x00
		px00000x02

		(dst > src)
*/
