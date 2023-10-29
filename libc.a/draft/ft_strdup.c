/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:03:45 by srungsar          #+#    #+#             */
/*   Updated: 2023/10/29 11:04:34 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *orginal)
{
	char	*start;
	char	*copy;
	int		amount;

	amount = ft_strlen(orginal);
	copy = malloc(amount * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	start = copy;
	while (amount--)
	{
		*copy = *orginal;
		copy++;
		orginal++;
	}
	*copy = '\0';
	return (start);
}
