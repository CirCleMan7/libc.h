/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:23:11 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:25:19 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*box;
	int		number;
	char	*start;

	number = count * size;
	box = malloc(number);
	if (!box)
		return (NULL);
	start = box;
	while (number--)
	{
		*box = 0;
		box++;
	}
	return (start);
}
