/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srungsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:09:08 by srungsar          #+#    #+#             */
/*   Updated: 2023/11/05 12:30:15 by srungsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*answer;
	int		front;
	int		back;
	size_t	back_len;

	if (*set == '\0' || *s == '\0')
		return (ft_strdup(s));
	front = 0;
	back_len = 0;
	back = ft_strlen(s) - 1;
	while (ft_strchr(set, s[front]) && s[front])
		front++;
	while (ft_strchr(set, s[back]) && s[front] && back > front)
	{
		back--;
		back_len++;
	}
	s = &s[front];
	answer = malloc((ft_strlen(s) - (back_len) + 1));
	if (!answer)
		return (NULL);
	ft_strlcpy(answer, (char *)s, ft_strlen(s) - back_len + 1);
	return (answer);
}
